#include <iostream>
using namespace std;
//计算a和b的最大公约数
int gcd(int a, int b)
{
    int r=a%b;
    while(r>0){
        a=b;
        b=r;
        r = a % b;
    }
    return b;
}

//计算a和b的最小公倍数
int lcm(int a, int b)
{
    int s=1;
    s=(a*b)/gcd(a,b);
    return s;
}

/*
int main(int argc, char** argv)
{
    cout << "gcd(12, 3) = " << gcd(12, 3) << endl;
    cout << "lcm(12, 3) = " << lcm(12, 3) << endl;
    return 0;
}
*/