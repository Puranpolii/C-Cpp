#include<iostream>
using namespace std;

class DigitX
{ 
    public:
           int iNo;

           DigitX()
           {

           }
           DigitX(int i)
           {
              iNo = i;
           }

           int SumEvenDigit()
           {
              int iSum = 0;
              int iDigit = 0;
              int iTemp = iNo;

              while(iTemp != 0)
              {
                 iDigit = iTemp % 10;
                 if((iDigit % 2) == 0)
                 {
                    iSum = iSum + iDigit;
                 }

                 iTemp = iTemp / 10;
              }
              return iSum;
           }
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"enter the number:"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet =  obj.SumEvenDigit();

    cout<<"Sum of Even Digits:"<<iRet<<"\n";

    return 0;
}