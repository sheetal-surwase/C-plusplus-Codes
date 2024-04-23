#include<iostream>
using namespace std;

template <class T>
void Swap(T &No1, T &No2)
{
    int Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    float fValue1=10.2;
    float fValue2=20.4;
    double dValue1=10.9;
    double dValue2=20.9;
    int iValue1=10;
    int iValue2=20;

    cout<<"Value of iValue1: "<<iValue1<<"\n";
    cout<<"Value of iValue2: "<<iValue2<<"\n";

    cout<<"-------------------int-------------------"<<"\n";

    Swap(iValue1, iValue2);
    
    cout<<"Value of iValue1: "<<iValue1<<"\n";
    cout<<"Value of iValue2: "<<iValue2<<"\n";

    cout<<"--------------------------------------"<<"\n";

    cout<<"Value of iValue1: "<<dValue1<<"\n";
    cout<<"Value of iValue2: "<<dValue2<<"\n";

    cout<<"-------------------------double-------------"<<"\n";

    Swap(dValue1, dValue2);
    
    cout<<"Value of iValue1: "<<dValue1<<"\n";
    cout<<"Value of iValue2: "<<dValue2<<"\n";

    cout<<"--------------------------------------"<<"\n";

    cout<<"Value of iValue1: "<<fValue1<<"\n";
    cout<<"Value of iValue2: "<<fValue2<<"\n";

    cout<<"----------------------float----------------"<<"\n";

    Swap(fValue1, fValue2);
    
    cout<<"Value of iValue1: "<<fValue1<<"\n";
    cout<<"Value of iValue2: "<<fValue2<<"\n";


    return 0;
}