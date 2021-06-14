#include<iostream>
using namespace std;

int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int res=0;

int main()
{
    int a,b,m,su,s,d;
    cout<<"\nEnter 1st number :: ";
    cin>>a;
    cout<<"\nEnter 2nd number :: ";
    cin>>b;

    s=sum(a,b);
    su=sub(a,b);
    m=mul(a,b);
    d=div(a,b);
    
    cout<<"\n Addition of two Numbers [ "<<a<<" + "<<b<<" ] = "<<s<<"\n";
    cout<<"\n Subtraction of two Numbers [ "<<a<<" - "<<b<<" ] = "<<su<<"\n";
    cout<<"\n Multiplication of two Numbers [ "<<a<<" * "<<b<<" ] = "<<m<<"\n";
    cout<<"\n Division of two Numbers [ "<<a<<" / "<<b<<" ] = "<<d<<"\n";

    return 0;
}

sum(int a,int b)
{
    res=a+b;
    return(res);
}

sub(int a,int b)
{
    res=a-b;
    return(res);
}

mul(int a,int b)
{
    res=a*b;
    return(res);
}

div(int a,int b)
{
    res=a/b;
    return(res);
}
