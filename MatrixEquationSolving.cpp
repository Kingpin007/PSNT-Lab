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
        cin>>b[i];
    for(int m=0;m<n;m++)
    {
       for(int i=m+1;i<n;i++)
       {
           for(int j=0;j<n;j++)
               a[i][j] = a[i][j] - (ac[i][m]/ac[m][m])*ac[m][j];    //using copy matrix to find values
           b[i] = b[i] - (ac[i][m]/ac[m][m])*b[m];
           for(int j=0;j<n;j++)
               ac[i][j] = a[i][j];  //updating copy matrix
       }
    }
    double expr=0;
    for(int i=n-1;i>=0;i--)
    {
        expr = 0;
        for(int j=i;j<n;j++)
        {
            expr += a[i][j]*x[j];
        }
        x[i] = (b[i] - expr)/a[i][i];
    }
    for(int i=0;i<n;i++)
        cout<<"x["<<i<<"]: "<<x[i]<<"\n";
    cout<<endl;
    return 0;
}
