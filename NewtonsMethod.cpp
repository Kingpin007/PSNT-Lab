#include <bits/stdc++.h>

using namespace std;

double f(double x)
{
    return ((x*x*x) - x*x*2 + x - 2);
}

double ft(double x)
{
    return ((3*x*x) - 4*x + 1);
}

int main()
{
    double x0=1.5,x1;
    double f0=f(x0);
    double f1=ft(x0);
    int runs = 0;
    while(true)
    {
        if(runs>5)
            system("pause");
        f0=f(x0);
        f1=ft(x0);
        x1=x0 - f0/f1;
        cout<<"x0: "<<x0<<"\tf0: "<<f0<<endl;
        x0 = x1;
        runs++;
    }
    return 0;
}
