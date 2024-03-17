#include<iostream>
using namespace std;

void fibbo(int a)
{
    int f1=0,f2=1,i=0,f3;
    cout<<f1<<" "<<f2;
    while(i!=a)
    {
        f3=f1+f2;
        cout<<" "<<f3;
        f1=f2;
        f2=f3;
        i++;
    }

}
int main()
{
    int n;
    cout<<"Enter the range for fibbonacci :";
    cin>>n;
    fibbo(n);
    return 0;
}