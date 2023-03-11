// C语言实例
// 作业一:计算斐波那契数列的通项，例：输入13，输出233.
/**
#include <stdio.h>
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
	printf("请输入所求斐波那契数列的项数：n=");
	scanf_s("%d", &n);
	printf("使用while循环计算斐波那契数列的第%d项:\n", n);
	printf("斐波那契数列第%d项的值为%d\n", n, f_while(n));
	printf("使用for循环计算斐波那契数列的第%d项:\n", n);
	printf("斐波那契数列第%d项的值为%d\n", n, f_for(n));
	printf("使用递归方法计算斐波那契数列的第%d项:\n", n);
	printf("斐波那契数列第%d项的值为%d\n", n, f_digui(n));
	return 0;
}
*/
