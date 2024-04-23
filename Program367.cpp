#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

    Arithmetic(int A, int B);
    
    int Addition();
  
};

Arithmetic::Arithmetic (int A, int B)
{
    this->No1 = A;
    this->No2 = B;


}
int Arithmetic :: Addition()
{
    int Ans=0;

    Ans= No1+ No2;
    return Ans;
}

int main()
{
    Arithmetic obj1(11,10);
    int iRet=0;

    iRet = obj1.Addition();
    cout<<"Addition is: "<<iRet<<"\n";
    
    return 0;
}