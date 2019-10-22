#include<iostream>
using namespace std;
int main()
{
    int n,pow=1,sum=0;

    ///n contains the decimal number to be converted to octal number.

    ///sum variable will contain the octal number obtained.

    /*pow = 1 as initially when converting decimal to octal,
    power of 10 will be 0. Hence pow(10,0)=1.*/

    cin>>n;

    while(n)
    {
        int rem = n%8;
        sum = sum + rem*pow;
        pow *= 10;
        n = n/8;
    }
    cout<<sum;

}
