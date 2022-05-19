#include "Controller.h"
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void Controller::save(Product products[], const char *filename, int num) {
    ofstream f;
    f.open(filename, ios::out | ios::app);
    if(!f.is_open())
    {
        cerr<<"Could not open file"<<endl;
    }
    else {
        //cout<<"File opened successfully"<<endl;
        int i;
        for(i=0;i<num;i++) {
           f<<products[i].getName()<<" "<<products[i].getPrice()<<endl;
        }
        f.close();
    }
}

void Controller::load(const char *filename, Product products[]) {
    ifstream f;
    f.open(filename, ios::in);
    if(!f.is_open())
    {
        cerr<<"Could not open file"<<endl;
    }
    else {
        int i=0;
        float p;
        char* n;
        while(!f.eof()) {
            n=new char[20];
            f>>n>>p;
            products[i].setName(n);
            products[i].setPrice(p);
            i++;
            delete[] n;
    }
    f.close();
    }
}