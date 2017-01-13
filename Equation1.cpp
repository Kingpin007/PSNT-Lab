#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    double x,e=2.71828,f=1;
    double a=0,b=1,c=0.5;
    long long int runs=0;
    double f1=1,f2=1,f3=1;
    while(f1!=0 || f2!=0)
    {
        c=(a+b)/2;
        f1=a-pow(e,-a);
        f2=c-pow(e,-c);
        f3=b-pow(e,-b);
        cout<<"a is: "<<a<<"\nb is: "<<b<<"\nf1 is: "<<f1<<"\nf2 is: "<<f2<<endl;
        if(f1*f3<0)
        {
            if(f1*f2<0)
            {
                b=c;
            }
            else if(f1*f2>0)
            {
                a=c;
            }
            else if(f1==0)
                x=a;
            else if(f2==0)
                x=b;
        }
        runs++;
        if(runs > 10)
            system("pause");
    }
    cout<<x<<endl;
    return 0;
}
