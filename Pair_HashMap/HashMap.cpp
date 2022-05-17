#include "HashMap.h"

HashMap::HashMap()
{
  pos=0;
}

int HashMap::getNumberOfItems()
{
  return pos;
}

Pair* HashMap::find(int key, int &pos)
{
  int i;
  for(i=0;i<this->pos;i++)
  {
    if(items[i]->getKey()==key)
    {
      pos=i;
      return items[i];
    }
  }
  pos=-1;
  return nullptr;
}

void HashMap::clear()
{
  pos=0;
}

Pair* HashMap::get(int pos)
{
  if(this->pos-1<pos)
  {
    return nullptr;
  }
  return items[pos];
}

bool HashMap:: add(int key, const char* value)
{
  int POS;
  Pair *x;
  x=new Pair(key,value);
  if(find(key,POS)==nullptr&&this->pos<=9) 
  {
    items[this->pos]=x;
    this->pos+=1;
    return true;
  }
  return false;
}

HashMap HashMap::operator+(Pair *p)
{
  int POS;
  if(find(p->getKey(),POS)==nullptr && this->pos<=9)
  {
    items[this->pos]=p;
    pos=pos+1;
  }
  return *this;
}

HashMap HashMap::operator-(int key)
{
  int POS,i;
  if(find(key,POS)!=nullptr)
  {
    if(POS==9)
    {
      this->pos=9;
    }
    else
    {
      for(i=POS+1;i<this->pos;i++)
      {
        items[i-1]=items[i];
      }
      this->pos=this->pos-1;
    }
  }
  return *this;
}






