// C++语言实例
// 作业一:计算斐波那契数列的通项，例：输入13，输出233.

#include <iostream>
using namespace std;
int f_while(int n)
{
	int a1 = 1, a2 = 1, a3 = 1, i = 3;   //注意n为1和2的特例，这里a3=1,i=3
	while (i <= n)
	{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
			i = i + 1;
	}
	return a3;
}

int f_for(int n)
{
	int a1 = 1, a2 = 1, a3 = 1, i = 1;  //注意n为1和2的特例，这里a3=1
	for (i = 3; i <= n; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}


int f_digui(int n)
{
	if (n == 1) return 1;
	else
	{
		if (n == 2) return 1;
		else return f_digui(n - 1) + f_digui(n - 2);
	}

}

int main()
{
	int n = 0;
	cout<<"请输入所求斐波那契数列的项数:"<<"n =";
	cin >> n;
	cout << "使用while循环计算斐波那契数列的第" << n << "项:" << endl;
	cout<<"斐波那契数列第"<<n<<"项的值为"<<f_while(n)<<endl;
	cout << "使用for循环计算斐波那契数列的第" << n << "项:" << endl;
	cout<<"斐波那契数列第"<<n<<"项的值为"<<f_for(n)<<endl;
	cout << "使用递归方法计算斐波那契数列的第" << n << "项:" << endl;
	cout<<"斐波那契数列第"<<n<<"项的值为"<<f_digui(n)<<endl;
	return 0;
}