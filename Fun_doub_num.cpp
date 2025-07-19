#include<iostream>

int double_number(int n)
{
    //return n+n;
    //return n+=n;
    return n*2;
}

int main()
{
    std::cout<<double_number(7);
}
