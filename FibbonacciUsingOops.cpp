#include<iostream>
using namespace std;

class Fibbonacci{
    int f1=0;
    int f2=1;
    int f3;
    public:

    int fibbo(int a)
    {
        int i=0;
        cout<<f1<<" "<<f2;
        while (i!=a)
        {
            f3=f1+f2;
            cout<<" "<< f3;
            f1=f2;
            f2=f3;
            i++;
        }
        
    }
    
};


int main()
{
    Fibbonacci obj;
    obj.fibbo(10);
}