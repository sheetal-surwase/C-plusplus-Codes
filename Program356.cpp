#include<iostream>

using namespace std;

int Addition(int No1, int No2)
{
    int Ans=0;

    Ans = No1+No2;
    return Ans;
}

int main()
{
    int Value1=0, Value2=0, iRet=0;

    iRet = Addition(Value1, Value2);

    cout<< " Addition is: "<<iRet<<"\n";

    return 0;
}