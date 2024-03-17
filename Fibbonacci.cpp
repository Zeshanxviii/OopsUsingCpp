#include<iostream>

int main()
{
    int f1=0;
    int f2=1;
    int f3;

        std::cout<<f1<<" "<<f2;
    for(int j=0;j<10;j++)
    {
        f3=f1+f2;
        std::cout<<" "<<f3;
        f1=f2;
        f2=f3;
    }

    return 0;

}