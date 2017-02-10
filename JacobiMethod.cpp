#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Sq. Matrix: ";
    cin>>n;
    double **a = new double*[n];
    double **ac = new double*[n];
    double *b = new double[n];
    double *x = new double[n];
    double *xc = new double[n];
    for(int i=0;i<n;i++)
    {
        x[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        a[i] = new double[n];
        ac[i] = new double[n];
    }
    cout<<"Enter Matrix A: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            ac[i][j] = a[i][j];
        }
    }
    cout<<"Enter Matrix B: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        x[i] = -0.5;
        xc[i] = -0.5;
    }
    double *p = new double[n];
    int runs = 0;
    while(true)
    {
        runs++;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                p[j] = x[j]*a[i][j];
            p[0] = x[0]*a[i][0];
            for(int j=0;j<n;j++)
                if(i!=j)
                    x[i] -= p[j];
            x[i] = x[i] - xc[i] +b[i];
            x[i]/=a[i][i];
        }
        for(int i=0;i<n;i++)
            cout<<x[i]<<endl;
        for(int i=0;i<n;i++)
            xc[i] = x[i];
        cout<<"\n\n";
        if(runs>10)
            system("pause");
    }
    return 0;
}
