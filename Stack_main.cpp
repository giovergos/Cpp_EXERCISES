/* Create a class Stack which includes:
1. Blank constructor Stack() which creates an array by allocating memory for 10 elements.
2. Constructor Stack(int n) which creates an array by allocating memory for n elements.
3. Constructor Stack(Stack &other) which creates a copy of parameter's array.
4. Destructor ~Stack() which deallocates array's memory.
5. Function isEmpty() which returns true or false depending on array's elements.
6. Function pop(int &element) which returns true if the array is not empty and sets the top element of the array in the parameter.
7. Function push(int element) which adds the parameter's element into array. If the array is full, it expands array's memory by 5 positions and then add the element. If the insertion is successful, function returns true.
The main code is given. */

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    int n,push1a,push1b,pop1,push2a,push2b,pop2;
    cin>>n>>push1a>>push1b>>pop1>>push2a>>push2b>>pop2;

    Stack s1(n);
    cout<<"Stack S1 with "<<n<<" positions has been created."<<endl;
    if (s1.isEmpty())
        cout<<"Stack S1 is empty."<<endl;

    int i, k;
    for (i=push1a;i<push1b+1;i++)
    {
        s1.push(i);
        cout<<"S1 PUSH "<<i<<"."<<endl;
    }
    for (i=0;i<pop1;i++)
    {
        if (s1.pop(k))
            cout<<"S1 POP. Item found:"<<k<<endl;
        else
            cout<<"S1 POP. Stack is Empty."<<endl;
    }

    Stack s2(s1);
    cout<<"A copy of the first stack has been created."<<endl;

    for (i=push2a;i<push2b+1;i++)
    {
        s2.push(i);
        cout<<"S2 PUSH "<<i<<"."<<endl;
    }
    for (i=0;i<pop2;i++)
    {
        if (s2.pop(k))
            cout<<"S2 POP. Item found:"<<k<<endl;
        else
            cout<<"S2 POP. Stack is Empty."<<endl;
    }

    Stack s3;
    cout<<"Another stack S3 with 10 positions has been created."<<endl;

    if (s1.isEmpty())
        cout<<"Stack S1 is empty."<<endl;
    else
        cout<<"Stack S1 is not empty."<<endl;
    if (s2.isEmpty())
        cout<<"Stack S2 is empty."<<endl;
    else
        cout<<"Stack S2 is not empty."<<endl;
    if (s3.isEmpty())
        cout<<"Stack S3 is empty."<<endl;
    else
        cout<<"Stack S3 is not empty."<<endl;

    return 0;
}
