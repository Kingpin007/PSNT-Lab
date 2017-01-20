#include <bits/stdc++.h>

using namespace std;

double f(double x)
{
    return ((x*x*x) - x*3 + 1);
}

int main()
{
    double x=0,x0=0.5,x1=1;
    double f0=f(x0);
    double f1=f(x1);
    double xn=0;
    int runs = 0;
    while(true)
    {
        if(runs>5)
            system("pause");
        f0=f(x0);
        f1=f(x1);
        xn=x1 - f1*((x1-x0)/(f1-f0));
        cout<<"x1: "<<xn<<"\tf0: "<<f0<<"\tf1: "<<f1<<endl;
        x0 = x1;
        x1 = xn;
        runs++;
    }
    return 0;
}
