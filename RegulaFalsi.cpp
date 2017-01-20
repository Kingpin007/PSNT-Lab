#include <bits/stdc++.h>

using namespace std;

double f(double x)
{
    return ((x*x*x) - x*3 + 1);
}

int main()
{
    double x3=0,x1=0,x2=0.5;
    double f1=f(x1),f2=f(x2),f3=f(x3);
    int runs = 0;
    while(true)
    {
        if(runs>5)
            system("pause");
        runs++;
        if(f1*f2<0)
        {
            x3=(x1*f2-x2*f1)/(f2-f1);
            f1=f(x1);f2=f(x2);f3=f(x3);
            if(f1*f3<0)
            {
                f2=f3;
                x2=x3;
            }
            else if(f2*f3<0)
            {
                f1=f3;
                x1=x3;
            }
            cout<<"x3: "<<x3<<"\tf3: "<<f3<<endl;
        }
    }
    return 0;
}
