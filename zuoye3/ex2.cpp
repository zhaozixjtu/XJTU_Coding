//C语言版本
/*
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d,x1=0,x2=0;
	scanf_s("%lf,%lf,%lf",&a,&b,&c);
	d=b*b-4.0*a*c;
	if(a==0)
	{
		x1=x2=-c/b;
	}
	else
	{
		if(d==0)
		{
			x1=x2=-b/(2.0*a);
		}
		if(d>0)
		{  
			x1=(-b+sqrt(d))/(2.0*a);
			x2=(-b-sqrt(d))/(2.0*a);
		}
		if (d < 0)
		{
			  printf("无实数解");
		}
	}
	printf("x1=%5.2f\nx2=%5.2f",x1,x2);
	return 0;
}*/
//C++版本
/*
#include <iostream>
#include<iomanip>
#include<cmath> 
using namespace std;
int main() {
	double a, b, c, d;
	char temp;
	cin >> a >> temp >> b >> temp >> c;
	double x1, x2;
	d = b * b - 4.0 * a * c;
	if (a == 0)
	{
		x1 = x2 = -c / b;
	}
	else {
		if (d == 0) {
			x1 = x2 = -b / (2.0 * a);
			cout << "x1=" << fixed << setprecision(2) << x1 << endl;
			cout << "x2=" << fixed << setprecision(2) << x2 << endl;
		}
		if (d > 0)
		{
			x1 = ((-1.00) * b + sqrt(d)) / 2 / a;
			x2 = ((-1.00) * b - sqrt(d)) / 2 / a;
			cout << "x1=" << fixed << setprecision(2) << x1 << endl;
			cout << "x2=" << fixed << setprecision(2) << x2 << endl;
		}
		if (d < 0)
		{
			cout << "VALUEERROR" << endl;
		}
	}
	return 0;
}*/
