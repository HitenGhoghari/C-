#include<iostream>

int double_number(int n)
{
    //return n+n;
    //return n+=n;
    return n*2;
}

int main()
{
    int a;
    std::cin >> a;
    std::cout<<double_number(a);
}
