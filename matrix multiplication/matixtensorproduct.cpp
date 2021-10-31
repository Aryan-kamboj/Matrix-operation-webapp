#include<iostream>
using namespace std;
int main()
{
int i,j,i2,j2,ir,jr,first[30][30],second[30][30],n1,m1,n2,m2,nr,mr,result[30][30];
cout<<"Enter the rows and colums of first matrix"<<endl;
cin>>n1>>m1;
cout<<"Enter the rows and colums of second matrix"<<endl;
cin>>n2>>m2;
nr=n1*n2;
mr=m1*m2;
cout<<"Enter the elements of first matrix"<<endl;
for(i=1;i<=n1;i++)
{
    for(j=1;j<=m1;j++)
    {
        cin>>first[i][j];
    }
}
cout<<"Enter the elements of second matrix"<<endl;
for(i=1;i<=n2;i++)
{
    for(j=1;j<=m2;j++)
    {
        cin>>second[i][j];
    }
}
ir=1;
jr=1;
for(i=1;i<=n1;i++)
{
    for(i2=1;i2<=n2;i2++)
    {
        for(j=1;j<=m1;j++)
        {
           for(j2=1;j2<=m2;j2++)
           {
             result[ir][jr]=first[i][j]*second[i2][j2];
             if(jr==nr)
             {
                jr=0;
             }  
             jr++;
           }
        }
        ir++;
    }
}
for(i=1;i<=nr;i++)
{
    for(j=1;j<=mr;j++)
    {
        cout<<"  "<<result[i][j];
    }
    cout<<endl;
}
return 0;
}