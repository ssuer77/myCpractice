#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bits/stdc++.h>
//using ios::sync_with_stdio(false);
using namespace std;
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//
//	}
//
//	if (line >= 20000)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("goon\n");
//	}
//	return 0;
//}
//int APP(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//
//
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = APP(a,b);
//	printf("a+b=%d\n", c);
//
//
//
//
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	char ch[] = {'1','2','3','4','d'};
//	int i = 0;
//	while (i <= 4)
//	{
//		printf("%d\n", ch[i]);
//		i++;
//	}
//int main()
//{
//	printf("     **\n     **\n************\n************\n    *  *\n    *  *");
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int k = 8;
//	char e[1] = {'1'};
//	printf("%d\n", strlen(e)) ;
//	char d[] = "hello bit";
//
//
//
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a>=b)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		printf("%d", b);
//	}
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//
//}
//
//
//int main()
//{
//	int a,b;
//	scanf("%d%d", &a,&b);
//	int m = MAX(a, b);
//	printf("%d", m);
//
//
//	return 0;
//}
//int DEC(int k)
//{
//	if (k < 0)
//		return 1;
//	if (k == 0)
//		return 0;
//	else
//		return -1;
//
//
//}
//int main()
//{
//	
//	int a;
//	scanf("%d",& a);
//	int r = DEC(a);
//	printf("%d\n", r);
//
//
//
//	return 0;
//}
//int main()
//{
//	int x = 11;
//	std::cout << (++x);
//	cout << "hello world!\n"<<"abc";
//	return 0;
//}
//
//?test
//?test2
//int main()
//{
//	double a = 7 / 2.0;
//	printf("%lf", a);
//
//	return 0;
//}
//int main()
//{
//	double a, b, c, x1, x2, dlt;
//	cout << "请输入方程的三个系数：" << endl;
//	cin >> a >> b >> c;
//	dlt = b * b - 4 * a * c;
//	x1 = (-b + sqrt(dlt)) / (2 * a);
//	x2 = (-b - sqrt(dlt)) / (2*a);
//	cout << "x1=" << x1 << "   x2=" << x2 << endl;
//
//	return 0;
//}
//int main()
//{
//	double a = 1.234567;
//	printf("%09.2lf", a);
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2};
//	printf("%d",sizeof(arr[0]));
//
//	return 0;
//}
//int main()
//{
//	//char c1, c2;
//	//c1 = 97;
//	//c2 = 98;
//	//int b1, b2;
//	//b1 = 97;
//	//b2 = 98;
//	//cout << c1 << " " << c2 << endl;
//	//cout << (int)c1 << " " << (int)c2<<endl;
//	//printf("%d %c\n", c1,c1);
//	//cout << b1 << " " << b2 << endl;
//	//cout << (char)b1 << " " << (char)b2 << endl;
//
//	//char a1, a2;
//	//int x1, x2;
//	//a1 = 'a';
//	//a2 = 'b';
//	//x1 = a1 - 32;
//	//x2 = a2 - 32;
//	//cout << a1 << " " << a2<<endl;
//	//cout << x1 << " " << x2;
//	//cout << (char)x1 << " " << (char)x2;
//
//	//printf("\a");
//	//cout << '\a';
//	return 0;
//}
//struct Stu
//{
//	char namep[20];
//	int age;
//	char sex[20];
//	char tele[20];
//
//
//
//
//};
//int main()
//{
//	struct Stu s = { "abc",23,"male","21345432" };
//	printf("%s %d %s %s\n",s.namep,s.age,s.sex,s.tele);
//
//
//
//	return 0;
//}

//main()
//{
//	int a = 5, b = 4, c = 3, d = 2;
//	if (a > b > c)
//		cout << d;
//	else if ((c - 1 >= d) == 1)
//		cout << d + 1;
//	else
//		cout << d + 2;
//
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case '0':
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("报错");
//		break;
//	}  
//	return 0;
//}
//int main()
//{
//	//char ch[] = {"st\0r"};
//	//int a = strlen(ch);
//	//printf("%d", a);
//	//printf(ch);
//	//string k = { "abcdefg" };
//	//cout << k;
//	//printf("%s", k);
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//
//	return 0;
//}
//int main()
//{
//	printf("请输入密码：");
//	char password[20];
//	scanf("%s", password);
//	//getchar();
//	int k;
//	while ((k = getchar()) != '\n')
//		getchar();
//	printf("请确认密码（Y/N）");
//	char in;
//	scanf("%c", &in);
//	//int in = getchar();
//	if (in == 'Y')
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int year, month, day;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//
//	return 0;
//}
//int main()
//{
//	int weight, height;
//	scanf("%d %d", &weight, &height);
//	float r = weight / (height / 100.0) / (height / 100.0);
//	printf("%.2f\n", r);
//	return 0;
//}
//int main()
//{
//	//for (int a = 0; a = 0; a++)
////	//	printf("dd");
////    
////	return 0;
////}
////计算阶乘结果
//int main()
//{
//	int n,i,ret=1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		ret *= i;
//	printf("%d",ret);
//
//	return 0;
//}
////计算阶乘之和
//函数法
//int JIE(int n)
//{
//	int i, ret = 1;
//	for (i = 1; i <= n; i++)
//		ret *= i;
//
//	return ret;
//
//}
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int sum = 0,i;
//	for (i = 1; i <= x; i++)
//		sum += JIE(i);
//	printf("%d", sum);
//	return 0;
//}
//for循环嵌套
//int main()
//{
//	int k = 0,ret=1,sum=0,i,o;
//	scanf("%d",&k);
//	for (i = 1; i <= k; i++)
//	{
//		for (ret=1,o = 1; o <= i; o++)
//			ret *= o;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//better way
//int main()
//{
//	int t,ret=1,sum=0;
//	scanf("%d", &t);
//	for (int i = 1; i <= t; i++)
//	{
//		ret *= i;
//		sum += ret;
//	     
//	}
//	printf("%d", sum);
//	return 0;
//}
//找出数组中的某数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d",arr);
//	//cout << arr[0];
//	int k,n=0,i;
//	scanf("%d", &k);
//	for (i = 0; n != k; i++)
//		n = arr[i];
//	printf("所查找的数字下标为%d\n", (i-1));
//	return 0;
//}
//二分法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int mid = (left + right) / 2;
//	int n=-1,t,n0;
//	scanf("%d", &t);
//	for (;n != t;mid=(left+right)/2)
//	{
//		n0 = mid;
//		n = arr[mid];
//		if (n < t)
//		{
//			left = mid+1;
//
//		}
//		else
//		{
//			right = mid-1;
//		}
//	}
//	printf("%d", n0);
//	return 0;
//}
//gouba
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int n;
//	scanf("%d", &n);
//	int mid = (left + right) / 2;
//	
//	for (;left<=right; mid = (left + right) / 2)
//	{
//		if (arr[mid] < n)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("所查找的数的下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("error");
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int n;
//	scanf("%d", &n);
//	int mid = (left + right) / 2;
//
//	for (; left <= right; mid = (left + right) / 2)
//	{
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		
//		}
//	}
//	if (left > right)
//		printf("error");
//	else
//		printf("%d", mid);
//
//	return 0;
//}
//动态打印
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//
//		
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcd";
//	int a = strlen(arr);
//	int b = sizeof(arr);
//	printf("%d%d", a, b);
//	return 0;
//}
//
//int main()
//{
//	char arr[20];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：->");
//		scanf("%s", arr);
//		if (strcmp(arr,"abc123")!=0)
//		{
//			printf("密码错误，请重新输入，你还有%d次输入机会", (2 - i));
//			continue;
//		}
//		else
//		{
//			printf("密码正确！");
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[]="abc123";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		char* x;
//		printf("请输入密码：->");
//		scanf("%s",& x);
//		if (strcmp(arr,x) != 0)
//		{
//			printf("密码错误，请重新输入，你还有%d次输入机会", (2 - i));
//			continue;
//		}
//		else
//		{
//			printf("密码正确！");
//			break;
//		}
//	}
//
//	return 0;
//}
//猜数字
//void menu()
//{
//	printf("********************\n");
//	printf("*****  1.play  *****\n");
//	printf("*****  0.exit  *****\n");
//	printf("********************\n");
//
//}
//
//
//
//
//void game()
//{
//	int guess;
//	int ret = rand()%100+1;
//	printf("%d\n", ret);
//	while (1)
//	{
//		printf("猜数字：\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("xiaole\n");
//		else if (guess > ret)
//			printf("dale\n");
//		else
//		{
//			printf("ok\n");
//			break;
//		}
//
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：->\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//张三:
//	printf("ss");
//	goto 张三;
//	return 0;
//}

//int main()
//{
//	system("shutdown -s -t 60");
//	char input[20];
//	again:
//	printf("输入abc123停止");
//	scanf("%s", input);
//	if (strcmp(input, "abc123") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//	
//	
//	
//	return 0;
//}
//int main()
//{
//	//int b;
//	//int a = b = 2;
//	//printf("%d%d", a, b);
//
//	printf("%d",sizeof(int));
//	printf("%d", sizeof(float));
//	printf("%d", sizeof(long long));
//	printf("%d", sizeof(double));
//	printf("%d", sizeof(char));
//	printf("%d", sizeof(int));
//	char a = cin.get();
//	printf("%c", a);
//
//
//	return 0;
//}

//平均分
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	float x = (a + b + c) / 3.0;
//	printf("%.2f", x);
//	return 0;
//}
//数列和
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int x = N + N * (N - 1) / 2.0;
//	printf("%d", x);
//
//	return 0;
//}
//求矩形面积和周长
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int S = a * b;
//	int P = 2 * (a + b);
//	printf("%d %d", S, P);
//	return 0;
//}
//分支简单
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch == '0')
//		ch = '9';
//	else if (ch == '1')
//		ch = '8';
//	else if (ch == '2')
//		ch = '7';
//	else if (ch == '3')
//		ch = '6';
//	else if (ch == '4')
//		ch = '5';
//	else if (ch == '5')
//		ch = '4';
//	else if (ch == '6')
//		ch = '3';
//	else if (ch == '7')
//		ch = '2';
//	else if (ch == '8')
//		ch = '1';
//	else if (ch == '9')
//		ch = '0';
//	else
//		;
//	printf("%c", ch);
//
//	return 0;
//}
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 48 && ch <= 57)
//	{
//		char x = 105 - ch;
//		printf("%c", x);
//
//
//	}
//	else
//		printf("%c", ch);
//		
//	return 0;
//}
//int main()
//{
//	int arr[] = {0};
//	//scanf("%d", arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d", sz);
//	
//	int i=0;
//	//for (i = 0;; i++)
//	//{
//	//	if (arr[i] <= 0)
//	//		break;
//
//	//}
//	while ((scanf("%d", arr[i])) != EOF)
//	{
//		i++;
//	}
//	scanf("%d", i);
//	return 0;
//}
//int main()
//{
//	int arr[30];
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//
//
//	return 0;
//}
//int main()
//{
//	int a, b, max, min, i;
//	scanf("%d", &a);
//	max = a;
//	min = a;
//	i = 1;
//	while (i <= a)
//	{
//		scanf("%d", &b);
//		if (b > max)
//			max = b;
//		else if (b < min)
//			min = b;
//		i++;
//	}
//	printf("max=%d,min=%d", max, min);
//	return 0;
//}
//int main()
//{
//	printf("si");
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}
//工资标准
//int main()
//{
//	int time,sal;
//	scanf("%d", &time);
//	if (time <= 160)
//		sal = time * 10;
//	else
//		sal = 160 * 10 + 30 * (time - 160);
//	printf("%d", sal);
//
//
//	return 0;
//}
//
//解二元一次方程
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float j = sqrt(b * b - 4.0 * a * c);
//	float x1, x2;
//	x1 = (-b + j) / 2.0 / a;
//	x2 = (-b - j) / 2.0 / a;
//	if (x1 >= x2)
//		printf("%.2f %.2f", x1, x2);
//	else
//		printf("%.2f %.2f", x2, x1);
//
//
//	return 0;
//}
//
//字母表顺序
//int main()
//{
//	char ch[64];
//	int i;
//	scanf("%s", ch);
//	int temp;
//	int x = ch[0];
//	int y = ch[1];
//	int z = ch[2];
//	if (x>y)
//	{
//		temp = y;
//		y = x;
//		x = temp;
//
//	}
//	if (x > z)
//	{
//		temp = z;
//		z = x;
//		x = temp;
//
//
//	}
//	if (y > z)
//	{
//		temp = z;
//		z = y;
//		y = temp;
//
//	}
//	printf("%c%c%c", x, y, z);
//
//
//
//	return 0;
//}
//int main()
//{
//	int b,i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d",& b);
//		printf("%d", b);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("%d is odd", a);
//	else
//		printf("%d is even", a);
//	return 0;
//}
//int main()
//{
//	int i,sum=0,num=0;
//
//	int ch[20];
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d",& ch[i]);
//		num += ch[i];
//		if (ch[i] < 0)
//			num++;
//	}
//	float ave = (float)sum / 20.0;
//	printf("%d %.1f", num, ave);
//
//	return 0;
//}
//int main()
//{
//	int ch[20];
//	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", ch[0],ch[1],ch[2],ch[3],ch[4],  ch[5], ch[6], ch[7], ch[8], ch[9], ch[10], ch[11], ch[12], ch[13], ch[14], ch[15], ch[16], ch[17], ch[18], ch[19]);
//	int i,sum=0,num=0;
//	for (i = 0; i < 20; i++)
//	{
//		if (ch[i] < 0)
//			num++;
//		sum += ch[i];
//
//	}
//	float ave = sum / 20.0;
//	printf("%d %.1f", num, sum);
//
//
//	return 0;
//}
//int main()
//{
//	int T,i;
//	int m, n,max,min,ji=0,ou=0;
//	scanf("%d", &T);
//	for (i = 0; i < T; i++)
//	{
//		scanf("%d %d",& m,& n);
//		if (m > n)
//		{
//			max = m;
//			min = n;
//		}
//		else
//		{
//			max = n;
//			min = m;
//		}
//		int k = min;
//		for (; k <= max; k++)
//		{
//			if (k % 2 == 1)
//				ji = ji + k * k * k;
//			else
//				ou = ou + k * k ;
//		}
//		printf("%d %d\n", ou, ji);
//		
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int num, count = 0;
//    int sum = 0;
//    float average;
//
//
//    for (int i = 0; i < 20; i++) {
//        scanf("%d", &num);
//        if (num < 0) {
//            count++;
//        }
//        sum += num;
//    }
//
//    average = (float)sum / 20;
//
//    printf("%d %.1f\n", count,average);
//
//    return 0;
//}
//
//void _max(int *x, int *y)
//{
//	int temp=*y;
//	*y = *x;
//	*x = temp;
//
//}
//void pri()
//{
//	printf("hello");
//}
//int main()
//{
//	//int a = 10,b;
//	//int i = (a == 10 ? a = 1: b = 2);
//	//printf("%d", i);
//	int a, b;
//	scanf("%d %d", &a, &b);
//	pri();
//	_max(&a,& b);
//	printf("%d %d",a,b);
//	return 0;
//}
//int main()
//{
//	int i,j,jud,num=0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (jud=1,j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				jud = 0;
//				break;
//			}
//		}
//		if (jud == 1)
//		{
//			printf("%d", i);
//			num++;
//		}
//
//	}
//	printf("%d", num);
//	return 0;
//}
////
//int main()
//{
//	int i,sum=0;
//
//	int ch[64];
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d",& ch[i]);
//		if (ch[i] > 0)
//		{
//			if (ch[i] % 2 == 0)
//			{
//				sum += ch[i];
//			}
//			else
//				;
//		}
//		else
//			break;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int b, s;
//
//	s = 0;
//
//	b = 2;
//	while (b > 0)
//	{
//		scanf("%d", &b);
//		if (b % 2 == 0)
//			s += b;
//	}
//
//
//	printf("%d", s);
//	return 0;
//
//}
//int main()
//{
//	int i,sum=0;
//
//	int ch[64];
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d",& ch[i]);
//		if (ch[i] > 0)
//		{
//			if (ch[i] % 2 == 0)
//			{
//				sum += ch[i];
//			}
//			else
//				;
//		}
//		else
//			break;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//int main()
//{
//	int sum=0,x;
//	do
//	{
//		scanf("%d", &x);
//		if (x > 0)
//		{
//			if (x % 2 == 0)
//			{
//				sum += x;
//			}
//			else
//				;
//		}
//		else
//			;
//
//	} 
//	while (x > 0);
//	printf("%d", sum);
//	return 0;
//}
//判断素数
//int judge(int x)
//{
//	int i,p=1;
//	for (i = 2; i <= sqrt(x); i ++)
//	{
//		if (x % i == 0)
//		{
//			p = 0;
//			break;
//		}
//		else
//			;
//	}
//	return (p == 1 ? 1 : 0);
//}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	printf("%d", judge(m));
//	return 0;
//}
//int main()
//{
//	//int len = strlen("abc\n");
//	//printf("%d", len);
//	//cout << len;
//	//cout << strlen("abc");
//	char tr[] = { "abc" };
//	printf("%s", tr);
//	printf("%d", strlen(tr));
//	
//
//
//
//	return 0;
//}

//int my_strlen(char str[])
//int my_strlen(char* str)
//{
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//	if (*str != '\0')
//		return (1 + my_strlen(str + 1));
//	else
//		return 0;
//
//
//
//
//
//
//
//
//}
//
//
//
//int main()
//{
//
//	char string[20];
//	scanf("%s", string);
//	
//	int len = my_strlen(string);
//	printf("%d", len);
//
//	return 0;
//}
////int main()
////{
////	char string[20];
////	scanf("%s", string);
////	//printf("%d", strlen(string));
////	cout << strlen(string);
////	return 0;
////}
//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int ch[20];
//	scanf("%d", ch);
//	printf("%d", ch[0]);
//
//	return 0;
//}
// 二分法
//int main()
//{
//	int i = 0;
//	int ch[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//while (ch[i] != 11)
//	//{
//	//	i++;
//	//	if (i > 9)
//	//	{
//	//		printf("zhaobudao");
//	//		break;
//	//	}
//	//}
//	//if(i<=9)
//	//printf("找到下标%d", i);
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	int k;
//	scanf("%d", &k);
//	while (ch[mid] != k)
//	{
//		if (ch[mid] <k)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else if (ch[mid] > k)
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		if (left > right)
//		{
//			printf("找不到");
//			break;
//		}
//	}
//	if (left <= right)
//		printf("找到下标%d", mid);
//	return 0;
//}
//
//int x = 2;
//int y = 5;
//void test(int *a,int* b)
//{
//	/*ch[0] = 1;
//	ch[1] = 3;*/
//	*a = 1;
//	*b = 3;
//	x = 4;
//	y = 8;
//}
//int main()
//{
//	//int ch[2];
//	//test(ch);
//	//printf("%d %d", ch[0], ch[1]);
//	int a, b;
//	test(&a, &b);
//	printf("%d %d\n", a, b);
//	printf("%d %d", x, y);
//	return 0;
//}
//void exchange(int* x, int* y)
//{
//	int tmp;
//	tmp =* x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 6;
//	exchange(&a,& b);
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 5;
//	double x;
//	x = (double)a / b;
//	printf("%.2lf", x);
//	return 0;
//}
//int main()
//{
//	char ch[4] = { "abc" };
//	printf("%d", strlen(ch));
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int i;
//	char x;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%c", &x);
//		sum += x;
//		getchar();
//	}
//	double ave = sum / 3.0;
//	int shang = sum / 3;
//	int yv = sum % 3;
//	printf("%.6lf %d %d", ave, shang, yv);
//	return 0;
//}
//int main()
//{
//	int sum = 0;
//	char a, b, c;
//	scanf("%c %c %c", &a, &b, &c);
//	sum = a + b + c;
//	double ave = sum / 3.0;
//	int shang = sum / 3;
//	int yv = sum % 3;
//	printf("%.6lf %d %d", ave, shang, yv);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    char c1, c2, c3;
//    int sum, avg, remainder;
//
//    scanf("%c\n%c\n%c", &c1, &c2, &c3);
//
//    sum = c1 + c2 + c3;
//
//    avg = sum / 3;
//    remainder = sum % 3;
//
//    printf("%.6f %d %d\n", (float)sum / 3, avg, remainder);
//
//    return 0;
//}

//int main()
//{
//	float x1, y1, x2, y2;
//	scanf("%f %f %f %f", &x1,& y1,& x2,& y2);
//	float x = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	printf("%.2f", x);
//	return 0;
//}
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	int d, h, m, s;
//	d = t / 86400;
//	h = (t % 86400) / 3600;
//	m = ((t % 86400) % 3600) / 60;
//	s = ((t % 86400) % 3600) % 60;
//	printf("%d days %d:%d:%d", d, h, m, s);
//	return 0;
//}
//int main()
//{
//	float huashi, sheshi;
//	scanf("%f", &huashi);
//	sheshi = (huashi - 32) * 5 / 9;
//	printf("%.1f", sheshi);
//	return 0;
//}
//int main()
//{
//	int m,i;
//	float p1, p2, p3, p4,w1,w2,w3,w4;
//	scanf("%d", &m);
//	getchar();
//	char types;
//	float nums;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%c", &types);
//		getchar();
//		scanf("%f", &nums);
//		getchar();
//		if (types == 'a')
//		{
//			p1 = 1.5 * nums;
//			w1 = nums;
//		}
//		if (types == 'o')
//		{
//			p2 = 1.4 * nums;
//			w2 = nums;
//		}
//		if (types == 'b')
//		{
//			p3 = 1.48 * nums;
//			w3 = nums;
//		}
//		if (types == 'p')
//		{
//			p4 = 1.08 * nums;
//			w4 = nums;
//		}
		//scanf("%c", &types[i]);
		//getchar();
		//scanf("%d", nums[i]);
		//getchar();
//	}
//	printf("       apple  orange banana pineapple sum\nprice  %-7.2f%-7.2f%-7.2f%-10.2f%-7.2f  \nweight %-7.2f%-7.2f%-7.2f%-10.2f%-7.2f  ",p1,p2,p3,p4,p1+p2+p3+p4,w1,w2,w3,w4,w1+w2+w3+w4);
//	return 0;
//}
//
//int main()
//{
//	char ch[20];
//	scanf("%c", ch);
//	printf("%c", ch[1]);
//	return 0;
//}



//
////
//#include <stdio.h>
//
//void calculate_price(char code, float weight) {
//    char fruit_name[10];
//    float price = 0.0;
//    
//    switch(code) {
//        case 'a':
//            strcpy(fruit_name, "apple");
//            price = 1.5;
//            break;
//        case 'o':
//            strcpy(fruit_name, "orange");
//            price = 1.4;
//            break;
//        case 'b':
//            strcpy(fruit_name, "banana");
//            price = 1.48;
//            break;
//        case 'p':
//            strcpy(fruit_name, "pineapple");
//            price = 1.08;
//            break;
//    }
//    
//    float total_price = price * weight;
//    
//    printf("%-7s  %-10.2f  %-7.2f\n", fruit_name, price, total_price);
//    printf("%-9s  %-7.2f  %-7.2f\n", "price", price, total_price);
//    printf("%-9s  %-7.2f  %-7.2f\n\n", "weight", weight, total_price);
//}
//
//int main() {
//    int m;
//    char code;
//    float weight;
//    
//    while(scanf("%d", &m) != EOF) {
//        for(int i = 0; i < m; i++) {
//            scanf(" %c %f", &code, &weight);
//            calculate_price(code, weight);
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//void calculate_price(char code, float weight) {
//    char fruit_name[10];
//    float price = 0.0;
//
//    switch (code) {
//    case 'a':
//        strcpy(fruit_name, "apple");
//        price = 1.5;
//        break;
//    case 'o':
//        strcpy(fruit_name, "orange");
//        price = 1.4;
//        break;
//    case 'b':
//        strcpy(fruit_name, "banana");
//        price = 1.48;
//        break;
//    case 'p':
//        strcpy(fruit_name, "pineapple");
//        price = 1.08;
//        break;
//    }
//
//    float total_price = price * weight;
//
//    printf("%-7s  %-10.2f  %-7.2f\n", fruit_name, price, total_price);
//}
//
//int main() {
//    int m;
//    char code;
//    float weight;
//
//    while (scanf("%d", &m) != EOF) {
//        printf("       apple  orange banana pineapple sum\n");
//        printf("price  %-7.2f  %-7.2f  %-7.2f  %-7.2f  %-7.2f\n", 1.5, 1.4, 1.48, 1.08, 0.0);
//        printf("weight %-7.2f  %-7.2f  %-7.2f  %-7.2f  %-7.2f\n", 0.0, 0.0, 0.0, 0.0, 0.0);
//        for (int i = 0; i < m; i++) {
//            scanf(" %c %f", &code, &weight);
//            calculate_price(code, weight);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//int leap_year(int x)
//{
//	if ((x / 4 == 0) && (x / 100 != 0) || (x / 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//
//
//int main()
//{
//	int dayx,year, month, day, time,t;
//	scanf("%d %d %d %d", &year, &month, &day, &time);
//	int mid = month + time;
//	if (mid > 13)
//	{
//		t = mid / 12;
//		month = mid - 12*t;
//		year += t;
//	}
//	else
//		month = mid;
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//	{
//		dayx = 31;
//		break;
//	}
//	case 2:
//	{
//		if (leap_year(year) == 1)
//			dayx = 29;
//		else
//			dayx = 28;
//		break;
//	}
//	default:
//	{
//		dayx = 30;
//		break;
//	}
//	}
//	if (day > dayx)
//		day = dayx;
//	printf("%d %d %d", year, month, day);
//	return 0;
//}
//#include <stdio.h>
//
//int isLeapYear(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int getLastDayOfMonth(int year, int month) {
//    int lastDay;
//
//    switch (month) {
//    case 2:
//        if (isLeapYear(year)) {
//            lastDay = 29;
//        }
//        else {
//            lastDay = 28;
//        }
//        break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:
//        lastDay = 30;
//        break;
//    default:
//        lastDay = 31;
//        break;
//    }
//
//    return lastDay;
//}
//
//void calculateMaturityDate(int year, int month, int day, int term) {
//    int newYear = year;
//    int newMonth = month + term;
//    int newDay = day;
//
//    if (newMonth > 12) {
//        newYear += (newMonth - 1) / 12;
//        newMonth = (newMonth - 1) % 12 + 1;
//    }
//
//    int lastDayOfMonth = getLastDayOfMonth(newYear, newMonth);
//    if (newDay > lastDayOfMonth) {
//        newDay = lastDayOfMonth;
//    }
//
//    printf("%d %d %d\n", newYear, newMonth, newDay);
//}
//
//int main() {
//    int year, month, day, term;
//    scanf("%d %d %d %d", &year, &month, &day, &term);
//
//    calculateMaturityDate(year, month, day, term);
//
//    return 0;
//}
//int main()
//{
//	int x,y;
//	scanf("%d %d", &x, &y);
//	int result=pow(x,y);
//	int t = result % 1000;
//	printf("%d",t );
//	return 0;
//}

//int main()
//{
//	int i,n;
//	scanf("%d", &n);
//	float sum = 0,t;
//	for (i = 1; i <= n; i++)
//	{
//		if ((i % 5 == 0) || (i % 9 == 0))
//		{
//			t = 1.0 / i;
//			sum += t;
//		}
//	}
//	printf("%.6f", sum);
//
//
//	return 0;
//}

//int main()
//{
//	int n,i;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	float result,a, b;
//	char x;
//	scanf("%f %f\n%c",& a,& b,&x);
//	switch (x)
//	{
//	case '+':
//		result = a + b;
//		printf("%.1f", result);
//
//		break;
//	case '-':
//		result = a - b;
//		printf("%.1f", result);
//
//		break;
//	case '*':
//		result = a * b;
//		printf("%.1f", result);
//
//		break;
//	case '/':
//		if (b == 0)
//		{
//			printf("Wrong!");
//			break;
//		}
//		result = a / b;
//		printf("%.1f", result);
//
//		break;
//	}
//	return 0;
//}
//int main()
//{
//    double a, b, result;
//    char op;
//
//    scanf("%lf %lf\n%c", &a, &b, &op);
//
//    switch (op)
//    {
//    case '+':
//        result = a + b;
//        printf("%.1lf\n", result);
//        break;
//    case '-':
//        result = a - b;
//        printf("%.1lf\n", result);
//        break;
//    case '*':
//        result = a * b;
//        printf("%.1lf\n", result);
//        break;
//    case '/':
//        if (b == 0)
//        {
//            printf("Wrong!\n");
//        }
//        else
//        {
//            result = a / b;
//            printf("%.1lf\n", result);
//        }
//        break;
//    }
//
//    return 0;
//
//}
////
//#include <stdio.h>
//
//int main() {
//    float a, b;
//    char op;
//
//    scanf("%f %f", &a, &b);
//    getchar(); // 用于清除输入缓冲区中的换行符
//    scanf("%c", &op);
//
//    switch (op) {
//    case '+':
//        printf("%.1f", a + b);
//        break;
//    case '-':
//        printf("%.1f", a - b);
//        break;
//    case '*':
//        printf("%.1f", a * b);
//        break;
//    case '/':
//        if (b != 0) {
//            printf("%.1f", a / b);
//        }
//        else {
//            printf("Wrong!");
//        }
//        break;
//    default:
//        printf("Wrong!");
//    }
//
//    return 0;
//}
//void exch(int* x, int* y)
//{
//	int tmp=*x;
//	*x = *y;
//	*y = tmp;
//
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i, j;
//	for (i = 0; i<sz - 1; i++)
//	{
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				exch(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//	;
//}
//
//
//
//int main()
//{
//	int i;
//	int arr[] = { 0,1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int t,DD,HH,MM,SS;
//	scanf("%d", &t);
//	if (t < 10)
//	{
//		printf("%d", t);
//	}
//	else if (t >= 10 && t < 60)
//	{
//		SS = t;
//		printf("%d", SS);
//	}
//	else if (t >= 60 && t < 3600)
//	{
//		MM = t / 60;
//		SS = t % 60;
//		printf("%02d:%02d", MM, SS);
//	}
//	else if (t >= 3600 && t < 86400)
//	{
//		HH = t / 3600;
//		MM = (t % 3600) / 60;
//		SS = (t % 3600) % 60;
//		printf("%02d:%02d:%02d", HH, MM, SS);
//	}
//	else if (t >= 86400 && t < 2 * 86400)
//	{
//		HH = (t % 86400) / 3600;
//		MM = ((t % 86400) % 3600) / 60;
//		SS = ((t % 86400) % 3600) % 60;
//		printf("1 day %02d:%02d:%02d", HH, MM, SS);
//	}
//	else
//	{
//		DD = t / 86400;
//		HH = (t % 86400) / 3600;
//		MM = ((t % 86400) % 3600) / 60;
//		SS = ((t % 86400) % 3600) % 60;
//		printf("%d days %02d:%02d:%02d",DD, HH, MM, SS);
//	}
//	return 0;
//}


//int main()
//{
//	int x;
//	float a, b,r;
//	scanf("%f %f %d", &a, &b, &x);
//	switch (x)
//	{
//	case 1:
//	{
//		r = a + b;
//		printf("%.2f", r);
//		break;
//	}
//	case 2:
//	{
//		r = a - b;
//		printf("%.2f", r);
//		break;
//	}
//	case 3:
//	{
//		r = a * b;
//		printf("%.2f", r);
//		break;
//	}
//	case 4:
//	{
//		if (b == 0)
//		{
//			printf("error!");
//			break;
//		}
//		r = a / b;
//		printf("%.2f", r);
//		break;
//	}
//	}
//	return 0;
//}
//

//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x >= 90 && x <= 100)
//		printf("A");
//	else if (80 <= x && x <= 89)
//		printf("B");
//	else if (70 <= x && x <= 79)
//		printf("C");
//	else if (60 <= x && x <= 69)
//		printf("D");
//	else if (0 <= x && x <= 59)
//		printf("E");
//	else
//		printf("Score is error!");
//	return 0;
//}
//int leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int m1, m2, y1, y2;
//	scanf("%d %d %d %d", &m1, &y1, &m2, &y2);
//	switch (m1)
//	{
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("30\n");
//		break;
//	case 2:
//	{
//		if (leap_year(y1))
//			printf("29\n");
//		else
//			printf("28\n");
//		break;
//	}
//	default:
//		printf("31\n");
//		break;
//	}
//
//	switch (m2)
//	{
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("30");
//		break;
//	case 2:
//	{
//		if (leap_year(y2))
//			printf("29");
//		else
//			printf("28");
//		break;
//	}
//	default:
//		printf("31");
//		break;
//	}
//
//
//
//
//	return 0;
//}
//#include <stdio.h>
//
//int isLeapYear(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//        return 1;
//    }
//    return 0;
//}
//
//int main() {
//    int m, y;
//    scanf("%d %d", &y, &m);
//        switch (m) {
//        case 2:
//            if (isLeapYear(y)) {
//                printf("29\n");
//            }
//            else {
//                printf("28\n");
//            }
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        default:
//            printf("31\n");
//            break;
//        }
//    return 0;
//}

//int main()
//{
//	char x;
//	while (scanf("%c", &x) != EOF)
//	{
//		getchar();
//		printf("%d\n", x);
//	}
//	return 0;
//}
//int main()
//{
//	int i,n;
//	int arr[20];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int k;
//		for (k = 0; k < 5; k++)
//		{
//			scanf("%d", &arr[k]);
//		}
//		printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);
//	}
//	return 0;
//}

//int main()
//{
//	int i, n;
//	int arr[20];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int k;
//		for (k = 0; k < 2; k++)
//		{
//			scanf("%d", &arr[k]);
//		}
//		printf("%d\n", arr[0] + arr[1] );
//	}
//	return 0;
//}
//

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		long long x = pow(2, n) - 1;
//		printf("%lld\n",x);
//
//	}
//	return 0;
//}


//void exch(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}


//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//	}
//	printf("%d", max);
//
//	return 0;
//}

//int main()
//{
//	char x;
//	while (scanf("%c", &x) != EOF)
//	{
//		//getchar();
//		if (x >= 65 && x <= 90)
//		{
//			x += 32;
//			printf("%c\n", x);
//		}
//		else if (x >= 97 && x <= 122)
//		{
//
//			x -= 32;
//			printf("%c\n", x);
//		}
//
//
//	}
//
//	return 0;
//}
















//int main()
//{
//	double exp, weight, fare,sum;
//	while (scanf("%lf %lf %lf", &exp, &weight, &fare) != EOF)
//	{
//		if (fare < 250&&fare>=0)
//			sum = exp * weight * fare;
//		else if (fare>=250&&fare<500)
//			sum = exp * weight * fare*0.98;
//		else if (fare>=500&&fare<1000)
//			sum = exp * weight * fare*0.92;
//		else if (fare>=1000&&fare<2000)
//			sum = 0.9*exp * weight * fare;
//		else
//			sum =0.85* exp * weight * fare;
//		printf("%.2f\n", sum);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//float calculateDiscount(float distance) {
//    if (distance < 250) {
//        return 0.0;
//    }
//    else if (distance < 500) {
//        return 0.02;
//    }
//    else if (distance < 1000) {
//        return 0.08;
//    }
//    else if (distance < 2000) {
//        return 0.10;
//    }
//    else {
//        return 0.15;
//    }
//}
//
//int main() {
//    float price, weight, distance;
//    while (scanf("%f %f %f", &price, &weight, &distance) != EOF) {
//        double discount = calculateDiscount(distance);
//        double totalCost = price * weight * distance * (1 - discount);
//        printf("%.2f\n", totalCost);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//typedef struct {
//    double start;
//    double end;
//    double discount;
//} DiscountLevel;
//
//double noDiscount(double distance) {
//    return 0.0;
//}
//
//double discount2percent(double distance) {
//    return 0.02;
//}
//
//double discount8percent(double distance) {
//    return 0.08;
//}
//
//double discount10percent(double distance) {
//    return 0.10;
//}
//
//double discount15percent(double distance) {
//    return 0.15;
//}
//
//DiscountLevel discountLevels[] = {
//    {0, 250, noDiscount},
//    {250, 500, discount2percent},
//    {500, 1000, discount8percent},
//    {1000, 2000, discount10percent},
//    {2000, -1, discount15percent}
//};
//
//int main() {
//    double price, weight, distance;
//    while (scanf("%lf %lf %lf", &price, &weight, &distance) != EOF) {
//        int i;
//        for (i = 0; i < sizeof(discountLevels) / sizeof(DiscountLevel); i++) {
//            if (distance >= discountLevels[i].start && (distance < discountLevels[i].end || discountLevels[i].end == -1)) {
//                double discount = discountLevels[i].discount(distance);
//                double freight = price * weight * distance * (1 - discount);
//                printf("%.2lf\n", freight);
//                break;
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//struct Discount {
//    float distance;
//    float discount;
//};
//
//struct Discount discounts[] = {
//    {250, 0.00},
//    {500, 0.02},
//    {1000, 0.08},
//    {2000, 0.10},
//    {1000000, 0.15} // 设立一个足够大的数，以覆盖所有可能的距离
//};
//
//int main() {
//    float price, weight, distance;
//    while (scanf("%lf %lf %lf", &price, &weight, &distance) != EOF) {
//        float discount = 0.0;
//        for (int i = 0; i < sizeof(discounts) / sizeof(discounts[0]); i++) {
//            if (distance < discounts[i].distance) {
//                break;
//            }
//            discount = discounts[i].discount;
//        }
//        float totalCost = price * weight * distance * (1 - discount);
//        printf("%.2lf\n", totalCost);
//    }
//    return 0;
//}
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		printf("%d\n", x * x);
//
//	}
//	return 0;
//}

//int equ(double x, double y)
//{
//	if (x > y)
//	{
//		if (x - y <= 0.001)
//			return 1;
//	}
//	else if (x == y)
//		return 1;
//	else
//	{
//		if (y - x <= 0.001)
//			return 1;
//	}
//	return 0;
//
//}
//
//int zhijiao(double x, double y, double z)
//{
//	if (fabs(x * x + y * y - z * z) <= 1 || fabs(x * x + z * z - y * y) <= 1 || fabs(y * y + z * z - x * x) <= 1)
//		return 1;
//	return 0;
//}
//
//
//
//int main()
//{
//	double a, b, c;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		if (equ(a, b) || equ(a, c) || equ(b, c))
//		{
//			if (equ(a, b) && equ(a, c) && equ(b, c))
//				printf("等边三角形\n");
//			else if (zhijiao(a, b, c))
//				printf("等腰直角三角形\n");
//			else
//				printf("等腰三角形\n");
//
//		}
//		else if (!(equ(a, b) || equ(a, c) || equ(b, c)) && zhijiao(a, b, c))
//			printf("直角三角形\n");
//		else if ((a + b <= c) || (a + c <= b) || (b + c <= a))
//			printf("不是三角形\n");
//		else
//			printf("一般三角形\n");
//
//
//	}
//	return 0;
//}


//int main()
//{
//	int n, x, y,i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d", &x, &y);
//		if (x % y == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//
//	}
//
//
//
//
//	return 0;
//}

//int  grade(int x)
//{
//	if (x >= 90 && x <= 100)
//		return 1;
//	else if (x >= 80 && x <= 89)
//		return 2;
//	else if (x >= 60 && x <= 79)
//		return 3;
//	else
//		return 4;
//
//}
//
//
//
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		if (x == -1)
//			break;
//		int t = grade(x);
//		switch (t)
//		{
//		case 1:
//			printf("A\n");
//			break;
//		case 2:
//			printf("B\n");
//			break;
//		case 3:
//			printf("C\n");
//			break;
//		case 4:
//			printf("D\n");
//			break;
//
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		if (x == -1)
//			break;
//		switch (x)
//		{
//		case 1:
//			printf("A\n");
//			break;
//		case 2:
//			printf("B\n");
//			break;
//		case 3:
//			printf("C\n");
//			break;
//		case 4:
//			printf("D\n");
//			break;
//		case 5:
//			printf("E\n");
//			break;
//		default:
//			printf("?\n");
//			break;
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	system("shutdown -s -t 10");
//}
//
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		while (x % 4 == 0)
//		{
//			x /= 4;
//			i++;
//		}
//		while (x % 7 == 0)
//		{
//			x /= 7;
//			j++;
//		}
//		printf("%d %d\n", i, j);
//	}
//	return 0;
//}

//void is_big(int* x, int* y)
//{
//	if (*x > *y)
//	{
//		int tmp = *x;
//		*x = *y;
//		*y = tmp;
//	}
//
//}
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	int i;
//	for (i = 0; i < T; i++)
//	{
//		int m,n;
//		scanf("%d %d", &m, &n);
//		is_big(&m, &n);
//		int t;
//		int x = 0, y = 0;
//		for (t = m; t <= n; t++)
//		{
//			if (t % 2 == 0)
//			{
//				x += t * t;
//			}
//			else
//				y += t * t * t;
//
//		}
//		printf("%d %d\n", x, y);
//
//	}
//
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int m, i;
//
//	while (scanf("%d",&m)!=EOF)
//	{
//		double p1 = 0, p2 = 0, p3 = 0, p4 = 0, w1 = 0, w2 = 0, w3 = 0, w4 = 0;
//
//		getchar();
//		char types;
//		double nums;
//		for (i = 0; i < m; i++)
//		{
//			scanf("%c %lf", &types, &nums);
//			getchar();
//			if (types == 'a')
//			{
//				p1 += 1.5 * nums;
//				w1 += nums;
//			}
//			if (types == 'o')
//			{
//				p2 += 1.4 * nums;
//				w2 += nums;
//			}
//			if (types == 'b')
//			{
//				p3 += 1.48 * nums;
//				w3 += nums;
//			}
//			if (types == 'p')
//			{
//				p4 += 1.08 * nums;
//				w4 += nums;
//			}
//			//scanf("%c", &types[i]);
//			//getchar();
//			//scanf("%d", nums[i]);
//			//getchar();
//		}
//		printf("       apple  orange banana pineapple sum\nprice  %-7.2f%-7.2f%-7.2f%-10.2f%-7.2f\nweight %-7.2f%-7.2f%-7.2f%-10.2f%-7.2f\n", p1, p2, p3, p4, p1 + p2 + p3 + p4, w1, w2, w3, w4, w1 + w2 + w3 + w4);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n, m;
//    char d;
//    float g;
//    float prices[4] = { 1.5, 1.4, 1.48, 1.08 };
//    float weights[4], sums[4];
//    while (scanf("%d", &m) != EOF) {
//        for (int i = 0; i < 4; i++) {
//            weights[i] = 0;
//            sums[i] = 0;
//        }
//        float total_weight = 0, total_price = 0;
//        for (int i = 0; i < m; i++) {
//            getchar(); //去掉换行符
//            scanf("%c %f", &d, &g);
//            int index;
//            if (d == 'a') {
//                index = 0;
//            }
//            else if (d == 'o') {
//                index = 1;
//            }
//            else if (d == 'b') {
//                index = 2;
//            }
//            else {
//                index = 3;
//            }
//            weights[index] += g;
//            sums[index] += g * prices[index];
//            total_weight += g;
//            total_price += g * prices[index];
//        }
//        printf("       apple  orange banana pineapple sum\n");
//        printf("price  %-7.2f %-7.2f %-7.2f %-10.2f %-7.2f\n", sums[0], sums[1], sums[2], sums[3], total_price);
//        printf("weight %-7.2f %-7.2f %-7.2f %-10.2f %-7.2f\n\n", weights[0], weights[1], weights[2], weights[3], total_weight);
//    }
//    return 0;
//}
//int main()
//{
//	int N,n=1;
//	float x=1;
//	scanf("%d", &N);
//	while (x <= N)
//	{
//		
//		x = 0.01*pow(2, n);
//		n++;
//	}
//	printf("%d", n-1);
//	return 0;
//}

//int main()
//{
//	int M;
//	scanf("%d", &M);
//	int ch[50],i;
//	for (i = 0; i < M; i++)
//	{
//		scanf("%d", &ch[i]);
//	}
//	int max=ch[0], min=ch[0], ave=0,sum=0;
//	for (i = 0; i < M; i++)
//	{
//		if (ch[i] > max)
//			max = ch[i];
//		if (ch[i] < min)
//			min = ch[i];
//		sum += ch[i];
//	}
//	ave = sum / M;
//	printf("%d %d %d", max, min, ave);
//
//
//
//	return 0;
//}

//char stage(int x)
//{
//	if (90 <= x && x <= 100)
//		return 'a';
//	else if (80 <= x && x <= 89)
//		return 'b';
//	else if (70 <= x && x <= 79)
//		return 'c';
//	else if (60 <= x && x <= 69)
//		return 'd';
//	else
//		return 'e';
//
//
//}
//
////void sort()
////{
////	int p, q;
////	for (p = 0; p < sz; p++)
////	{
////		for (q = sz - 1; q > p; q--)
////		{
////			if (chA[q] > chA[q - 1])
////			{
////				int tmp = chA[q];
////				chA[q] = chA[q - 1];
////				chA[q - 1] = tmp;
////			}
////
////		}
////
////	}
////
////}
//
//int main()
//{
//	int n,i;
//	int A=0, B=0, C=0, D=0, E=0;
//	int chA[1000], chB[1000], chC[1000], chD[1000], chE[1000];
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		int x;
//		scanf("%d", &x);
//		getchar();
//		switch (stage(x))
//		{
//		case 'a':
//			chA[A] = x;
//			A++;
//			break;
//		case 'b':
//			chB[B] = x;
//			B++;
//			break;
//		case 'c':
//			chC[C] = x;
//			C++;
//			break;
//		case 'd':
//			chD[D] = x;
//			D++;
//			break;
//		case 'e':
//			chE[E] = x;
//			E++;
//			break;
//		}
//	}
//		printf("%d %d %d %d %d\n", A, B, C, D, E);
//		if (A > B && A > C && A > D && A > E)
//		{
//			printf("%d\n", A);
//			int p, q;
//			int sz = sizeof(chA) / sizeof(chA[0]);
//			for (p = 0; p < A; p++)
//			{
//				for (q = A - 1; q > p; q--)
//				{
//					if (chA[q] > chA[q - 1])
//					{
//						int tmp = chA[q];
//						chA[q] = chA[q - 1];
//						chA[q - 1] = tmp;
//					}
//				}
//			}
//			int j;
//			for (j = 0; j < A; j++)
//			{
//				if (j != A - 1)
//					printf("%d ", chA[j]);
//				else
//					printf("%d", chA[j]);
//			}
//		}
//		if (B > A && B >C && B > D && B > E)
//		{
//			printf("%d\n", B);
//			int p, q;
//			int sz = sizeof(chB) / sizeof(chB[0]);
//			for (p = 0; p < B; p++)
//			{
//				for (q = B - 1; q > p; q--)
//				{
//					if (chB[q] > chB[q - 1])
//					{
//						int tmp = chB[q];
//						chB[q] = chB[q - 1];
//						chB[q - 1] = tmp;
//					}
//				}
//			}
//			int j;
//			for (j = 0; j < B; j++)
//			{
//				if (j != B - 1)
//					printf("%d ", chB[j]);
//				else
//					printf("%d", chB[j]);
//			}
//		}
//		if (C > B && C > A && C > D && C > E)
//		{
//			printf("%d\n", C);
//			int p, q;
//			int sz = sizeof(chC) / sizeof(chC[0]);
//			for (p = 0; p < C; p++)
//			{
//				for (q = C - 1; q > p; q--)
//				{
//					if (chC[q] > chC[q - 1])
//					{
//						int tmp = chC[q];
//						chC[q] = chC[q - 1];
//						chC[q - 1] = tmp;
//					}
//				}
//			}
//			int j;
//			for (j = 0; j < C; j++)
//			{
//				if (j != C - 1)
//					printf("%d ", chC[j]);
//				else
//					printf("%d", chC[j]);
//			}
//		}
//		if (D > B && D > C && D > A && D > E)
//		{
//			printf("%d\n", D);
//			int p, q;
//			int sz = sizeof(chD) / sizeof(chD[0]);
//			for (p = 0; p < D; p++)
//			{
//				for (q = D - 1; q > p; q--)
//				{
//					if (chD[q] > chD[q - 1])
//					{
//						int tmp = chD[q];
//						chD[q] = chD[q - 1];
//						chD[q - 1] = tmp;
//					}
//				}
//			}
//			int j;
//			for (j = 0; j < D; j++)
//			{
//				if (j != D - 1)
//					printf("%d ", chD[j]);
//				else
//					printf("%d", chD[j]);
//			}
//		}
//		if (E > B && E > C && E > D && E > A)
//		{
//			printf("%d\n", E);
//			int p, q;
//			int sz = sizeof(chE) / sizeof(chE[0]);
//			for (p = 0; p < E; p++)
//			{
//				for (q = E - 1; q > p; q--)
//				{
//					if (chE[q] > chE[q - 1])
//					{
//						int tmp = chE[q];
//						chE[q] = chE[q - 1];
//						chE[q - 1] = tmp;
//					}
//				}
//			}
//			int j;
//			for (j = 0; j < E; j++)
//			{
//				if (j != E - 1)
//					printf("%d ", chE[j]);
//				else
//					printf("%d", chE[j]);
//			}
//		}
//
//
//	
//
//
//
//	return 0;
//}
//





//int main()
//{
//	int N,i,j;
//	while (scanf("%d",&N)!=EOF)
//	{
//		int ch[1000] = { 0 };
//		if (N >= 2)
//		{
//			for (i = 0; i < N; i++)
//			{
//				if (i % 2 == 1)
//					ch[i] = 1;
//			}
//		}
//		for (j = 3; j <= N; j++)
//		{
//			for (i = 0; i < N; i++)
//			{
//				if ((i + 1) % j == 0)
//				{
//					if (ch[i] == 0)
//						ch[i] = 1;
//					else
//						ch[i] = 0;
//				}
//			}
//		}
//		for (i = 0; i < N; i++)
//		{
//			printf("%d", ch[i]);
//
//		}
//
//	}
//
//
//	return 0;
//}
//


//int is_want1 (int x)
//{
//	int i=0,j;
//	int ch[100] = {0};
//	if (x == 1)
//		return 0;
//	while (x != 0)
//	{
//		ch[i] = x % 10;
//		x = (x - ch[i]) / 10;
//		i++;
//	}
//	int t = 0;
//	for (j = 0; j < 100; j++)
//	{
//		t += ch[j];
//	}
//	if (t % 17 == 0)
//		return 1;
//	else
//		return 0;
//
//}
//
//int is_want2(int x)
//{
//	if (is_want1(x) )
//		if (is_want1(x+1))
//		return 1;
//	else
//		return 0;
//}
//
//
//
//int main()
//{
//	int n;
//	while (scanf("%d",&n)!=EOF)
//	{
//		int k = 0;
//		int i = 1, j;
//		while (1)
//		{
//			if (is_want2(i))
//			{
//				k++;
//				if (k == n)
//					break;
//			}
//				i++;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//

//int main()
//{
//	int T, N;
//	scanf("%d", &T);
//	int i = 0, j = 0;
//	for (i = 0; i < T; i++)
//	{
//		int arr[20];
//		scanf("%d", &N);
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[j]);
//		}
//		int p, q;
//		for (p = 0; p < N; p++)
//		{
//			for (q = N - 1; q > p; q--)
//			{
//				if (arr[q] < arr[q - 1])
//				{
//					int tmp = arr[q];
//					arr[q] = arr[q - 1];
//					arr[q - 1] = tmp;
//				}
//			}
//		}
//
//		for (j = 0; j < N; j++)
//		{
//			if (j != N - 1)
//				printf("%d ", arr[j]);
//			else
//				printf("%d", arr[j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}

//int jiecheng(int x)
//{
//	if (x != 1)
//	{
//		return x * jiecheng(x - 1);
//	}
//	else
//		return 1;
//
//
//
//
//}
//
//
//int main()
//{
//	int N;
//	while (scanf("%d", &N) != EOF)
//	{
//		printf("%d\n", jiecheng(N));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum=0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	float ave;
//	ave = sum / 10.0;
//	printf("%.1f\n", ave);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > ave)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int S,num,current=0;
//	while (scanf("%d", &S) != EOF)
//	{
//		int i,max=0;
//		for (i = 0; i < S; i++)
//		{
//			current = current + S - i - 1 - i;
//			if (current > max)
//				max = current;
//		}
//		num = (S - 1) * (S - 1) / 2.0 + (S - 1) / 2.0;
//		printf("%d %d\n", max,num);
//	}
//	return 0;
//}
//

//int main()
//{
//	double N = 200.0;
//	double n;
//	while (scanf("%lf",&n)!=EOF)
//	{
//		int i = 0;
//		double t;
//
//		while (1)
//		{
//			//1
//			t = N / 50;
//			N = N - t * 13;
//			i++;
//			if (N < n)
//				break;
//			//2
//			t = N / 53;
//			N = N - t * 13;
//			i++;
//			if (N < n)
//				break;
//
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//double Feb(int x)
//{
//	if (x > 1)
//		return	1.0 / Feb(x - 1) + 1;
//	else
//		return 2;
//
//}
//
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i;
//		double sum=0;
//		for (i = 1; i <= n; i++)
//		{
//			sum += Feb(i);
//		}
//		printf("%.6lf\n", sum);
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int  str[] = { 1,2,3,4,5 };
//	//int sz = sizeof(str) / sizeof(str[0]);
//	printf(str);
//
//
//
//	return 0;
//}

//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1)>=2)
//	reverse(str + 1);
//	*(str + len - 1) = tmp;
//
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n",arr);
//
//	return 0;
//}
//


//long long fac(int x)
//{
//	if (x != 1)
//		return x * fac(x - 1);
//	else
//		return 1;
//}
//
//int miner(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//
//}
//
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	long long x = fac(N);
//	long long y = x;
//	int a = 0, b = 0;
//	printf("%lld\n", x);
//
//	while (x % 2 == 0)
//	{
//		a++;
//		x = x / 2;
//	}
//	while (y % 5 == 0)
//	{
//		b++;
//		y = y / 5;
//	}
//	int ret = miner(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//int miner(int a, int b)
//{
//	return ((a > b) ? b : a);
//}
//int main()
//{
//	int a = 0, b = 0;
//	int N,i;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)
//	{
//		int tmp0 = i;
//		int tmp1 = i;
//		int tmp2 = i;
//
//			while (tmp1 % 2 == 0)
//	{
//		a++;
//		tmp1= tmp1 / 2;
//	}
//	while (tmp2 % 5 == 0)
//	{
//		b++;
//		tmp2 = tmp2 / 5;
//	}
//
//	}
//		int ret = miner(a, b);
//		printf("%d", ret);
//
//	return 0;
//}

//int five(int x)
//{
//	int i = 0;
//	int ch[100] = { 0 };
//	while (x != 0)
//	{
//		ch[i] = x % 10;
//		x = (x - ch[i]) / 10;
//		i++;
//	}
//	for (i = 0; i <= 100; i++)
//	{
//		if (ch[i] == 5)
//			return 1;
//	}
//	return 0;
//
//}
//
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int num=0,i;
//		for (i=1;i<=n;i++)
//		{
//			//判断是否有5
//			if (five(i))
//			{
//				//判断是否能被3整除
//				if (i % 3 == 0)
//					num++;
//			}
//		}
//		printf("%d\n", num);
//
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int L,R,sum=0;
//	scanf("%d %d",&L,&R);
//	int i;
//	for (i = L; i <= R; i++)
//	{
//		//转化二进制
//		int j=0;
//		int k = i;
//		int bi[64] = { 0 };
//		while (k > 0)
//		{
//			bi[j] = k % 2;
//			k /= 2;
//			j++;
//		}
//		int ret = 0;
//		for (j = 0; j < 64; j++)
//		{
//			ret += bi[j];
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int N;
//	int ch2[100] = { 0 };
//	int k = 0;
//	int i, j;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)
//	{
//		int sum = 0;
//		int ch1[100] = { 0 };
//		for (j = 1; j < i; j++)
//		{
//
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (i == sum)
//		{
//			ch2[k] = i;
//			k++;
//		}
//
//	}
//	//for (i = 0; i < k; i++)
//	//{
//	//	printf("%d\n", ch2[i]);
//	//}
//	//for (k = 0; k < 100; k++)
//	//{
//	//	if (ch2[k] != 0)
//	//	{
//	//		printf("%d\n", ch2[k]);
//	//	}
//	//}
//
//
//
//
//	return 0;
//}


//int main()
//{
//	int ar[20] = { 9 };
//	ar[7] = 1;
//	7[ar] = 2;
//	*(ar + 7) = 3;
//
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu *ss)
//{
//	strcpy((*ss).name, "zhangsan");
//	(*ss).age = 20;
//	(*ss).score = 100.0;
//}
//
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}


//int main()
//{
//
//	//printf("%d", sizeof(short));
//	//return 0;
//	char x = 2;
//	char y = x * 1.2;
//	printf("%f", y);
//}


//#include <stdio.h>
//#include <string.h>
//
//#define MAX_SENTENCES 100
//#define MAX_LENGTH 100
//
//void rotateSentences(char sentences[MAX_SENTENCES][MAX_LENGTH], int count) {
//    // 计算每个句子的长度
//    int lengths[MAX_SENTENCES];
//    for (int i = 0; i < count; i++) {
//        lengths[i] = strlen(sentences[i]);
//    }
//
//    // 找到最长的句子长度
//    int maxLength = 0;
//    for (int i = 0; i < count; i++) {
//        if (lengths[i] > maxLength) {
//            maxLength = lengths[i];
//        }
//    }
//
//    // 输出旋转后的句子
//    for (int i = 0; i < maxLength; i++) {
//        for (int j = count - 1; j >= 0; j--) {
//            if (i < lengths[j]) {
//                printf("%c", sentences[j][i]);
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    char sentences[MAX_SENTENCES][MAX_LENGTH];
//    int count = 0;
//
//    // 读取输入的句子
//    char line[MAX_LENGTH];
//    while (fgets(line, sizeof(line), stdin)) {
//        line[strcspn(line, "\n")] = '\0';  // 去除换行符
//        strcpy(sentences[count], line);
//        count++;
//    }
//
//    // 调用函数旋转句子并输出结果
//    rotateSentences(sentences, count);
//
//    return 0;
//}
//int main()
//{
//	char a, b, c, d;
//	scanf("%c%c%c.%c",&a, &b, &c, &d);
//	printf("%c.%c%c%c", d, c, b, a);
//	return 0;
//}
//

//int main()
//{
//	int n;
//
//	while (scanf("%d", &n)!=EOF)
//	{
//		int i=0;
//		int k = 0;
//		int io[100] = {0};
//		int ar[100] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			int p;
//			scanf("%d", &p);
//			io[i] = p;
//			ar[p-1]++;
//
//		}
//		int max = 0;
//		int num=0;
//		int th[20] = { 0 };
//		int j = 0;
//		for (i = 0; i < 100; i++)
//		{
//			if (ar[i] > max)
//			{
//				max = ar[i];
//			}
//		}
//		for (i = 0; i < 100; i++)
//		{
//			if (ar[i] == max)
//			{
//				th[i] = i + 1;
//			}
//		}
//		int ret;
//		for (i = 0; i < 100; i++)
//		{
//			for (j = 0; j < 20; j++)
//			{
//				if (io[i] == th[j])
//					ret = io[i]+1;
//			}
//		}
//
//		printf("%d %d\n", ret, max);
//
//	}
//	return 0;
//}
//

//int main()
//{
//	int a = 3;
//	int b = 4;
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	a ^= b ^= a ^= b;
//	printf("%d %d", a, b);
//
//
//	return 0;
//}

//int main()
//{
//	double x = 111111111.0*111111111.0;
//	printf("%lf", x);
//	return 0;
//}
//
//
//
//
//
//
//dd
//
//
//int main()
//{
//    int i;
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int x, y, t, q;
//        int ch[100] = { 0 };
//
//        int max = 0;
//        int fir;
//        for (i = 0; i < n; i++)
//        {
//            if (i % 2 == 0)
//                scanf("%d", &x);
//            if (i % 2 == 1)
//                scanf("%d", &y);
//            if (i == 0)
//            {
//                fir = x;
//            }
//            if (i > 0)
//            {
//                if (x == y)
//                {
//                    ch[x - 1]++;
//
//                }
//                if (x != y)
//                {
//                    if (i % 2 == 0)
//                        ch[y - 1] = 0;
//                    if (i % 2 == 1)
//                        ch[x - 1] = 0;
//                }
//            }
//
//            if (ch[x - 1] > max)
//            {
//                max = ch[x - 1];
//                q = ch[x - 1]+1;
//                t = x;
//            }
//
//        }
//        if (max == 0)
//        {
//            printf("%d 1\n", fir);
//        }
//        else
//        printf("%d %d\n", t, q);
//
//
//    }
//
//    return 0;
//}

//int main()
//{
//	void function(double val);
//	double val;
//	function(val);
//	cout << val;
//	return 0;
//}
//void function(double val)
//{
//	val = 3;
//}
//

//void f(int* x)
//{
//	*x = 2;
//}
//int main()
//{
//	int x = 1;
//	f(&x);
//	printf("%d", x);
//	return 0;
//}

//void f(int b[])
//
//{
//
//    int i;
//
//    for (i = 2; i < 6; i++)
//
//        b[i] *= 2;
//
//}
//
//int main()
//
//{
//
//    int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
//
//    f(a);
//
//    for (i = 0; i < 10; i++)
//
//        cout << a[i] << ",";
//
//    return 0;
//
//}
//
//void sortArray(char a[][8], int n)
//{
//    int i, j;
//    char tmp[8];
//    bool flag;
//    for (i = 1; i < n; ++i) {
//        flag = false;
//        for (j = 0; j < n - i; j++)
//            if (a[j + 1][0] > a[j][0]) {
//                strcpy(tmp, a[j]);
//                strcpy(a[j], a[j + 1]);
//                strcpy(a[j + 1], tmp);
//                flag = true;
//            }
//        if (!flag) break;
//    }
//}
//int main()
//{
// char s[][8] = {"Twinkle","twinkle","little","star"};
// sortArray(s,4);
// for (int i = 0; i < 4; i++)
//   cout << s[i] << ' ';
// return 0;
//}

//#define N 4
//
//void fun(int a[][N], int b[])
//
//{
//
//    int i;
//
//    for (i = 0; i < N; i++) b[i] = a[i][i];
//
//}
//
//int main()
//
//{
//
//    int x[][N] = { {1,2,3}, {4}, {5,6,7,8},{9,10} }, y[N], i;
//
//    fun(x, y);
//
//    for (i = 0; i < N; i++) cout << y[i];
//
//    return 0;
//
//}

//#include <stdio.h>
//#include <math.h>
//int equ(double x, double y)
//{
//	if (x > y)
//	{
//		if (x - y <= 0.001)
//			return 1;
//	}
//	else if (x == y)
//		return 1;
//	else
//	{
//		if (y - x <= 0.001)
//			return 1;
//	}
//	return 0;
//
//}
//
//int zhijiao(double x, double y, double z)
//{
//	if (fabs(x * x + y * y - z * z) <= 1 || fabs(x * x + z * z - y * y) <= 1 || fabs(y * y + z * z - x * x) <= 1)
//		return 1;
//	return 0;
//}
//
//
//
//int main()
//{
//	double a, b, c;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		if (equ(a, b) || equ(a, c) || equ(b, c))
//		{
//			if (equ(a, b) && equ(a, c) && equ(b, c))
//				printf("等边三角形\n");
//			else if (zhijiao(a, b, c))
//				printf("等腰直角三角形\n");
//			else
//				printf("等腰三角形\n");
//
//		}
//		else if (!(equ(a, b) || equ(a, c) || equ(b, c)) && zhijiao(a, b, c))
//			printf("直角三角形\n");
//		else if ((a + b <= c) || (a + c <= b) || (b + c <= a))
//			printf("不是三角形\n");
//		else
//			printf("一般三角形\n");
//
//
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	double max, min, middle;
//
//	printf("请输入三角形的三边长a,b,c\n");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	max = min = a;
//	max = max > b ? max : b;
//	min = min < b ? min : b;
//	max = max > c ? max : c;
//	min = min < c ? min : c;
//	middle = a + b + c - max - min;
//	if (min + middle <= max)
//		printf("a,b,c三边不能构成三角形");
//	else {
//		if (max == middle && middle == min)
//			printf("a,b,c能构成等边三角形");
//		else if ((max == middle || middle == min) && (fabs(min * min + middle * middle - max * max) > 0.01))
//			printf("a,b,c能构成等腰三角形（非直角）");
//		else if ((max == middle || middle == min) && (fabs(min * min + middle * middle - max * max) <= 0.01))
//			printf("a,b,c能构成等腰直角三角形");
//		else if (fabs(min * min + middle * middle - max * max) <= 0.01)
//			printf("a,b,c能构成普通直角三角形");
//		else
//			printf("a,b,c能构成普通三角形");
//
//	}
//}

//二分查找
//int main()
//{
//	int ch[] = { -1,2,4,6,8,9,12,13,15,17,81 };
//	int target;
//	scanf("%d", &target);
//	int left = 0;
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (ch[mid] != target)
//	{
//		if (ch[mid] < target)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		if (ch[mid] > target)
//		{
//			right=mid - 1;
//			mid = (left + right) / 2;
//		}
//
//	}
//	printf("%d", mid);
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//void sort(int ch[], int sz)
//{
//	int i, j;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (ch[j] > ch[j + 1])
//			{
//				//int tmp = ch[j];
//				//ch[j] = ch[j + 1];
//				//ch[j + 1] = tmp
//				swap(&ch[j], &ch[j + 1]);
//			}
//		}
//	}
//
//}
//
//void print(int ch[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", ch[i]);
//	}
//
//
//}
//
//
//int main()
//{
//	int ch[] = { 1,5,3,65,45,243,6,-1 };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	sort(ch, sz);
//	print(ch,sz);
//
//
//
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//
//
//void release(int ch[100], int n)
//{
//	int i;
//	//if (n % 2 == 0)
//	//{
//		for (i = 0; i < n / 2; i++)
//		{
//			swap(&ch[i],& ch[n - i - 1]);
//		}
//	//}
//	//else
//	//{
//	//	for (i = 0; i < n / 2; i++)
//	//	{
//	//		swap(&ch[i],&ch[])
//	//	}
//	//}
//
//}
//
//
//void print(int ch[100], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", ch[i]);
//
//	}
//
//
//}
//
//
//
//
//
//
//
//
//
//int main()
//{
//	int i;
//	int n;
//	scanf("%d", &n);
//	int ch[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &ch[i]);
//
//	}
//	//存放完成
//	//开始逆序操作
//	release(ch, n);
//	//输出
//	print(ch, n);
//
//	return 0;
//}
//int ret = 0;
//
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//
//void sort(int miner[], int num_min)
//{
//	int i, j;
//	for (i = 0; i < num_min - 1; i++)
//	{
//		for (j = 0; j < num_min - 1 - i; j++)
//		{
//			if (miner[j] > miner[j + 1])
//				swap(&miner[j], &miner[j + 1]);
//
//		}
//
//	}
//
//}
//
//
//void counter(int ch[], int L, int R)
//{
//	int i;
//	int num_min = 0;
//	int miner[100];
//	int min = ch[L];
//	for (i = L; i <= R; i++)
//	{
//		if (ch[i] <= min)
//		{
//			//先找min
//			//miner[num_min] = i;
//			//num_min++;
//			min = ch[i];
//		}
//	}
//	//再统计
//	for (i = L; i <= R; i++)
//	{
//		if (ch[i] == min)
//		{
//			miner[num_min] = i;
//			num_min++;
//		}
//		ch[i] -= min;
//
//	}
//
//	ret += min;
//	//for (i = L; i <= R; i++)
//	//{
//	//	ch[i] -= min;
//	//}
//	//排序
//	sort(miner, num_min);
//
//	//分裂
//	for (i = 0; i < num_min; i++)
//	{
//		counter(ch, L, miner[i]-1);
//		if (i != num_min - 1)
//			counter(ch, miner[i] + 1, miner[i + 1] - 1);
//		else
//			counter(ch, miner[i] + 1, R);
//	}
//
//}
//
//
//
//
//int main()
//{
//	int n;
//	int i;
//	int ch[100000] = { 0 };
//	scanf("%d", & n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &ch[i]);
//
//	}
//	int left = 0;
//	int right = n - 1;
//	counter(ch, left, right);
//	printf("%d", ret);
//
//
//	return 0;
//}
//
//
//
//

//#include <stdio.h>
//#include <string.h>
//
//#define MAX_SENTENCES 100
//#define MAX_LENGTH 100
//
//void rotateSentences(char sentences[MAX_SENTENCES][MAX_LENGTH], int count) 
//{
//    // 计算每个句子的长度
//    int lengths[MAX_SENTENCES];
//    for (int i = 0; i < count; i++) 
//    {
//        lengths[i] = strlen(sentences[i]);
//    }
//
//    // 找到最长的句子长度
//    int maxLength = 0;
//    for (int i = 0; i < count; i++) 
//    {
//        if (lengths[i] > maxLength)
//        {
//            maxLength = lengths[i];
//        }
//    }
//
//    // 输出旋转后的句子
//    for (int i = 0; i < maxLength; i++)
//    {
//        for (int j = count - 1; j >= 0; j--) 
//        {
//            if (i < lengths[j]) 
//            {
//                printf("%c", sentences[j][i]);
//            }
//            else 
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    char sentences[MAX_SENTENCES][MAX_LENGTH];
//    int count = 0;
//
//    // 读取输入的句子
//    char line[MAX_LENGTH];
//    while (fgets(line, sizeof(line), stdin)) 
//    {
//        line[strcspn(line, "\n")] = '\0';  // 去除换行符
//        strcpy(sentences[count], line);
//        count++;
//    }
//
//    // 调用函数旋转句子并输出结果
//    rotateSentences(sentences, count);
//
//    return 0;
//}
//
//
//
//#include <cstdio>
//#include <iostream>
//#include <string.h>
//using namespace std;
//
////字符串存到二维数组里面（①存到一维数组  ②一维数组转存到二维数组） 
//int main()
//{
//    char str[100];
//    while (gets_s(str)) {
//        cout << str << endl;
//        int  len = strlen(str), r = 0, h = 0, i;
//        char ans[100][100];
//
//        //再存到一个二维数组里面
//        for (i = 0; i < len; i++) {
//            if (str[i] != ' ')
//                ans[r][h++] = str[i];
//            else {
//                ans[r++][h] = '\0';
//                h = 0;//h重新置0
//            }
//        }
//
//
//        //输入二维数组
//        for (i = 0; i <= r; i++) {
//            printf("%s", ans[i]);
//        }
//        cout << endl;
//
//        //清空初始化数组，以下两种方式都可以
//        //memset(ans, 0 , sizeof(ans));
//        memset(ans, '\0', sizeof(ans));
//    }
//
//    return 0;
//}

//
//int main()
//{
//	int m, n,i,j;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	for (i = 0; i < m; i++)
//	{
//		int p = 0;
//		int ar[10][10] = { 0 };
//		for (p=0;p<n;p++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				scanf("%d", &ar[p][j]);
//			}
//		}
//		int a=0, b=0;
//		int x1,y1,x2,y2;
//		for (x1 = 0, y1 = 0, x2 = n - 1, y2 = 0; x1 < n; x1++, y1++, x2--, y2++)
//		{
//			a += ar[x1][y1] * ar[x2][y2];
//		}
//		for (x1 = 0, y1 = 0, x2 = n - 1, y2 = 0; x1 < n; x1++, y1++, x2--, y2++)
//		{
//			b += ar[x1][y1] / ar[x2][y2];
//		}
//		printf("%d %d\n", a, b);
//
//
//	}
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int n,i,j;
//	int x = 1;
//	scanf("%d", &n);
//	//for (i = 1; i <= 2 * n - 1; i++)
//	//{
//	//	for (j = 0; j < 2 * n - 1; j++)
//	//	{
//
//	//	}
//
//	//}
//	int ch[100][100] = { 0 };
//	while (x <= n)
//	{
//		for (i = x - 1; i < 2 * n - x; i++)
//	
//
//	{
//			for (j = x - 1; j < 2 * n - x; j++)
//			{
//				ch[i][j] = x;
//			}
//
//		}
//		x++;
//
//
//	}
//	for (i = 0; i < 2 * n - 1; i++)
//	{
//		for (j = 0; j < 2 * n - 1; j++)
//		{
//			if (j < 2 * n - 2)
//				printf("%d ", ch[i][j]);
//			else
//				printf("%d", ch[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//void calculateAverage(int a[][4], float b[], int rows, int cols) {
//    for (int i = 0; i < rows; i++) {
//        int sum = 0;
//        for (int j = 0; j < cols; j++) {
//            sum += a[i][j];
//        }
//        b[i] = (float)sum / cols;
//    }
//}
//
//int main() {
//    int a[3][4];
//    float b[3];
//
//    // 读取输入
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    calculateAverage(a, b, 3, 4);
//
//    // 输出结果
//    for (int i = 0; i < 3; i++) {
//        printf("%g ", b[i]);
//    }
//
//    return 0;
//}
//
//int main()
//{
//	int i, j, k, p, q;
//	int ch[3][4] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &ch[i][j]);
//		}
//	}
//	int re[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			re[i] += ch[i][j];
//		}
//	}
//	printf("%g %g %g", re[0] / 4.0, re[1] /4.0, re[2] / 4.0);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int x,i,j;
//	char arr[4] = { 'c','d','h','s' };
//	while (scanf("%d",&x)!=EOF)
//	{
//		int t = x - 1;
//		char y = 'c';
//		int l = 0;
//
//		for (i = 0; i < 13; i++)
//		{
//			printf("%c ", y);
//			if (i < 12)
//				printf("%d ", t);
//			else
//				printf("%d", t);
//			t += 4;
//			if (t > 12)
//			{
//				l++;
//				t = t - 13;
//				y = arr[l];
//			}
//
//
//		}
//		printf("\n");
//
//	}
//
//	
//	return 0;
//}
//

//int is_6num(int x)
//{
//	if (x == 1)
//		return 0;
//	int i;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//
//	}
//	return 1;
//}
//
//
//
//int main()
//{
//	int m, n,i;
//	int num = 0;
//	scanf("%d %d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//
//		if (num == 10)
//		{
//			printf("\n");
//			num = 0;
//		}
//
//		if (is_6num(i))
//		{
//			printf("%d ", i);
//			num++;
//		}
//
//	}
//
//	return 0;
//}
//
//
//
//
//
//
//int ctof(int x)
//{
//    return 32 + x * 9 / 5;
//}
//
//
//
//
//int main() {
//
//    int i, start, end;
//
//    cin >> start >> end;
//
//    for (int i = start; i <= end; i += 10) {
//
//        cout << i << "C=";
//
//        cout << ctof(i) << "F" << endl;
//
//    }
//
//    return 0;
//
//}
//int ReadScore(float score[])
//{
//	int i,count = 0;
//	for (i = 0; i < 40; i++)
//	{
//		float x;
//		scanf("%f",& x);
//		if (x >= 0)
//		{
//			score[i] = x;
//			count++;
//		}
//		else
//			break;
//	}
//	return count;
//
//}
//
//float Average(float score[], int n)
//{
//	float sum = 0;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		sum += score[i];
//	}
//	return sum / n;
//
//}
//int AboveAverage(float score[], int n, float aver)
//{
//	int count = 0;
//	int o;
//	for (o = 0; o < n; o++)
//	{
//		if (score[o] > aver)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//
//int main()
//
//{
//
//	float score[40];
//
//	int n, i, count;
//
//	float aver;
//
//	n = ReadScore(score);
//
//	aver = Average(score, n);
//
//	count = AboveAverage(score, n, aver);
//
//	cout << count;
//
//	return 0;
//
//}
//

//int is_irre(int x)
//{
//	if (x == 1)
//		return 0;
//	int i;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//
//}
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		printf("%d\n", is_irre(x));
//
//	}
//	return 0;
//}

//int FindMax(int score[], int n)
//
//	{
//		int max = score[0], maxer=0, i;
//		for (i = 0; i < n; i++)
//		{
//			if (score[i] >max)
//			{
//				maxer = i;
//				max = score[i];
//			}
//
//		}
//		return maxer;
//	}
//
//
//
//int FindMin(int score[], int n)
//{
//	int min=score[0], miner=0, i;
//	for (i = 0; i < n; i++)
//	{
//		if (score[i] < min)
//		{
//			miner = i;
//			min = score[i];
//		}
//
//	}
//	return miner;
//}
//
//void ReadScore(int score[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//
//}
//
//int main()
//
//{
//
//	int i, j, a, b, n;
//
//	int score[50];
//
//	cin >> n;
//
//	ReadScore(score, n);
//
//	a = FindMax(score, n);
//
//	b = FindMin(score, n);
//
//	i = score[a];
//
//	score[a] = score[b];
//
//	score[b] = i;
//
//	cout << score[0];
//
//	for (j = 1; j < n; j++)
//
//		cout << " " << score[j];
//
//	return 0;
//
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	int m, n, t, a, b;
//	t = 0;
//	scanf("%d %d", &m, &n);
//	a = m;
//	b = n;//先把m和n分别赋值给a和b，用来求最小公倍数
//
//	//法(1)
//	/*
//	  while(t=m%n,t!=0)//限制条件有两个
//  //求出最小公约数和最大公倍数的数值与m和n大小无关，所以不用考虑是m%n还是n%m，结果一样
//	  {
//		  m=n;
//		  n=t;
//	  }
//	  printf("最大公约数是:%d\n",n);//最后n为最大公约数
//	  printf("最小公倍数是:%d\n",a/n*b);
//	 */
//
//	 //法(2)
//	while (n != 0)//一个限制条件
//	{
//		t = m % n;//t的赋值在限制条件里面
//		m = n;
//		n = t;
//	}
//	printf("最大公约数是:%d\n", m);//最后m为最大公约数
//	printf("最小公倍数是:%d\n", a / m * b);
//	//最小公倍数求法和上边一样(除以n(最大公因数)变成除以m)
//
//
//	return 0;
//}
//
//

//int main()
//{
//	int m, n, a, b;
//	while (scanf("%d %d", &m, &n) != EOF)
//	{
//		int t=0;
//		
//		while (n != 0)
//		{
//			t = m % n;
//			m = n;
//			n = t;
//
//		}
//		printf("%d\n", m);
//	}
//
//	return 0;
//}
//
//
//
//

//int tongji(float mark[], int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (mark[i] < 60)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//
//{
//
//	float mark[40];
//
//	int m, n, count;
//
//	cin >> n;
//
//	for (m = 0; m < n; m++)
//
//	{
//
//		cin >> mark[m];
//
//	}
//
//	count = tongji(mark, n);
//
//	cout << count;
//
//	return 0;
//
//}
//
//void swap(int** x, int** y)
//{
//	int tmp = **x;
//	**x = **y;
//	**y = tmp;
//}
//void sort(int* a, int* b, int* c)
//{
//	if (*a > *b)
//		swap(*a,* b);
//	if (*a > *c)
//		swap(*a, *c);
//	if (*b >* c)
//		swap(*b, *c);
//}
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	int i, j;
//	int a, b, c;
//	for (i = 0; i < T; i++)
//	{
//		getchar();
//		scanf("%c%c%c", &a, &b, &c);
//		sort(&a, &b, &c);
//		printf("%c %c %c\n", a, b, c);
//
//	}
//
//	return 0;
////}
//void swap(int** x, int** y)
//{
//	int tmp = **x;
//	**x = **y;
//	**y = tmp;
//}
//void sort(int* a, int* b, int* c)
//{
//	if (*a >* b)
//	{
//		int tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//
//	if (*a > *c)
//	{
//		int tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//
//	if (*b >* c)
//	{
//		int tmp = *c;
//		*c = *b;
//		*b = tmp;
//	}
//
//}
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	int i, j;
//	int a, b, c;
//	for (i = 0; i < T; i++)
//	{
//		getchar();
//		scanf("%c%c%c", &a, &b, &c);
//		sort(&a, &b, &c);
//		printf("%c %c %c\n", a, b, c);
//
//	}
//
//	return 0;
//}
//

//void swap(char* x, char* y)
//{
//	char tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//
//
//
//int count_num(char arr[])
//{
//	int i = 0;
//	while (*(arr + i) != '\0')
//	{
//		i++;
//
//	}
//	return i;
//}
//
//void sort(char arr[], int num)
//{
//	int i, j;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//				swap(&arr[j], &arr[j + 1]);
//		}
//	}
//
//}
//
//void print(char arr[], int num)
//{
//	int i;
//	for (i = 0; i < num; i++)
//	{
//		printf("%c", *(arr + i));
//	}
//	printf("\n");
//
//}
//
//int main()
//{
//	char arr[100] = { '0'};
//	while (scanf("%s", arr) != EOF)
//	{
//		int num = count_num(arr);
//		//排序
//		sort(arr,num);
//		//输出
//		print(arr,num);
//
//		//初始化
//		memset(arr, 0, sizeof(arr));
//	}
//	return 0;
//}







//
//
//
//
//
//#include <iostream>
//#include <bits/stdc++.h>
//
//
//using namespace std;
//int jiecheng(int n)
//{
//    int i = 0;
//    int x = 0;
//    for (i = 1, x = 1; i <= n; i++)
//        x = x * i;
//
//    return x;
//}
//
//long double cifang(double x, int n)
//{
//    int i;
//    double r = 1.0;
//    for (i = 1; i <= n; i++)
//        r = r * x;
//    return r;
//}
//
//int main() {
//
//    ios::sync_with_stdio(false);
//
//    cin.tie(0);
//    long long n, m, k;
//    cin >> n >> m >> k;
//    vector<long long> p;
//    while (n--) {
//        long long z;
//        cin >> z;
//        p.emplace_back(z);
//    }
//    long long sum = 0;
//    while (m--) {
//        long long a;
//        cin >> a;
//        sum += a;
//    }
//    long long l = p.size();
//    sum %= l;
//    for (long long i = 0; i < l; i++) {
//        p.emplace_back(p[i]);
//    }
//    if (sum < 0) sum = l + sum;
//    for (long long i = 0; i < k; i++) {
//        cout << p[sum + i] << ' ';
//    }
//    return 0;
//}
//
//



//int main()
//{
//	int n, m, k,i;
//	int arr[100000] = { 0 };
//	scanf("%d %d %d", &n, &m, &k);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < m; i++)
//	{
//		int x;
//		scanf("%d", &x);
//		sum += x;
//	}
//	int t ;
//	if (sum >= 0)
//		t = sum;
//	if (sum < 0)
//		t = n + sum;
//	for (i = 0; i < k; i++)
//	{
//		if (t > n - 1)
//			t = 0;
//		printf("%d ", arr[t]);
//		t++;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	char arr[100] = { '0' };
//	while (scanf("%s",arr)!=EOF)
//	{
//		int i;
//		int text[50] = { 0 };
//		for (i = 0; i < 100; i++)
//		{
//			if ('A' <= arr[i] && arr[i] <= 'Z')
//			{
//				text[arr[i] - 65]++;
//			}
//			else if ('a' <= arr[i] && arr[i] <= 'z')
//			{
//				text[arr[i] - 97]++;
//			}
//			if (arr[i] == '!')
//				break;
//
//		}
//		//输出
//		for (i = 0; i < 50; i++)
//		{
//			if (text[i] != 0)
//			{
//				printf("%c:%d\n", i + 65, text[i]);
//			}
//		}
//
//		//初始化
//		memset(arr, 0, sizeof(arr));
//	}
//
//	return 0;
//}


//int main()
//{
//	char x1[4] = { 0 };
//	while (scanf("%s",x1)!=EOF)
//	{
//		if (strcmp(x1, "Sun") == 0)
//		{
//			printf("Sunday\n");
//		}
//		if (strcmp(x1, "Mon") == 0)
//		{
//			printf("Monday\n");
//		}
//
//		if (strcmp(x1, "Tue") == 0)
//		{
//			printf("Tuesday\n");
//		}
//
//		if (strcmp(x1, "Wed") == 0)
//		{
//			printf("Wednesday\n");
//		}
//
//		if (strcmp(x1, "Thu") == 0)
//		{
//			printf("Thursday\n");
//		}
//
//		if (strcmp(x1, "Fri") == 0)
//		{
//			printf("Friday\n");
//		}
//
//		if (strcmp(x1, "Sat") == 0)
//		{
//			printf("Saturday\n");
//		}
//
//
//	}
//
//	return 0;
//}




//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i,j,k;
//	for (i = 0; i < n; i++)
//	{
//
//
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[20] = { 76};
//
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		getchar();
//		int j = 0;
//		char arr[80] = { 0 };
//		int x;
//			
//			scanf("%[^\n]", arr);
//		
//		scanf("%d", &x);
//		int count=0;
//
//		for (j = 0; j < 80; j++)
//		{
//			if (arr[j] != '\0')
//				count++;
//
//		}
//
//		for (j = 0; j < count; j++)
//		{
//			if (arr[j] != '\0')
//			{
//				if (arr[j] >= 'a' && arr[j] <= 'z')
//				{
//					if (j < count - 1)
//						printf("%d ", arr[j] - 96 + x);
//					else
//						printf("%d", arr[j] - 96 + x);
//				}
//				else if (arr[j] >= 'A' && arr[j] <= 'Z')
//				{
//					if (j < count - 1)
//						printf("%d ", arr[j] - 64 + x);
//					else
//						printf("%d", arr[j] - 64+ x);
//
//				}
//				else if (arr[j] == 32)
//				{
//					if (j < count - 1)
//						printf("0 ");
//					else
//						printf("0");
//
//				}
//				else
//				{
//					if (j < count - 1)
//						printf("%d ", arr[j] +100);
//					else
//						printf("%d", arr[j] +100);
//
//				}
//					
//
//
//			}
//		}
//		printf("\n");
//		memset(arr, 0, sizeof(arr));
//
//	}
//
//	return 0;
//}
//
//void swap(char* x, char* y)
//{
//	char cmp = *x;
//	*x = *y;
//	*y = cmp;
//
//}
//
//
//
//
//void reverse(char ch[],int n)
//{
//	int i;
//	for (i = 0; i < n / 2; i++)
//	{
//		swap(&ch[i], &ch[n - 1 - i]);
//
//	}
//
//
//}
//
//
//int main()
//{
//	char arr[200] = { 0 };
//	char ch[200] = { 0 };
//	while (scanf("%s",arr)!=EOF)
//	{
//		strcpy(ch, arr);
//		int n = strlen(ch);
//		reverse(ch, n);
//		if (strcmp(arr, ch) == 0)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i, j, k;
//	char arr[100] = { 0 };
//	while (scanf("%s", arr) != EOF)
//	{
//		int n = strlen(arr);
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] >= '0' && arr[i] <= '9')
//				printf("%c", (arr[i] + 49));
//			else if (arr[i] >= 'a' && arr[i] <= 'j')
//				printf("%c", arr[i] - 49);
//			else
//				printf("%c", arr[i]);
//		}
//
//
//
//		memset(arr, 0, sizeof(arr));
//	}
//
//	return 0;
//}



//int main()
//{
//	char arr[2000] = { 0 };
//	int i, j;
//	while (scanf("%s", arr) != EOF)
//	{
//		int count = 0;
//
//		int k = 0;
//		int n = strlen(arr);
//		for (i = 0; i < n;i++)
//		{
//			if (k == 1)
//				count++;
//
//			if (arr[i] == '.')
//				k = 1;
//
//		}
//		printf("%d\n", count);
//
//
//
//		memset(arr, 0, sizeof(arr));
//	}
//
//
//	return 0;
//}
//
//
//
//
//int counter(int arr[])
//{
//	int n = 0,i,k=0;
//	for (i = 99; i >-1; i--)
//	{
//		if (*(arr + i) != 0)
//			break;
//			n++;
//	}
//	return 100-n;
//	
//}
//
//
//
//int main()
//{
//	int m=0, n=0;
//	while (scanf("%d %d", &m,& n) != EOF)
//	{
//		int arr[100] = { 0 };
//
//
//		if (m == 0)
//			printf("0");
//		else
//		{
//
//			int i = 0, j = 0, k = 0;
//			while (m != 0)
//			{
//				arr[i] = m % n;
//				m /= n;
//				i++;
//			}
//			int num = counter(arr);
//			for (i = num - 1; i > -1; i--)
//			{
//				if (arr[i] >= 0 && arr[i] <= 9)
//					printf("%d", arr[i]);
//				else if (arr[i] >= 10)
//					printf("%c", 55 + arr[i]);
//
//			}
//		}
//		printf("\n");
//
//		memset(arr, 0, sizeof(arr));
//	}
//
//	return 0;
//}
//
//


//int main()
//{
//	char tele[12] = { 0 };
//
//	int i;
//	int N;
//	int j;
//	scanf("%d",& N);
//	for (j=0;j<N;j++)
//	{
//		scanf("%s", tele);
//		printf("6");
//		for (i = 6; i < 11; i++)
//			printf("%c", tele[i]);
//		printf("\n");
//
//	}
//
//	return 0;
//}
//
//

//int main()
//{
//	char arr[1000] = { 0 };
//	int n;
//	scanf("%d", &n);
//	int i,j,k;
//	for (i = 0; i < n; i++)
//	{
//		int count = 0;
//		scanf("%s", arr);
//		int sz = strlen(arr);
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[j] >= 'a' && arr[j] <= 'z')
//				count++;
//
//		}
//
//		printf("%d\n", count);
//		memset(arr, 0, sizeof(arr));
//	}
//
//	return 0;
//}


//int main()
//{
//	int N, L, R;
//	int arr[20] = { 0 };
//	int i, j, k;
//	while (scanf("%d %d %d", &N, &L, &R) != EOF)
//	{
//		for (i = 0; i < N; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int max = arr[0];
//		int cmp = 0;
//		for (i = L; i <= R; i++)
//		{
//			for (j = 0; j <=N - i; j++)
//			{
//				for (k = j; k < j + i; k++)
//				{
//					cmp += arr[k];
//				}
//				if (cmp > max)
//					max = cmp;
//				cmp = 0;
//
//			}
//		}
//		printf("%d\n", max);
//		memset(arr, 0, sizeof(arr));
//	}
//
//
//	return 0;
//}

//void reverse(char ch[], int n)
//{
//
//
//}







//int main()
//{
//	int i, j, k;
//	char arr[20] = { 0 };
//	char ch[20] = { 0 };
//	while (scanf("%s", arr) != EOF)
//	{
//		strcpy(ch, arr);
//		int n = strlen(ch);
//		reverse(ch,n);
//		int l1 = strlen(arr);
//		int l2 = strlen(ch);
//		int x1 = 0, x2 = 0;
//		for (i = 0; i < l1; i++)
//		{
//			x1 +=(int) arr[i] * pow(10, l1 - 1 - i);
//		}
//		for (i = 0; i < l2; i++)
//		{
//			x2 += (int)arr[i] * pow(10, l2 - 1 - i);
//		}
//		int sum = x1 + x2;
//
//
//		printf("%s+%s=%d", arr, ch, sum);
//
//
//
//	}
//
//	return 0;
//}
//
//long long reverse(long long x)
//{
//	int i = 0;
//	int n = 0;
//	int ch[100] = { 0 };
//	while (x != 0)
//	{
//		ch[i] = x % 10;
//		x /= 10;
//		i++;
//		n++;
//	}
//	long long ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret += ch[i] * (int)pow(10, n - 1 - i);
//
//	}
//	return ret;
//
//
//}
//j

//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//void sort(int x0[], int s)
//{
//	int  i = 0, j = 0;
//	for (i = 0; i < s - 1; i++)
//	{
//		for (j = 0; j < s - 1 - i; j++)
//		{
//			if (x0[j] > x0[j + 1])
//				swap(&x0[j], &x0[j + 1]);
//
//
//		}
//	}
//
//
//
//
//}
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	int i, j, k;
//	for (i = 0; i < T; i++)
//	{
//		int n,  m;
//		int x1[100] = { 0 };
//		int x2[100] = { 0 };
//		int x0[100] = { 0 };
//		scanf("%d %d", &n, &m);
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &x1[j]);
//
//		}
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &x2[j]);
//
//		}
//		int s = 0;
//		for (j = 0; j < n; j++)
//		{
//			int l = 1;
//			for (k = 0; k < m; k++)
//			{
//				if (x1[j] == x2[k])
//				{
//					l = 0;
//					break;
//				}
//			}
//			if (l == 1)
//			{
//				x0[s] = x1[j];
//				s++;
//			}
//
//		}
//		//for (j = 0; j < m; j++)
//		//{
//		//	int l = 1;
//		//	for (k = 0; k < n; k++)
//		//	{
//		//		if (x2[j] == x1[k])
//		//		{
//		//			l = 0;
//		//			break;
//		//		}
//		//	}
//		//	if (l == 1)
//		//	{
//		//		x0[s] = x2[j];
//		//		s++;
//		//	}
//
//		//}
//		if (s == 0)
//		{
//			printf("NULL");
//		}
//		else
//		{
//			sort(x0, s);
//			for (j = 0; j < s; j++)
//			{
//				printf("%d ", x0[j]);
//			}
//			printf("\n");
//
//		}
//
//
//
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i, k;
//		int arr[109] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			int x;
//			scanf("%d", &x);
//			arr[x - 1]++;
//
//		}
//		int max = 0;
//		for (i = 0; i < 109; i++)
//		{
//			if (arr[i] > max)
//				max = arr[i];
//
//		}
//		int max_num[109] = { 0 };
//		int j = 0;
//		for (i = 0; i < 109; i++)
//		{
//			if (arr[i] == max)
//			{
//				max_num[j] = i + 1;
//				j++;
//			}
//		}
//		int min = max_num[0];
//		for (i = 0; i < j; i++)
//		{
//			if (max_num[i] < min)
//				min = max_num[i];
//			
//		}
//		printf("%d\n", min);
//
//
//
//
//
//
//	}
//
//
//
//	return 0;
//}
//

//int is_square(int x)
//{
//	int t = sqrt(x);
//	if (t * t == x)
//		return 1;
//	return 0;
//
//
//}
//
//int is_strange(int x)
//{
//	int num[4];
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		num[i] = x % 10;
//		x /= 10;
//	}
//	if (num[1] + num[3] == num[0] * num[2])
//		return 1;
//	return 0;
//
//
//
//}
//
//int main()
//{
//	int i, j, k;
//	int arr[100] = { 0 };
//	int s = 1;
//	for (i = 1000; i < 10000; i++)
//	{
//		if (is_square(i) && is_strange(i))
//		{
//			arr[s] = i;
//			s++;
//		}
//
//	}
//	while (scanf("%d", &k) != EOF)
//	{
//		printf("%d\n", arr[k]);
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int t1, t2, t3, v1, v2, v3;
//	while (scanf("%d %d %d %d %d %d", &t1, &t2, &t3, &v1, &v2, &v3)!=EOF)
//	{
//		int i, j, k;
//		int g1[100] = { 0 };
//		int g2[100] = { 0 };
//		int g3[100] = { 0 };
//		for (i = 0; i < 100; i++)
//		{
//			g1[i] = t1 * v1 + i * 24 * v1;
//			g2[i] = t2 * v2 + i * 24 * v2;
//			g3[i] = t3 * v3 + i * 24 * v3;
//		}
//		for (i = 0; i < 100; i++)
//		{
//			for (j = 0; j < 100; j++)
//			{
//				for (k = 0; k < 100; k++)
//				{
//					if (g1[i] == g2[j] && g2[j] == g3[k])
//					{
//						printf("%d", g1[i]);
//						goto end;
//					}
//				}
//			}
//		}
//	end:
//		;
//
//
//
//
//	}
//
//
//
//	return 0;
//}
//


//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//void sort(int arr[], int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//
//	}
//
//}
//
//int main()
//{
//	int i, j, k=0;
//	int n;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int x = 0;
//	int ch[100] = { 0 };
//	sort(arr, n);
//	for (j = n-1; j >0; j--)
//	{
//		arr[j -1] += arr[j];
//		arr[j] = 0;
//		ch[k] = arr[j - 1];
//		sort(arr, j);
//		k++;
//	}
//	int sum = 0;
//	for (j = 0; j < 100; j++)
//		sum += ch[j];
//	printf("%d", sum);
//	return 0;
//}
//
//
//


//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int x = n;
//		int arr[100] = { 0 };
//		int ch[100] = { 0 };
//		int i, j, k=0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (is_ok(arr[i], ch))
//			{
//				ch[k] = arr[i];
//				k++;
//			}
//			else
//			{
//				x--;
//				for (j = i; j < x; j++)
//				{
//					arr[j] = arr[j + 1];
//				}
//				i--;
//			}
//			
//
//		}
//
//
//
//
//	}
//
//
//	return 0;
//}
//
//

//int main()
//{
//	int x, n;
//	int i;
//	int arr[100] = { 0 };
//	scanf("%d %d ", &x, &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int s = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			s = 1;
//			printf("%d", i);
//			
//		}
//	}
//	if (s == 0)
//		printf("Not Found");
//
//
//	return 0;
//}
//

//int main()
//{
//	int n, m;
//	int i;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[20] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		scanf("%d", &m);
//		int s = 1;
//		for (i = 0; i < n; i++)
//		{
//			if (s == 1 && arr[i] == m)
//			{
//				s = 0;
//				continue;
//			}
//			else
//			{
//				if (i < n - 1)
//					printf("%d ", arr[i]);
//				else
//					printf("%d", arr[i]);
//			}
//
//
//		}
//		printf("\n");
//
//
//
//	}
//
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//void sort(int arr[])
//{
//	int i, j;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//				swap(&arr[j], &arr[j + 1]);
//		}
//
//	}
//
//
//}
//
//int main()
//{
//	int arr[10] = {0,10,20,30,40,50,60,70,80};
//	int m,i;
//	scanf("%d", &m);
//	arr[9] = m;
//	sort(arr);
//	for (i = 0; i < 10; i++)
//	{
//		if (i < 9)
//			printf("%d ", arr[i]);
//		else
//			printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//    int n, m;
//    int i;
//    while (scanf("%d", &n) != EOF)
//    {
//        int arr[20] = { 0 };
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int max = arr[0];
//        for (i = 0; i < n; i++)
//        {
//            if (max < arr[i])
//                max = arr[i];
//        }
//        for (i = 0; i < n; i++)
//        {
//            if (max == arr[i])
//                printf("%d %d\n", max, i);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int is_leapyear(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int year, month, day;
//	scanf("%d-%d-%d", &year, &month, &day);
//	int days_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (is_leapyear(year))
//		days_month[1] = 29;
//	int i,nums = 0;
//	for (i = 0; i < month-1; i++)
//	{
//		nums += days_month[i];
//	}
//	nums += day;
//	printf("%d", nums);
//	return 0;
//}
//typedef struct
//{
//	int year;
//	int month;
//	int day;
//}Birthday;
//
//
//
//typedef struct 
//{
//	int id;
//	char name[100];
//	int age;
//	float  score;
//	Birthday birthday;
//
//}Student;
//
//void printStuInfo(Student* stu1,int len)
//{
//	int i;
//	for (i=0;i<len;i++)
//	printf("学号：%d\t姓名：%s\t年龄：%d\t%.2f\t%d-%d-%d\n", (stu1+i)->id, (stu1+i)->name, (stu1+i)->age, (stu1+i)->score, (stu1+i)->birthday.year, (stu1+i)->birthday.month, (stu1+i)->birthday.day);
//
//}
//
//int main()
//{
//	Student students[] = { { 1001,"张三",27,100,{2021,11,2} } ,{ 1002,"李四",25,99,{2000,1,3} } };
//
//	//printf("学号：%d\t姓名：%s\t年龄：%d\t%.2f\t%d-%d-%d\n", stu1.id, stu1.name, stu1.age, stu1.score, stu1.birthday.year, stu1.birthday.month, stu1.birthday.day);
//	printStuInfo(students,2);
//
//
//	return 0;
//}


//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[100] = { 0 };
//		int i, j, k;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int ch[100] = { 0 };
//		int s = 0;
//		int sw = 1;
//		for (i = 0; i < n; i++)
//		{
//			sw= 1;
//			for (j = 0; j < s; j++)
//			{
//				if (arr[i] == ch[j])
//					sw = 0;
//			}
//			if (sw == 0)
//			{
//				;
//			}
//			else
//			{
//				ch[s] = arr[i];
//				s++;
//				if (i == 0)
//					printf("%d", arr[i]);
//				else
//					printf(" %d", arr[i]);
//			}
//		}
//
//		printf("\n");
//
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int num = 0;
//		int sum = 0;
//		int arr[50] = { 0 };
//		int i, j, k;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 1; i < n + 1; i++)//一次检测数量
//		{
//			for (j = 0; j < n+1 - i; j++)//检测起始位置
//			{
//				sum = 0;
//				for (k = 0; k < i; k++,j++)
//				{
//					sum += arr[j];
//				}
//				if (sum % 11 == 0)
//					num++;
//				j -= i;
//			}
//
//		}
//		printf("%d\n", num);
//
//	}
//
//	return 0;
//}
//

//#include <stdio.h>
//
//#define N 8
//
//typedef struct
//
//{
//    char num[11];
//
//    double s[N];
//
//    double ave;
//
//}STREC;
//
//
//
//void fun(STREC* p)
//
//{
//    double sum = 0;
//    int i;
//    for (i = 0; i < 8; i++)
//    {
//        sum += *(p->s + i);
//    }
//    p->ave = sum / 8.0;
//
//   
//
//
//}
//
//
//
//int main()
//
//{
//    STREC s = { "GA005",85.5,76,69.5,85,91,72,64.5,87.5 };
//
//    int i;
//
//    scanf("%s", s.num);
//
//    for (i = 0; i < N; i++)
//
//    {
//
//        scanf("%lf", &s.s[i]);
//
//    }
//
//    fun(&s);
//
//    printf("%s:%7.3f\n", s.num, s.ave);
//
//    return 0;
//
//}
//

//#include <stdio.h>

//int main() {
//    char str[100];
//    char x;
//    printf("Enter a string: ");
//    scanf("%[^\n]%*c", str);
//    scanf("%c", &x);
//
//    printf("String: %s\n", str);
//    printf("%c", x);
//    return 0;
//}

//int main()
//{
//	char arr[100] = { 0 };
//	while (scanf("%[^\n]", arr) != EOF)
//	{
//		getchar();
//		int num[26] = { 0 };
//		int i, j, k;
//		//遍历统计
//		for (i = 0; i < 100; i++)
//		{
//			if (arr[i] >= 'a' && arr[i] <= 'z')
//			{
//				num[arr[i] - 97]++;
//			}
//			else if (arr[i] >= 'A' && arr[i] <= 'Z')
//			{
//				num[arr[i] - 65]++;
//			}
//
//
//		}
//		//循环找最大
//		int p = 0;
//		int  q = 0;
//		int maxnum[26] = { 0 };
//		int maxer[26] = { 0 };
//
//		while (1)
//		{
//			
//			int max = 0;
//			for (i = 0; i < 26; i++)
//			{
//				if (num[i] > max)
//					max = num[i];
//
//			}
//			if (max == 0)
//				break;
//			int nums = 0;
//			for (i = 0; i < 26; i++)
//			{
//				if (num[i] == max)
//				{
//					nums++;
//					maxer[p] = i;
//					p++;
//					maxnum[q] = max;
//					q++;
//					num[i] = 0;
//				}
//
//			}
//			//输出
//
//
//		}
//		i = 0;
//		while (maxnum[i] != 0)
//		{
//			printf("%c %d\n", maxer[i] + 65, maxnum[i]);
//			i++;
//
//		}
//		memset(arr, 0, sizeof(arr));
//
//
//
//
//
//
//
//	}
//
//	return 0;
//}

//void delete_space(char* s)
//{
//	while (*s != '\0')
//	{
//		*s = *(s + 1);
//		s++;
//	}
//	
//}
//
//
//
//
//int main()
//{
//	char* str = (char*)malloc(128);
//	//scanf("%[^\n]",arr);
//	//fgets(arr,sizeof(arr),stdin);
//	char ch;
//	int i = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		*(str + i++) = ch;
//
//	}
//	char* begin = str;
//	while (*str != '\0')
//	{
//		if (*str == ' ')
//		{
//			delete_space(str);
//		}
//		else
//		{
//			str++;
//		}
//
//	}
//	printf("%s\n", begin);
//	return 0;
//}

//int main()
//{
//	//int c;
//	//while ((c = getchar()) != '\n' && c != EOF);
//	//////读取一个字符，直到是\n或者是EOF停止
//	//////等价于
//	////scanf("*[^\n]");
//	//int arr[20];
//	//int x;
//	//scanf("%s%n",arr, &x);
//	//printf("%d", x);
//	//char arr[20] = {2,34,12,123,32,23};
//	//char ch[1] = { 0 };
//	//scanf("%d", &ch[1]);
//	//printf("%d", strcspn(ch, arr));
//
//
//
//	return 0;
//}

//typedef struct
//{
//	int x;
//	int y;
//
//}Star;
//
//
//int main()
//{
//	int n;
//	
//	Star stars[300] = { 0 };
//	scanf("%d", &n);
//	int i, j, k;
//	int current_star_num = 0;
//	for (i = 0; i < n; i++)
//	{
//		int x = 0, y = 0;
//		int judge = 1;
//		scanf("%d %d", &x, &y);
//		for (j = 0; j < current_star_num; j++)
//		{
//			if (stars[j].x == x && stars[j].y == y)
//			{
//				judge = 0;
//
//			}
//
//		}
//		if (judge == 1)
//		{
//			stars[current_star_num].x = x;
//			stars[current_star_num].y = y;
//			current_star_num++;
//		}
//		
//
//
//	}
//
//	printf("%d", current_star_num);
//
//
//
//
//	return 0;
//}
//
//

//typedef struct
//{
//	char name[20];
//	int math;
//	int politics;
//
//
//}Student;
//
//int main()
//{
//	int i, j, k;
//	Student students[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%s", students[i].name);
//		scanf("%d %d", &students[i].math,& students[i].politics);
//
//	}
//	int max_math = 0;
//	int target_stu = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (students[i].math > max_math)
//		{
//			max_math = students[i].math;
//			target_stu = i;
//
//		}
//
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s %d\n", students[i].name, (students[i].math + students[i].politics)/2);
//
//	}
//	printf("%s %d %d", students[target_stu].name, students[target_stu].math, students[target_stu].politics);
//
//
//
//
//
//
//	return 0;
//}





//typedef struct
//{
//	int id;
//	char name[20];
//	int year;
//	int month;
//	int math;
//	int english;
//	int C_lan;
//
//}Student;
//
//int main()
//{
//	int n, i, j, k;
//	scanf("%d", &n);
//	Student students[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %d %d %d %d %d", &students[i].id, students[i].name, &students[i].year, &students[i].month, &students[i].math, &students[i].english, &students[i].C_lan);
//
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d %s %d/%d %d %d %d %.0f\n", students[i].id, students[i].name, students[i].year, students[i].month, students[i].math, students[i].english, students[i].C_lan, (students[i].math + students[i].english + students[i].C_lan) / 3.0);
//
//	}
//	return 0;
//}
//

//#include <stdio.h>
//
//// 交换两个元素的值
//void swap(int* a, int* b) {
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//
//// 分区函数，选择最后一个元素作为基准
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];  // pivot
//    int i = (low - 1);  // Index of smaller element
//
//    for (int j = low; j <= high - 1; j++) {
//        // 如果当前元素小于或等于pivot
//        if (arr[j] <= pivot) {
//            i++;  // 递增小于pivot的元素的索引
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}
//
//// 快速排序函数
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        // 分区索引
//        int pi = partition(arr, low, high);
//
//        // 分别对分区前后的子数组进行排序
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//
//// 打印数组的函数
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//}
//
//// 主函数
//int main() {
//    int arr[] = { 10, 7, 8, 9, 1, 5 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    quickSort(arr, 0, n - 1);
//    printf("Sorted array: \n");
//    printArray(arr, n);
//    return 0;
//}
//

//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int partition(int arr[], int low, int high)
//{
//	int pivot = arr[high];
//	int i = low - 1;
//	for (int j = low; j <= high - 1; j++)
//	{
//		if (arr[j] <= pivot)
//		{
//			i++;
//			swap(&arr[i], &arr[j]);
//		}
//	}
//	swap(&arr[i + 1], &arr[high]);
//	return (i + 1);
//}
//
//void quicksort(int arr[], int low, int high)
//{
//	if (low < high)
//	{
//		int pi = partition(arr, low, high);
//		quicksort(arr, low, pi - 1);
//		quicksort(arr, pi + 1, high);
//	}
//}
//
//void print(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 2,4,1,7,3,6,5,2,53,21,43,23,21,1 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	quicksort(arr, 0, n - 1);
//	print(arr, n);
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
////
//int binarySearch(const std::vector<int>& nums, int target) {
//    int low = 0;
//    int high = nums.size() - 1;
//
//    while (low <= high) {
//        int mid = low + (high - low) / 2;  // 避免溢出
//        if (nums[mid] == target) {
//            return mid;  // 找到目标值，返回索引
//        }
//        else if (nums[mid] < target) {
//            low = mid + 1;  // 在右半边继续查找
//        }
//        else {
//            high = mid - 1;  // 在左半边继续查找
//        }
//    }
//
//    return -1;  // 没有找到目标值，返回-1
//}
//
//int main() {
//    std::vector<int> nums = { -1, 0, 3, 5, 9, 12 };
//    int target = 9;
//
//    int result = binarySearch(nums, target);
//    if (result != -1) {
//        std::cout << "Element found at index: " << result << std::endl;
//    }
//    else {
//        std::cout << "Element not found in the array." << std::endl;
//    }
//
//    return 0;
//}


//int binarySearch(int nums[], int target,int n)
//{
//	int low = 0;
//	int high = n - 1;
//	while (low <= high)
//	{
//		int mid = low + (high - low) / 2;
//		if (nums[mid] == target)
//			return mid;
//		else if (nums[mid] < target)
//			low = mid + 1;
//		else
//			high = mid - 1;
//
//	}
//	
//
//	return -1;
//}
//
//
//int main()
//{
//    int nums[] = {-1,0,3,5,9,12};
//    int target = 9;
//	int n = sizeof(nums) / sizeof(nums[0]);
//
//    int result = binarySearch(nums,target,n);
//	if (result != -1)
//	{
//		printf("%d", result);
//	}
//	else
//	{
//		printf("error");
//	}
//
//
//    return 0;
//}
//

//int main()
//{
//	//vector<int> dp0(100, 1);
//	//vector<vector<int>> dp(5, vector<int>(6, 10));
//	//vector<vector<vector<int>>> dp2(5, vector<vector<int>>(6, vector<int>(4)));
//	//vector<int> dp;
//	//dp.push_back(1);
//	//dp.push_back(2);
//	//dp.resize(5,3);
//	////dp.clear();
//	//printf("%d\n", dp.size());
//	//printf("%d\n", dp.empty());
//	//queue<int> que;
//	//que.push(1);
//	//que.push(2);
//	//printf("%d", que);
//	//stack<int> stk;
//	//stk.push(1);
//	//stk.push(2);
//	//stk.pop();
//	//printf("%d\n", stk.front());
//	//printf("%d", stk.top());
//	priority_queue<int> pque;
//	pque.push(1);
//	printf("%d", pque.top());
//	pque.push(4);
//	pque.push(2);
//	pque.push(1);
//
//
//
//	return 0;
//}
//
//

//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int i;
//	vector<int> arr(N + 10, 0);
//	for (i = 0; i < N; i++)
//	{
//
//		int x;
//		scanf("%d", &x);
//		arr.push_back(x);
//	}
//	sort(arr);
//
//
//}


//int main()
//{
//	//string s(100,'0');
//	//cout << s << endl;
//	//int a = 1;
//	//int b = 2;
//	//cout << a << ' ' << b;
//	//swap(a, b);
//	////cout << a << ' ' << b;
//	//vector<int> arr = { 1,4,2,67,34,4,7,2,7,0 };
//	//sort(arr.begin(), arr.end());
//	//////for (int i = 0; i < arr.size(); i++)
//	////	//cout << arr[i] << endl;
//	////int pos = lower_bound(arr.begin(), arr.end(), 7) - arr.begin();
//	////cout << pos;
//	////reverse(arr.begin(), arr.end());
//	////for (int i = 0; i < arr.size(); i++)
//	////{
//	////	cout << arr[i] << ' ';
//	////}
//	////for (auto ele : arr)
//	////{
//	////	cout << ele << endl;
//	////}
//	////cout << min( 2, 4, 5, 6, 0);
//	//arr.erase(unique(arr.begin(), arr.end()),arr.end());
//	////unique(arr.begin(), arr.end());	
//	//for (auto ele : arr)
//	//{
//	//	cout << ele << ' ';
//	//}
//	//cout << log2(4);
//	cout << __gcd(10, 5);
//
//	
//	return 0;
//}
//
//

//bool cmp(int x, int y)
//{
//	return x > y;
//
//}
//
//int main()
//{
//	//vector<int> arr{ 1,3,5,6,32,54,236,54 };
//	//sort(arr.begin(), arr.end());
//	//sort
//	int arr[20] = { 2,53,23,52,353,12,75 };
//	sort(arr, arr + 4,cmp);
//
//	for (auto ele : arr)
//	{
//		cout << ele << ' ';
//	}
//
//
//
//	return 0;
//}
//int num3(int* arr)
//{
//	return *(arr + 3);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//reverse(arr, arr + 2);
//	int x = num3(arr);
//	return 0;
//}


//汉诺塔步数问题

//int hanoi(int n)
//{
//	int step = 0;
//	if (n == 1)
//		return 1;
//	else
//		return 1 + 2*hanoi(n - 1);
//
//
//}
//
//int main()
//{
//	int n, s;
//	int i, j, k;
//	cin >> n;
//	s = hanoi(n);
//	printf("%d", s);
//
//	return 0;
//}
//

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int x = pow(2, n)-1;
//	printf("%d",(int) (pow(2, n) - 1));
//	return 0;
//}


//int main()
//{
//
//
//	return 0;
//}
//int step_hanoi(int x)
//{
//	return (int)(pow(2, x) - 1);
//}
//
//void hanoi(int n, int m)
//{
//	if ()
//
//
//
//	while (n--)
//	{
//		if (step_hanoi(n) < m)
//		{
//			hanoi()
//
//
//
//			break;
//		}
//		else
//			continue;
//	}
//
//
//}
//
//
//int main()
//{
//	int n, m;
//	while (scanf("%d %d", & n, &m) != EOF)
//	{
//		int max_step = step_hanoi(n);
//		if (m > max_step)
//		{
//			printf("none\n");
//			continue;
//		}
//		else
//		{
//
//
//
//		}
//
//
//
//
//
//	}
//
//	return 0;
//}
//
//

//int jump_step(int x)
//{
//	if (x == 1)
//		return 1;
//	else if (x == 2)
//		return 2;
//	else
//		return (jump_step(x - 1) + jump_step(x - 2));
//
//
//
//
//}
//
//
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int t = jump_step(n);
//
//	printf("%d", t);
//	return 0;
//}
//

//int C_what(int k, int n)
//{
//	if (k == 0 || k == n)
//		return 1;
//	else
//	{
//		return(C_what(k, n - 1)+C_what(k - 1, n - 1));
//
//
//
//	}
//
//
//
//
//}
//int main()
//{
//	int k, n;
//	scanf("%d %d", &k, &n);
//	int t = C_what(k, n);
//	printf("%d", t);
//
//
//	return 0;
//}
//

//int feb(int n, int* num)
//{
//	*num = *num + 1;
//	if (n == 1)
//		return 1;
//	else if (n == 0)
//		return 0;
//	else
//		return feb(n - 1,num) + feb(n - 2,num);
//
//	
//}
//
//
//
//int main()
//{
//	int n;
//	int num = 0;
//	scanf("%d", &n);
//	int t = feb(n, &num);
//	printf("%d %d", t, num);
//	return 0;
//}
//



//int main()
//{
//	char arr[64];
//	fill(arr, arr + sizeof(arr), 'a');
//	for (int i=0;i<64;i++)
//	{
//		scanf("%c", &arr[i]);
//
//	}
//	int i = 0;
//	int counts = 0;
//	while (arr[i++] != 'a')
//	{
//		counts++;
//
//	}
//	reverse(arr, arr + counts);
//	i = 0;
//	while (counts--)
//	{
//		printf("%c", arr[i++]);
//	}
//
//
//	
//	return 0;
//}
//

//int main()
//{
//	string s;
//	cin >> s;
//	reverse(s.begin(),s.end());
//	cout << s;
//
//
//	return 0;
//}
//
//int main()
//{
//	char s[20];
//	cin >> s;
//	reverse(s,s+20);
//	cout << s;
//
//
//	return 0;
//}




//void hanoi(int n, char from, char to, char aux)
//{
//	if (n == 1)
//		printf("%c----%c\n", from, to);
//	else
//	{
//		hanoi(n - 1, from, aux, to);
//		printf("%c----%c\n", from, to);
//		hanoi(n - 1, aux, to, from);
//	}
//
//
//}
//
//
//
//int main()
//{
//	int n;
//	int k = 1;
//	while (scanf("%d", &n) != EOF)
//	{
//		//空行实现
//		if (k != 1)
//			printf("\n");
//
//
//		hanoi(n, 'A', 'C', 'B');
//		printf("\n");
//
//
//	}
//
//
//
//
//	return 0;
//}
//
//
//




//int main()
//{
//	int k = 1;
//	string s1, s2, a1,a2,a3,a4;
//	while (cin>>s1>>s2)
//	{
//		if (k != 1)
//		{
//			cout << endl;
//		}
//		k = 0;
//		for (int i = 0; i < s1.size(); i++)
//		{
//			if (s2.find(s1[i]) != string::npos&&a2.find(s1[i])==string::npos)
//			{
//				a2 += s1[i];
//			}
//			if (a1.find(s1[i]) == string::npos)
//			{
//				a1 += s1[i];
//			}
//
//		}
//		for (int i = 0; i < s2.size(); i++)
//		{
//			if (a1.find(s2[i]) == string::npos)
//			{
//				a1 += s2[i];
//			}
//
//		}
//		sort(a1.begin(), a1.end());
//		sort(a2.begin(), a2.end());
//		string abc = "abcdefghijklmnopqrstuvwxyz";
//		cout << "in s1 or s2:" << a1 << endl;
//		cout << "int s1 and s2:" << a2 << endl;
//		cout << "in s1 but not in s2 ,or in s2 but not in s1:";
//
//		vector<char> difference1;
//		// 使用 set_difference 算法计算两个字符串的差异(一定要顺序)
//		set_difference(a1.begin(),a1.end(),
//			a2.begin(), a2.end(),
//			back_inserter(difference1));
//		// 输出差异的元素
//		for (char ch : difference1) {
//			cout << ch ;
//		}
//		cout <<endl;
//		cout << "not in s1 and s2:";
//		vector<char> difference2;
//		// 使用 set_difference 算法计算两个字符串的差异(一定要顺序)
//		set_difference(abc.begin(), abc.end(),
//			a1.begin(), a1.end(),
//			back_inserter(difference2));
//		// 输出差异的元素
//		for (char ch : difference2) {
//			cout << ch;
//		}
//		cout << endl;
//
//		s1.clear();
//		s2.clear();
//		a1.clear();
//		a2.clear();
//		a3.clear();
//		a4.clear();
//
//
//
//
//
//
//	}
//
//
//
//
//
//
//
//
//	return 0;
//}
//

//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s1.size() != s2.size())
//	{
//		printf("1");
//	}
//	else
//	{
//		if (s1 == s2)
//			printf("2");
//		else
//		{
//			for (int i = 0; i < s1.size();i++)
//			{
//				s1[i] = tolower(s1[i]);
//				s2[i] = tolower(s2[i]);
//			}
//			if (s1 == s2)
//				printf("3");
//			else
//				printf("4");
//
//
//
//		}
//
//
//	}
//
//
//	return 0;
//}
//
//
//
//int main()
//{
//	string data;
//	while (cin >> data)
//	{
//		int sum = 0;
//		int left = 0, right = 0;
//		int distance;
//		for (int i = 0; i < data.size();i++)
//		{
//			if (data[i] == '+')
//			{
//				right = i;
//				distance = right - left;
//				int aux = stoi(data.substr(left, distance));
//				sum += aux;
//				left = i + 1;
//
//			}
//			if (i==data.size()-1)
//			{
//				distance = data.size() - left;
//				int aux = stoi(data.substr(left, distance));
//				sum += aux;
//
//			}
//		}
//
//		printf("%d\n", sum);
//		data.clear();
//
//
//
//
//	}
//
//
//
//	return 0;
//}
//
//


//int main()
//{
//	string ori;
//	while (cin>>ori)
//	{
//		vector<string> str;
//		str.push_back(ori);
//		while (ori.size()!=1)
//		{
//			str.push_back(ori.erase(0,1));
//
//		}
//		sort(str.begin(), str.end());
//		for (int i = 0; i < str.size(); i++)
//		{
//			cout << str[i];
//			cout << endl;
//
//		}
//
//	}
//
//
//
//	return 0;
//}

	//typedef struct
	//{
	//	char name[20];
	//	int t_grade;
	//	int c_grade;
	//	char stu;
	//	char west;
	//	int paper;
	//	int sumer;
	//}Student;



	//int main()
	//{
	//	int n;
	//	int k = 1;
	//	while (scanf("%d",&n)!=EOF)
	//	{
	//		if (k != 1)
	//			printf("\n");
	//		k = 0;

	//		Student students[1000] = { 0 };

	//		for (int i=0;i<n;i++)
	//		{
	//			scanf("%s %d %d %c %c %d"
	//			   ,&students[i].name,&students[i].t_grade,&students[i].c_grade,&students[i].stu,&students[i].west,&students[i].paper);


	//		}

	//		for (int i = 0; i < n; i++)
	//		{
	//			if (students[i].t_grade > 80 && students[i].paper > 0)
	//				students[i].sumer += 8000;
	//			if (students[i].t_grade > 85 && students[i].c_grade > 80)
	//				students[i].sumer += 4000;
	//			if (students[i].t_grade > 90 )
	//				students[i].sumer += 2000;
	//			if (students[i].t_grade > 85 && students[i].west =='Y')
	//				students[i].sumer += 1000;	
	//			if (students[i].c_grade > 80 && students[i].stu =='Y')
	//				students[i].sumer += 850;


	//		}
	//		int max_money = students[0].sumer;
	//		int bester = 0;
	//		int sums = 0;
	//		for (int i = 0; i < n; i++)
	//		{
	//			if (students[i].sumer > max_money)
	//			{
	//				max_money = students[i].sumer;
	//				bester = i;

	//			}
	//			sums += students[i].sumer;


	//		}
	//		printf("%s\n%d\n%d\n", students[bester].name, students[bester].sumer, sums);




	//	}

	//	return 0;
	//}


//int main()
//{
//	int n, x;
//	map<int, char > a;
//	a[0] = '0';
//	a[1] = '1';
//	a[2] = '2';
//	a[3] = '3';
//	a[4] = '4';
//	a[5] = '5';
//	a[6] = '6';
//	a[7] = '7';
//	a[8] = '8';
//	a[9] = '9';
//	a[10] = 'A';
//	a[11] = 'B';
//	a[12] = 'C';
//	a[13] = 'D';
//	a[14] = 'E';
//	a[15] = 'F';
//	a[16] = 'G';
//	a[17] = 'H';
//	a[18] = 'I';
//	a[19] = 'J';
//	while (cin >> n >> x)
//	{
//		vector<int> data;
//		while (n != 0)
//		{
//			data.push_back(n % x);
//			n /= x;
//
//		}
//		for (int i = data.size()-1; i > -1; i--)
//		{
//			cout << a[data[i]];
//
//		}
//
//		cout << endl;
//
//	}
//
//
//
//
//
//	return 0;
//}
//
//
//


//int main()
//{
//	int n;
//	while (scanf("%d",&n)!=EOF)
//	{
//		long double x, y;
//		cin >> x >> y;
//		if (x == y)
//			printf("YES\n");
//		else
//			printf("NO");
//
//
//
//	}
//	return 0;
//}
//

//int lefts(string x)
//{
//	return x.find_first_not_of('0');
//
//}
//
//int rights(string x)
//{
//	if (x.find('.') == string::npos)
//		return x.size() - 1;
//	else
//	{
//		if (x.substr(x.find('.') + 1).find_first_not_of('0') == string::npos)
//			return x.find('.')-1;
//		else
//		{
//			int i = 0;
//			while (x[x.size() - 1-i] == '0')
//			{
//				i++;
//			}
//			return x.size()-i-1;
//		}
//			//return (x.substr(x.find('.') + 1)).find_first_not_of('0')+x.substr(0,x.find('.')+1).size();
//
//	}
//
//}
//
//int main()
//{
//	string s1, s2;
//	int n;
//	scanf("%d", &n);
//	for (int i=0;i<n;i++)
//	{
//		
//		cin >> s1 >> s2;
//		int l1, l2, r1, r2,t1,t2;
//		l1 = lefts(s1);
//		l2 = lefts(s2);
//		r1 = rights(s1);
//		r2 = rights(s2);
//		//r1 = t1 - l1;
//		//r2 = t2 - l2;
//		if (s1.substr(l1, r1 - l1 + 1) == s2.substr(l2, r2 - l2 + 1))
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//		s1.clear();
//		s2.clear();
//
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	string s;
//	cin >> s;
//	int a[5];
//	 a[0] = s.find('a')+1;
//	 a[1] = s.find('e')+1;
//	a[2] = s.find('i')+1;
//	a[3] = s.find('o')+1;
//	a[4] = s.find('u')+1;
//	int min = 9999999999;
//	for (int i = 0; i < 5; i++)
//	{
//		if (a[i] < min && a[i] != 0)
//		{
//			min = a[i];
//		}
//	}
//	printf("%d", min);
//
//	return 0;
//}
//

//
//#include <iostream>
//#include <sstream>
//#include <string>
//
//int main() {
//	std::string input = "Hello 123 3.14 World";
//	std::istringstream iss(input);
//
//	std::string word;
//	int number;
//	double decimal;
//
//	// 从字符串中提取数据
//	iss >> word >> number >> decimal;
//
//	// 输出提取的数据
//	std::cout << "Word: " << word << std::endl;
//	std::cout << "Number: " << number << std::endl;
//	std::cout << "Decimal: " << decimal << std::endl;
//
//	return 0;
//}
//
//

//int my_pow(int x, int y)
//{
//	if (y == 0)
//		return 1;
//	else
//		return x * my_pow(x, y - 1);
//
//
//}
//
//int main()
//{
//	map<char, int> a;
//	a['0'] = 0;
//	a['1'] = 1;
//	a['2'] = 2;
//	a['3'] = 3;
//	a['4'] = 4;
//	a['5'] = 5;
//	a['6'] = 6;
//	a['7'] = 7;
//	a['8'] = 8;
//	a['9'] = 9;
//	a['A'] = 10;
//	a['B'] = 11;
//	a['C'] = 12;
//	a['D'] = 13;
//	a['E'] = 14;
//	a['F'] = 15;
//	a['G'] = 16;
//	a['H'] = 17;
//	a['I'] = 18;
//	a['J'] = 19;
//
//	//映射
//
//	string s;
//	int jinzhi;
//
//
//	while (cin >> jinzhi >> s)
//	{
//		int sum = 0;
//		int p = 0;
//		int i=s.size()-1;
//		while (1+i)
//		{
//			sum += a[s[i]] * my_pow(jinzhi, p++);
//			i--;
//		}
//		printf("%d\n", sum);
//
//		s.clear();
//
//	}
//
//
//
//
//
//
//
//	return 0;
//}
//

//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int ke = 1;
//		vector<double> arr;
//		for (int i = 0; i < s.size(); i++)
//		{
//			
//			if (s[i] >= '1' && s[i] <= '9')
//			{
//				arr.push_back(s[i]);
//				ke = 0;
//
//			}
//		}
//		if (ke == 1)
//			cout << 0;
//		else
//		{
//			double sum = 0;
//			for (int i = 0; i < arr.size(); i++)
//			{
//				sum += 1.0 / (arr[i]-48);
//
//			}
//			for (int i = 0; i < arr.size(); i++)
//			{
//				if (i != 0)
//					cout << '+';
//				cout << "1/" << (arr[i]-48);
//
//			}
//			cout << '=';
//			printf("%.2f", sum);
//
//
//		}
//		cout << endl;
//		s.clear();
//
//
//
//	}
//
//
//
//
//	return 0;
//}
//

//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string s="11";
//		for (int i = 2; i < n + 1; i++)
//		{
//			for (int j = 0; j < s.size() - 1; j++)
//			{
//				if (s[j] + s[j + 1] == i+48*2)
//				{
//					s.insert(j+1,to_string(i));
//				}
//
//
//			}
//
//		}
//		cout << s << endl;
//
//
//
//
//	}
//
//
//
//	return 0;
//}
//
//
//int main()
//{
//	long long a,b;
//	cin >> a>> b;
//	cout << a + b;
//
//	return 0;
//}
//

//int main()
//{
//	int i;
//	if (i = 1)
//		cout << 'a';
//
//	return 0;
//}
//
//
//int main()
//{
//	int r;
//	int x = 0;
//	while (cin>>r)
//	{
//		if (x == 1)
//			cout << endl;
//		int arr[15][15] = { 0 };
//		for (int i = 0; i < r; i++)
//		{
//			for (int j = 0; j < r; j++) {
//				cin >> arr[i][j];
//			}
//		}
//		for (int i = 0; i < r; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				if (i == j)
//				{
//					continue;
//				}
//				else
//				{
//					swap(arr[i][j], arr[j][i]);
//				}
//
//			}
//		}
//		//int p = 0;
//		for (int i = 0; i < r; i++)
//		{
//			/*if (p == 1)
//				cout << endl;*/
//			int k = 0;
//			for (int j = 0; j < r; j++)
//			{
//				if (k == 0)
//					k = 1;
//				else
//					cout << ' ';
//				cout << arr[i][j];
//
//			}
//			cout << endl;
//
//			//p = 1;
//		}
//		memset(arr, 0, sizeof(arr));
//		x = 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	int p = 0;
//	int k = 1;
//	char arr1[110][110] = { 0 };
//	int n, m;
//	while (cin >> n >> m)
//	{
//		if (p == 1)
//			cout << endl;
//		if (n == 0 && m == 0)
//			break;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				cin >> arr1[i][j];
//
//			}
//		}
//		map<char, int> a;
//		a['*'] = 1;
//		a['.'] = 0;
//		int arr2[110][110] = { 0 };
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				arr2[i][j] = a[arr1[i][j]];
//			}
//		}
//		char arr3[110][110] = { 0 };
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				if (arr2[i][j] == 1)
//					arr3[i][j] = '*';
//				else
//					arr3[i][j] = arr2[i - 1][j - 1] + arr2[i - 1][j] + arr2[i - 1][j + 1] + arr2[i][j - 1] + arr2[i][j + 1] + arr2[i + 1][j - 1] + arr2[i + 1][j] + arr2[i + 1][j + 1] + 48;
//			}
//		}
//		cout << "Field #" << k << ':'<<endl;
//		//int p = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			//if (p == 1)
//			//	cout << endl;
//			for (int j = 1; j <= m; j++)
//			{
//				cout << arr3[i][j];
//			}
//			//p = 1;
//			cout << endl;
//		}
//
//		p = 1;
//
//		k++;
//
//
//	}
//
//
//
//
//
//
//
//	return 0;
//}
//
//

//
//
//int main()
//{
//	vector<string> arr;
//	string s = "000000";
//	for (int a = 1; a < 7; a++)
//	{
//		s[0] = a + 48;
//		for (int b = 1; b < 7; b++)
//		{
//			if (s.substr(0,1).find(b + 48) != string::npos)
//				continue;
//			s[1] = b + 48;
//			for (int c = 1; c < 7; c++)
//			{
//				if (s.substr(0,2).find(c + 48) != string::npos)
//					continue;
//				s[2] = c + 48;
//				for (int d = 1; d < 7; d++)
//				{
//					if (s.substr(0,3).find(d + 48) != string::npos)
//						continue;
//					s[3] = d + 48;
//					for (int e = 1; e < 7; e++)
//					{
//						if (s.substr(0,4).find(e + 48) != string::npos)
//							continue;
//						s[4] =e + 48;
//						for (int f = 1;f < 7; f++)
//						{
//							if (s.substr(0,5).find(f + 48) != string::npos)
//								continue;
//							s[5] = f + 48;
//							int tr = 0;
//							if (s[0] < s[1] && s[1] < s[2] && s[3] < s[4] && s[4] < s[5] && s[0] < s[3] && s[1] < s[4] && s[2] < s[5])
//							{
//								for (int y = 0; y < arr.size(); y++)
//								{
//									if (s == arr[y])
//									{
//										tr = 1;
//										break;
//									}
//
//								}
//								if (tr == 0)
//								{
//									arr.push_back(s);
//
//								}
//								else
//								{
//									continue;
//								}
//
//							}
//							//s.clear();
//
//
//						}
//
//
//					}
//
//
//				}
//
//
//			}
//
//
//		}
//
//
//	}
//	int target;
//	while (cin>>target)
//	{
//		int q = target - 1;
//		int u = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			if (u == 1)
//				cout << ' ';
//			cout << arr[q][i];
//
//			u = 1;
//		}
//		cout << endl;
//		u = 0;
//		for (int i = 3; i < 6; i++)
//		{
//			if (u == 1)
//				cout << ' ';
//			cout << arr[q][i];
//			u = 1;
//		}
//		cout << endl;
//	}
//
//	return  0;
//}






//
//
//#include <iostream>
//using namespace std;
//
//void generatePermutations(int digits[], int index) {
//	if (index == 6) {
//		// 输出当前生成的六位数
//		for (int i = 0; i < 6; i++) {
//			cout << digits[i];
//		}
//		cout << endl;
//		return;
//	}
//
//	for (int i = 0; i <= 9; i++) {
//		bool isUsed = false;
//		// 检查数字是否已经被使用过
//		for (int j = 0; j < index; j++) {
//			if (digits[j] == i) {
//				isUsed = true;
//				break;
//			}
//		}
//		if (!isUsed) {
//			digits[index] = i;
//			generatePermutations(digits, index + 1);
//		}
//	}
//}
//
//int main() {
//	int digits[6];
//	generatePermutations(digits, 0);
//	return 0;
//}
//

//int main()
//{
//	int n;
//	cin >> n;
//	int ns = 1;
//	int arr[25][25] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = ns++;
//		}
//
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if ((i & 1) == 1)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				printf("%4d", arr[i - 1][j]);
//			}
//
//
//		}
//		else
//		{
//			for (int j = n - 1; j > -1; j--)
//			{
//				printf("%4d", arr[i - 1][j]);
//			}
//
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//}
//
//
//

//int main()
//{
//	int arr[110][110] = { 0 };
//	int row, col;
//	cin >> row >> col;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 1; i < row + col; i++)
//	{
//		for (int j=0;j<i;j++)
//		{
//			if (arr[j][i-1-j]!=0)
//			cout << arr[j][i - 1 - j] << ' ';
//
//
//		}
//	}
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int n;
//	int is_fir = 0;
//	while (cin>>n)
//	{
//		
//		if (is_fir == 1)
//			cout << endl;
//		int yess = 0;
//
//		int x;
//
//		for (int i = 1; i <= 11; i += 2)
//		{
//			if (i * i >= n)
//			{
//				x = i;
//				break;
//			}
//		}
//		int arr[11][11] = { 0 };
//		int t = 1;
//		while (t < n)
//		{
//			arr[6][6] = t;
//			int p = 6, q = 6;
//			for (int i = 2; i < (x - 1) / 2 + 2; i++)
//			{
//				p += 1;
//				q -= 1;
//				for (int j = 0; j < 2 * i - 2; j++)
//				{
//					q++;
//					t++;
//					arr[p][q] = t;
//					if (t == n)
//						goto ender;
//
//				}
//				for (int j = 0; j < 2 * i - 2; j++)
//				{
//					p--;
//					t++;
//					arr[p][q] = t;
//					if (t == n)
//						goto ender;
//
//				}
//				for (int j = 0; j < 2 * i - 2; j++)
//				{
//					q--;
//					t++;
//					arr[p][q] = t;
//					if (t == n)
//						goto ender;
//
//				}
//				for (int j = 0; j < 2 * i - 2; j++)
//				{
//					p++;
//					if (i == (x - 1) / 2 + 1)
//					yess = 1;
//					t++;
//					arr[p][q] = t;
//					if (t == n)
//						goto ender;
//
//				}
//
//
//			}
//		ender:
//			;
//		}
//		if (n < (x - 2) * (x - 2) + 2*x-2&&n>=12)
//		{
//			for (int i = 8 - (x + 1) / 2; i < 7 + (x - 1) / 2; i++)
//			{
//				int soi = 0;
//
//				for (int j = 7 - (x + 1) / 2; j < 7 + (x - 1) / 2; j++)
//				{
//					if (arr[i][j] != 0&&1<=arr[i][j]&&99>=arr[i][j])
//					{
//						if (j == 6 + (x - 1) / 2)
//							printf("%2d", arr[i][j]);
//						else
//							printf("%2d ", arr[i][j]);
//
//						soi = 1;
//					}
//					else if (yess == 1 && arr[i][j] == 0)
//						cout << "   ";
//					else
//					{
//						if (j == 7 - (x + 1) / 2)
//							;
//						else
//							cout << "   ";
//					}
//				}
//				if (soi == 1)
//					cout << endl;
//			}
//
//		}
//
//
//		else if (n < (x - 2) * (x - 2) + 2*x-2&& n <=9&&n!=10&&n!=11)
//		{
//			for (int i = 8 - (x + 1) / 2; i < 7 + (x - 1) / 2; i++)
//			{
//				int soi = 0;
//
//				for (int j = 7 - (x + 1) / 2; j < 7 + (x - 1) / 2; j++)
//				{
//					if (arr[i][j] != 0)
//					{
//						if (j == 6 + (x - 1) / 2)
//							printf("%d", arr[i][j]);
//						else
//							printf("%d ", arr[i][j]);
//
//						soi = 1;
//					}
//					else if (yess == 1 && arr[i][j] == 0)
//						cout << "  ";
//					else
//					{
//						if (j == 7 - (x + 1) / 2)
//							;
//						else
//							cout << "  ";
//					}
//				}
//				if (soi == 1)
//					cout << endl;
//			}
//		}
//
//
//
//
//
//		else if (n>=12)
//		{
//			for (int i = 7 - (x + 1) / 2; i < 7 + (x - 1) / 2; i++)
//			{
//				int soi = 0;
//
//				for (int j = 7 - (x + 1) / 2; j < 7 + (x - 1) / 2; j++)
//				{
//					if (arr[i][j] != 0)
//					{
//						if (j==6+(x-1)/2)
//						printf("%2d", arr[i][j]);
//						else
//							printf("%2d ", arr[i][j]);
//
//						soi = 1;
//					}
//					else if (yess == 1 && arr[i][j] == 0)
//						cout << "   ";
//					else
//					{
//						if (j == 7 - (x + 1) / 2)
//							;
//						else
//							cout << "   ";
//					}
//				}
//				if (soi==1)
//				cout << endl;
//			}
//
//		}
//		else if(n<=9)
//		{
//			for (int i = 7 - (x + 1) / 2; i < 7 + (x - 1) / 2; i++)
//			{
//				int soi = 0;
//
//				for (int j = 7 - (x + 1) / 2; j < 7 + (x - 1) / 2; j++)
//				{
//					if (arr[i][j] != 0)
//					{
//						if (j == 6 + (x - 1) / 2)
//							printf("%d", arr[i][j]);
//						else
//							printf("%d ", arr[i][j]);
//
//						soi = 1;
//					}
//					else if (yess == 1 && arr[i][j] == 0)
//						cout << "  ";
//					else
//					{
//						if (j == 7 - (x + 1) / 2)
//							;
//						else
//							cout << "  ";
//					}
//				}
//				if (soi==1)
//				cout << endl;
//			}
//
//		}
//		else if (n == 10)
//		{
//			{
//				for (int i = 8 - (x + 1) / 2; i < 7 + (x - 1) / 2; i++)
//				{
//					int soi = 0;
//
//					for (int j = 7 - (x + 1) / 2; j < 7 + (x - 1) / 2; j++)
//					{
//						if (arr[i][j] != 0)
//						{
//							if (j == 5)
//								printf("%2d ", arr[i][j]);
//							else
//							{
//								if (j == 6 + (x - 1) / 2)
//									printf("%d", arr[i][j]);
//								else
//									printf("%d ", arr[i][j]);
//
//							}
//							soi = 1;
//						}
//						else if (yess == 1 && arr[i][j] == 0)
//						{
//							if (j == 5)
//								cout << "   ";
//							else
//							cout << "  ";
//						}
//						else
//						{
//							if (j == 7 - (x + 1) / 2)
//								;
//							else
//							{
//								if (j == 5)
//									cout << "   ";
//								else
//									cout << "  ";
//							}
//						}
//					}
//					if (soi==1)
//					cout << endl;
//				}
//
//			}
//
//		}
//		else if (n == 11)
//		{
//			{
//				for (int i = 8 - (x + 1) / 2; i < 7 + (x - 1) / 2; i++)
//				{
//					int soi = 0;
//					for (int j = 7 - (x + 1) / 2; j < 7 + (x - 1) / 2; j++)
//					{
//						if (arr[i][j] != 0)
//						{
//							if (j == 5||j==6)
//								printf("%2d ", arr[i][j]);
//							else
//							{
//								if (j == 6 + (x - 1) / 2)
//									printf("%d", arr[i][j]);
//								else
//									printf("%d ", arr[i][j]);
//
//							}
//							soi = 1;
//						}
//						else if (yess == 1 && arr[i][j] == 0)
//						{
//							if (j == 5||j==6)
//								cout << "   ";
//							else
//								cout << "  ";
//						}
//						else
//						{
//							if (j == 7 - (x + 1) / 2)
//								;
//							else
//							{
//								if (j == 5||j==6)
//									cout << "   ";
//								else
//									cout << "  ";
//							}
//						}
//					}
//					if (soi==1)
//					cout << endl;
//				}
//
//			}
//
//		}
//
//		is_fir = 1;
//
//
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int n;
//
//	while (scanf("%d", &n) != EOF) {
//		int size = n % 2 == 0 ? n + 1 : n;  // 阵列的大小
//		int** matrix = (int**)malloc(size * sizeof(int*));
//		for (int i = 0; i < size; i++) {
//			matrix[i] = (int*)malloc(size * sizeof(int));
//		}
//
//		int num = 1;  // 当前需要填入的数字
//		int row = 0;
//		int col = 0;
//
//		while (row < size / 2) {
//			// 从左到右填入数字
//			for (int i = col; i < size - col; i++) {
//				matrix[row][i] = num;
//				num++;
//			}
//			// 从上到下填入数字
//			for (int i = row + 1; i < size - row; i++) {
//				matrix[i][size - 1 - col] = num;
//				num++;
//			}
//			// 从右到左填入数字
//			for (int i = size - 2 - col; i >= col; i--) {
//				matrix[size - 1 - row][i] = num;
//				num++;
//			}
//			// 从下到上填入数字
//			for (int i = size - 2 - row; i > row; i--) {
//				matrix[i][col] = num;
//				num++;
//			}
//
//			row++;
//			col++;
//		}
//
//		// 输出阵列
//		for (int i = 0; i < size; i++) {
//			for (int j = 0; j < size; j++) {
//				printf("%2d ", matrix[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//
//		// 释放内存
//		for (int i = 0; i < size; i++) {
//			free(matrix[i]);
//		}
//		free(matrix);
//	}
//
//	return 0;
//}

//int main()
//{
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}
//
//
//
//
//
//




//int main()
//{
//	int a, b,c;
//	char x;
//	int nums = 0;
//	while (scanf("%d%c%d%*c%d", &a, &x, &b,&c) != EOF)
//	{
//		getchar();
//
//		 if (x == '+')
//		{
//			if (c == a + b)
//				nums++;
//		}
//		else if (x == '-')
//		{
//			if (c == a - b)
//				nums++;
//		}
//
//	}
//
//
//	cout << nums;
//
//
//
//
//
//
//	return 0;
//}
//
//

//int main()
//{
//	string s;
//	char oper, ops1,ops2;
//	getline(cin, s, '.');
//	s += '.';
//	getchar();
//	scanf("%c %c", &oper, &ops1);
//	if (oper != 'D') {
//		scanf("%*c%c", &ops2);
//	}
//	if (oper == 'D') {
//		if (s.find(ops1) != string::npos)
//		{
//			s.erase(s.find(ops1), 1);
//			cout << s;
//		}
//		else
//			cout << "指定字符不存在";
//	}
//	else if (oper == 'I') {
//		if (s.find(ops1) != string::npos)
//		{
//			s.insert(s.rfind(ops1), 1, ops2);
//			cout << s;
//		}
//		else
//			cout << "指定字符不存在";
//	}
//	else if (oper == 'R') {
//		if (s.find(ops1) != string::npos) {
//			while (s.find(ops1) != string::npos) {
//				string str(1, ops2);
//				s.replace(s.find(ops1), 1,str);
//			}
//			cout << s;
//
//		}
//		else
//			cout << "指定字符不存在";
//	}
//	
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int nums = 0;
//	vector<string> data;
//	string sumer;
//	getline(cin, sumer, '\n');
//	istringstream iss(sumer);
//	string s;
//	while (iss >> s) {
//		int k = 0;
//		for (int i = 0; i < data.size(); i++) {
//			if (data[i] == s) {
//				k = 1;
//				break;
//			}
//		}
//		if (k == 0) {
//			data.push_back(s);
//			nums++;
//		}
//	}
//	cout << nums;
//
//
//
//
//
//	return 0;
//}
//

//int main()
//{
//	int T;
//	int is_fir = 0;
//	int times = 0;
//	cin >> T;
//	while (T--) {
//		if (is_fir == 1)
//			cout << endl;
//		string s1, s2, s0;
//		cin >> s1 >> s2;
//		string more, less;
//			more = s1.size() >= s2.size() ? s1 : s2;
//			less = s1.size() < s2.size() ? s1 : s2;
//			int yi = 1;
//
//		int ti = 0;
//		int mid = 0;
//		while (yi) {
//			yi = 0;
//			if (ti<less.size())
//			{
//				s0+= (more[more.size() - 1 - ti] + less[less.size() - 1 - ti] + mid-48*2) % 10+48;
//				mid = (more[more.size() - 1 - ti] + less[less.size() - 1 - ti] + mid-48*2) / 10;
//				yi = 1;
//			}
//			else if (ti >= less.size() && ti < more.size())
//			{
//				s0+= (more[more.size() - 1 - ti] + mid-48) % 10+48;
//				mid = (more[more.size() - 1 - ti] + mid-48) / 10;
//				yi = 1;
//			}
//			else
//			{
//				s0+= mid+48;
//			}
//			ti++;
//		}
//		times++;
//		cout << "Case" << ' ' << times << ':' << endl;
//		cout << s1 << ' ' << '+' <<' ' << s2 << ' ' << '=' << ' ';
//		for (int i = s0.size() - 1; i > -1; i--)
//		{
//			if (i == s0.size() - 1 && s0[i] == 48)
//				continue;
//			cout << s0[i];
//		}
//		cout << endl;
//
//		is_fir = 1;
//	}
//	
//
//
//
//
//
//
//
//	return 0;
//}
//
//int is_sue(int x)
//{
//	if (x == 1)
//		return 0;
//	if (x == 2)
//		return 1;
//	for (int i = 2; i < x; i++) {
//		if (x % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int nums = 1013;
//	vector<int> chuncui;
//	while (chuncui.size() < 21) {
//		int num = nums;
//		int is_su = 1;
//		while (num != 0) {
//			if (is_sue(num))
//			{
//				string x = to_string(num);
//				x.erase(0, 1);
//				
//				if (to_string(stoi(x)).size() == 1 && (is_sue(stoi(x)))) {
//					goto next;
//				}
//				num = stoi(x);
//			}
//			else {
//				is_su = 0;
//				break;
//			}
//
//
//		}
//		next:
//		if (is_su == 1) {
//			chuncui.push_back(nums);
//		}
//		nums++;
//	}
//	int n;
//	while (cin>>n)
//	{
//		cout << chuncui[n - 1] << endl;
//	}
//	return 0;
//}
//int operation(int x)
//{
//	vector<int> nums;
//	while (x != 0) {
//		nums.push_back(x % 10);
//		x /= 10;
//	}
//	for (int i = 0; i < nums.size(); i++) {
//		x += nums[i];
//	}
//	if (to_string(x).size() == 1)
//		return x;
//	else
//		return operation(x);
//}
//int main()
//{
//	int  n;
//	cin >> n;
//	while (n--) {
//		vector<vector<int>> datas(7, vector<int>(6, 0));
//		string s;
//		cin >> s;
//		int i = 0, j = 0;
//		while (s.size() != 0) {
//			datas[i][j] = s[0];
//			s.erase(0, 1);
//			if (j == 5) {
//				i++;
//				j = 0;
//			}
//			else {
//				j++;
//			}
//		}
//		vector<int> data2(6, 0);
//		for (int i = 0; i < 6; i++) {
//			for (int j = 0; j < 7; j++) {
//				data2[i] += datas[j][i];
//			}
//		}
//		for (int i = 0; i < 6; i++) {
//			data2[i] = operation(data2[i]);
//		}
//		for (int i = 0; i < 6; i++) {
//			cout << data2[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}
//bool cmp(string a, string b)
//{
//	string x = a;
//	string y = b;
//	int x1 = stoi(a.substr(6, 8));
//	int y1 = stoi(b.substr(6, 8));
//	int x2 = stoi(a);
//	int y2 = stoi(b);
//	if (x1 != y1)
//		return x1 > y1;
//	else
//		return a>b;
//}
//int main()
//{
//	int n;
//	vector<string> datas;
//	cin >> n;
//	while (n--) {
//		string s;
//		cin >> s;
//		datas.push_back(s);
//	}
//	sort(datas.begin(), datas.end(), cmp);
//	for (int i = 0; i < datas.size(); i++) {
//		cout << datas[i] << endl;
//	}
//	return 0;
//}
//typedef struct strings {
//	string s;
//	int times=1;
//};
//int main()
//{
//	vector<strings> st;
//	int L;
//	string s;
//	cin >> L >> s;
//	for (int i = L; i <= s.size(); i++) {
//		for (int j = 0; j < s.size() - i + 1; j++) {
//			strings si;
//			si.s = s.substr(j, i);
//			int has_in = 0;
//			for (int k = 0; k < st.size(); k++) {
//				if (st[k].s == si.s) {
//					has_in = 1;
//					st[k].times++;
//					break;
//				}
//			}
//			if (has_in == 0) {
//				st.push_back(si);
//			}
//		}
//	}
//	int max = st[0].times;
//	int maxer = 0;
//	for (int i = 0; i < st.size(); i++) {
//		if (st[i].times >= max) {
//			max = st[i].times;
//			maxer = i;
//		}
//	}
//	cout << st[maxer].s;
//
//
//	return 0;
//}

//int main()
//{
//	//int decimal = 10;
//	//int n = 5;
//	////stringstream oct_stream;
//	////oct_stream << binary << decimal;
//	////string oct = oct_stream.str();
//	////cout << oct;
//	//bitset<5> binary(decimal);
//	//cout << binary;
//	int n;
//	while (cin >> n) {
//		int is_h = 0;
//		int is_bh = 0;
//
//		string x = to_string(n);
//		reverse(x.begin(), x.end());
//		if (to_string(n) == x) {
//			is_h = 1;
//		}
//		vector<int> ke;
//		while (n != 0) {
//			ke.push_back(n % 2);
//			n /= 2;
//		}
//		vector<int> ky;
//		ky = ke;
//		reverse(ke.begin(), ke.end());
//		if (ke == ky) {
//			is_bh = 1;
//		}
//		if (is_h == 1 && is_bh == 1) {
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl;
//		}
//	}
//
//	
//	return 0;
//}

//int main()
//{
//	int L, C;
//	while (cin >> L >> C) {
//		vector<string> strings;
//		getchar();
//		string s;
//		getline(cin, s, '\n');
//		while (s.find(' ') != string::npos) {
//			s.erase(s.find(' '), 1);
//		}
//		for (int i = 0; i < s.size(); i++) {
//			string st = s;
//			st.erase(i, 1);
//			int numsy = 0;
//			if (st.find('a') != string::npos) {
//				numsy++;
//			}
//			if (st.find('e') != string::npos) {
//				numsy++;
//			}
//			if (st.find('i') != string::npos) {
//				numsy++;
//			}
//			if (st.find('o') != string::npos) {
//				numsy++;
//			}
//			if (st.find('u') != string::npos) {
//				numsy++;
//			}
//			if (numsy!=0&&st.size)
//
//		}
//	}
//
//
//
//
//
//	return 0;
//}
//
//void operation(int* x) {
//	*x += 1;
//}
//int main()
//{
//	int n = 10;
//	operation(&n);
//	cout << n;
//
//	return 0;
//}
//
//

//int main()
//{
//	int N, L;
//	int NUMS = 0;
//	cin >> N >> L;
//	vector<int> datas;
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> x;
//		datas.push_back(x);
//	}
//	for (int i = 0; i < N; i++) {
//		if (datas[i] >= L)
//			NUMS++;
//	}
//	cout << NUMS;
//	return 0;
//}
//

//int main()
//{
//	int N, L, R;
//	cin >> N >> L >> R;
//	vector<int> datas;
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> x;
//		datas.push_back(x);
//	}
//	for (int i = 0; i < N; i++) {
//		if (datas[i] <= L)
//			datas[i] = L;
//		else if (datas[i] >= R)
//			datas[i] = R;
//		
//	}
//	int k = 0;
//	for (int i = 0; i < N; i++) {
//		if (k == 1)
//			cout << ' ';
//		cout << datas[i];
//		k = 1;
//	}
//	return 0;
//}
//     CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
//int main()
//{
//	int D;
//	int max;
//	cin >> D;
//	for (int i = 0; i <= D; i++) {
//		if (i * i >= D) {
//			max = i;
//			break;
//		}
//	}
//	int x, y;
//	int min = D;
//	for ( x = 0; x <= max; x++) {
//		for (y = 0; y <= max; y++) {
//
//			if (abs(x * x + y * y - D) < min) {
//				min = abs(x * x + y * y - D);
//			}
//			if (min == 0) {
//				goto next;
//			}
//			if (x * x + y * y > D) {
//				break;
//			}
//		}
//	}
//	next:
//	cout << min;
//	return 0;
//}

//int main()
//{
//	int N;
//	cin >> N;
//	vector<vector<char>> arr(N, vector<char>(N, '0'));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	vector<int> row;
//	vector<int> col;
//	for (int i = 0; i < N; i++) {
//		int x = -1;
//		int y = -1;
//		for (int j = 0; j < N; j++) {
//			if (arr[i][j] == 'o') {
//				x++;
//			}
//			if (arr[j][i] == 'o') {
//				y++;
//			}
//
//		}
//		row.push_back(x);
//		col.push_back(y);
//	}
//	long long sum = 0;
//	for (int i = 0; i < N; i++) {
//		if (row[i] == 0)
//			continue;
//		for (int j = 0; j < N; j++) {
//
//			if (arr[i][j]=='o')
//			sum += row[i] * col[j];
//		}
//	}
//	cout << sum;
//
//	return 0;
//}





//int main()
//{
//	int N, Q;
//	cin >> N >> Q;
//	string s;
//	getchar();
//	getline(cin, s, '\n');
//	while (s.find(' ') != string::npos) {
//		s.erase(s.find(' '), 1);
//	}
//	vector<int> a;
//	vector<int> b;
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		a.push_back(x);
//		b.push_back(y);
//	}
//	for (int i=0;i<Q;i++) {
//		string str(1, b[i] + 48);
//		s.replace(a[i] - 1, 1,str);
//		string stt;
//		stt=s;
//		sort(stt.begin(), stt.end());
//		for (int j = 0;; j++) {
//			if (stt.find(j + 48) == string::npos) {
//				cout << j << endl;
//				break;
//			}
//		}
//	}
//
//
//	return 0;
//}
//
//
//

//int main()
//{
//	int N, Q;
//	cin >> N >> Q;
//	vector<long long> s;
//	getchar();
//	//输入
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> x;
//		s.push_back(x);
//	}
//
//	//getline(cin, s, '\n');
//	//while (s.find(' ') != string::npos) {
//	//	s.erase(s.find(' '), 1);
//	//}
//	vector<int> a;
//	vector<int> b;
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		a.push_back(x);
//		b.push_back(y);
//	}
//	for (int i = 0; i < Q; i++) {
//		//替换操作
//		s[a[i] - 1] = b[i];
//		//string str(1, b[i] + 48);
//		//s.replace(a[i] - 1, 1, str);
//		vector<long long> stt;
//		stt = s;
//		sort(stt.begin(), stt.end());
//		stt.erase(unique(stt.begin(), stt.end()), stt.end());
//		//二分查找
//		// 
//		if (stt[0] != 0)
//			cout << 0 << endl;
//
//		else if (stt[stt.size()-2]==stt.size()-2&&stt[stt.size()-1]!=stt.size()-1) {
//			cout << stt.size()-1  << endl;
//		}
//		else if (stt[stt.size() - 1] == stt.size() - 1) {
//			cout << stt.size() << endl;
//		}
//		else {
//			int left = 0, right = stt.size() - 2;
//			int mid = (left+right)/2;
//			while (stt[mid] != mid || stt[mid + 1] == mid) {
//				if (stt[mid] != mid) {
//					right = mid-1;
//					mid = (left + right) / 2;
//				}
//				else {
//					left = mid+1;
//					mid = (left + right) / 2;
//				}
//			}
//			cout << mid + 1 << endl;
//		}
//		//for (int j = 0;; j++) {
//		//	//查找操作
//		//	//for (int u = 0;; u++) {
//		//	//	if (stt[u])
//
//		//	//}
//		//	//auto it = find(stt.begin(), stt.end(), j);
//		//	if (find(stt.begin(), stt.end(), j)==stt.end()) {
//		//		cout << j << endl;
//		//		break;
//		//	}
//		//}
//	}
//
//
//	return 0;
//}
//

//int main()
//{
//	string line;
//	getline(cin, line);
//	int sum = 0, x;
//	stringstream ss(line);
//	while (ss >> x) {
//
//	}
//
//
//
//
//	return 0;
//}
//
//

//int main()
//{
//	string s;
//	cin >> s;
//	string si;
//	for (int i = 0; i < s.size(); i++) {
//		if (i == 0) {
//			si.push_back(s[i]);
//		}
//		else {
//			si.push_back(' ');
//			si.push_back(s[i]);
//		}
//	}
//	for (int i = 0; i < si.size(); i++) {
//		cout << si[i];
//	}
//	return 0;
//}
//
//

//int main()
//{
//	set<int> arr;
//	int N;
//	cin >> N;
//	while (N--) {
//		int x;
//		cin >> x;
//		arr.insert(x);
//	}
//	auto it = prev(arr.end());
//	arr.erase(it);
//	cout << (*(prev(arr.end())));  
//	return 0;
//}
//

//int main()
//{
//	string s;
//	vector<pair<char,long long>> characters;
//	//cin >> s;
//	int N;
//	cin >> N >> s;
//	for (int i = 0; i < N;) {
//		char x = s[i];
//		long long target = s.substr(i).find_first_not_of(x);
//		if (target==-1)
//			target=1;
//		for (int j = 0; j < characters.size(); j++) {
//			if (characters[j].first == x) {
//				if (target > characters[j].second) {
//					characters[j].second = target;
//				}
//				goto next;
//			}
//		}
//		characters.push_back({ x,target });
//		next:
//		i = target + i;
//	}
//	long long  sum = 0;
//	for (int i = 0; i < characters.size(); i++) {
//		sum += characters[i].second;
//	}
//	cout << sum;
//
//	return 0;
//}

//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	vector<int> can(N,0);
//	int max = 1;
//	int maxer;
//	for (int i = 0; i < M; i++) {
//		int t;
//		cin >> t;
//		int n = t - 1;
//		can[n]++;
//		if (i == 0) {
//			maxer = n;
//		}
//		if (can[n] > max) {
//			max = can[n];
//			maxer = n;
//		}
//		else if (can[n] == max) {
//			maxer = n < maxer ? n : maxer;
//		}
//		cout << maxer+1 << endl;
//
//	}
//
//	return 0;
//}
//
//

//int main()
//{
//	int N, M;
//	int iso = 1;
//	string S,T;
//	cin >> N >> M >>  S >> T;
//	if (T.size() == 2)
//		goto next;
//	for (int i = 0; i < S.size() - 1; i++) {
//		char x = S[i];
//		string t;
//		string Ti = T;
//		while (Ti.find(x) != string::npos) {
//			if (Ti.find(x) == 0) {
//				t += Ti[Ti.find(x) + 1];
//			}
//			else if (Ti.find(x) == Ti.size() - 1) {
//				t += Ti[Ti.find(x) - 1];
//			}
//			else {
//				t += Ti[Ti.find(x) - 1];
//				t += Ti[Ti.find(x) + 1];
//			}
//			Ti.erase(Ti.find(x));
//		}
//		if (t.find(S[i + 1]) == string::npos) {
//			cout << "No";
//			iso = 0;
//			break;
//		}
//	}
//	next:
//	if (iso == 1) {
//		cout << "Yes";
//	}
//	return 0;
//}

//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N;
//	string S;
//	cin >> N >> S;
//	vector<char> chas;
//	vector<int> runs(N); // stores the maximum length run for each character in S
//	int current_run = 1; // current length of the run
//	vector<long long> datas;
//	int havego = 0;
//	int situ;
//	int repetition, havein = 0;
//	for (int i = 1; i < N; i++) {
//		//current_run = 1;
//		//if (current_run == 1) {
//		//	for (int j = 0; j < chas.size(); j++) {
//		//		if (chas[j] == S[i]) {
//		//			havein = 1;
//		//			repetition = j;
//		//			
//		//		}
//		//	}
//		//}
//		situ = current_run == 1 ? 1 : 0;
//			if (S[i] == S[i - 1]) {
//				if (current_run == 1) {
//					for (int j = 0; j < chas.size(); j++) {
//						if (chas[j] == S[i-1]) {
//							havein = 1;
//							repetition = j;
//							break;
//						}
//					}
//
//					if (havein == 0) {
//						chas.push_back(S[i]);
//					}
//				}
//				havego = 1;
//				current_run++;
//			}
//			//if (S[i] != S[i - 1] && havein == 1) {
//			//	continue;
//			//}
//			else {
//				if (situ==1) {
//					for (int j = 0; j < chas.size(); j++) {
//						if (chas[j] == S[i-1]) {
//							havein = 1;
//							repetition = j;
//							break;
//						}
//					}
//				}
//				if (havein == 0 && situ == 1) {
//					chas.push_back(S[i-1]);
//					datas.push_back(current_run);
//
//				}
//				else if (havein == 0) {
//					datas.push_back(current_run);
//				}
//				else {
//					datas[repetition] = datas[repetition] > current_run ? datas[repetition] : current_run;
//				}
//
//				current_run = 1; // start a new run
//				havein = 0;
//				havego = 0;
//			}
//		}
//		//runs[N - 1] = current_run; // store the length of the last run
//		if (N == 1) {
//			cout << "1";
//		}
//		else {
//			int count = 0;
//			//for (int i = 0; i < N; i++) {
//			//	count ++; // sum up the distinct substrings for each character
//			//}
//			for (int i = 0; i < datas.size(); i++) {
//				count += datas[i];
//			}
//			cout << count;
//		}
//		return 0;
//	}
//

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 判断编码是否有效的函数
//bool isValidCode(string code) {
//	int vowels = 0;
//	int consonants = 0;
//
//	// 统计编码中的元音和辅音数量
//	for (char c : code) {
//		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//			vowels++;
//		}
//		else {
//			consonants++;
//		}
//	}
//
//	// 检查编码是否满足条件
//	return vowels >= 1 && consonants >= 2 && code == string(code.rbegin(), code.rend());
//}
//
//// 生成所有有效编码的函数
//void generateCodes(int L, vector<char>& letters, string code, int pos) {
//	if (pos == L) {
//		// 打印有效编码
//		if (isValidCode(code)) {
//			cout << code << endl;
//		}
//		return;
//	}
//
//	for (int i = 0; i < letters.size(); i++) {
//		// 选择当前位置的字母
//		code[pos] = letters[i];
//		// 递归生成下一个位置的字母
//		generateCodes(L, letters, code, pos + 1);
//	}
//}
//
//int main() {
//	int L, C;
//	while (cin >> L >> C) {
//		// 读取可用的字母
//		vector<char> letters(C);
//		for (int i = 0; i < C; i++) {
//			cin >> letters[i];
//		}
//
//		// 对字母进行排序
//		sort(letters.begin(), letters.end());
//
//		// 生成所有有效编码
//		string code(L, ' ');
//		generateCodes(L, letters, code, 0);
//
//		// 打印总数
//		cout << endl;
//	}
//
//	return 0;
//}

//int main() {
//	int n, k, m;
//	cin >> n >> k >> m;
//	vector<int> ps(n, 0);
//	for (int i = 0; i < n; i++) {
//		ps[i] = i;
//	}
//	int t = k+m-1;
//	while (ps.size() > 1) {
//		while (t > ps.size() - 1) {
//			t = t-ps.size();
//		}
//		ps.erase(ps.begin() +t);
//		t += m - 1;
//	}
//	cout << ps[0];
//	return 0;
//}

//int main() {
//	vector<int> a = { 1,2,3,4,5 };
//	cout << a[find(a.begin(), a.end(), 4)-a.begin()];
//}
//

//int main() {
//	int N, X;
//	cin >> N >> X;
//	long long sum = 0;
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> x;
//		if (x <= X) {
//			sum += x;
//		}
//	}
//	cout << sum;
//	return 0;
//}
//int main() {
//	int N;
//	cin >> N;
//	long long cnt = 0;
//	for (int i = 1; i <= N; i++) {
//		int days;
//		int my = 1;
//		int dy = 1;
//		cin >> days;
//		string m, d;
//		m = to_string(i);
//
//		for (int j = 0; j < m.size()-1; j++) {
//			if (m[j] != m[j + 1]) {
//				my = 0;
//				break;
//			}
//		}
//		if (my == 0) {
//			continue;
//		}
//		for (int j = 1; j <= days; j++) {
//			d = to_string(j);
//			if (d[0] != m[0]) {
//				continue;
//			}
//			for (int k = 0; k < d.size() - 1; k++) {
//				if (d[k] != d[k + 1]) {
//					dy = 0;
//					break;
//				}
//			}
//			if (dy == 1) {
//				cnt++;
//			}
//			dy = 1;
//		}
//	}
//	cout << cnt;
//	return 0;
//}
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	if (a.first != b.first) {
//		return a.first > b.first;
//
//	}
//	else {
//		return a.second < b.second;
//	}
//}
//int main() {
//	int N, Q;
//	string S;
//	cin >> N >> Q;
//	cin >> S;
//	vector<int> go(N, 0);
//	for (int i = 0; i < N - 1; i++) {
//		if (S[i] == S[i + 1]) {
//			go[i] = 1;
//		}
//	}
//	int lh, rh;
//	int cnt = 0;
//	int is_fir = 1;
//	vector<pair<int, int>> lrs(Q, { 0,0 });
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		lrs[i].first = x;
//		lrs[i].second = y;
//	}
//	sort(lrs.begin(), lrs.end(), cmp);
//	int ti = Q-1;
//	while (Q--) {
//		int l, r;
//		l = lrs[ti].first;
//		r = lrs[ti].second;
//		ti--;
//		if (is_fir == 1) {
//			for (int i = l - 1; i < r - 1; i++) {
//				cnt += go[i];
//
//			}
//		}
//		else {
//			if (l > lh) {
//				for (int k = lh - 1; k < l-1; k++) {
//					cnt -= go[k];
//				}
//			}
//			else if (l < lh) {
//				for (int k = l - 1; k < lh-1; k++) {
//					cnt += go[k];
//				}
//			}
//			if (r > rh) {
//				for (int k = rh - 1; k < r-1; k++) {
//					cnt += go[k];
//				}
//			}
//			else if (r < rh) {
//				for (int k = r - 1; k < rh-1; k++) {
//					cnt -= go[k];
//				}
//			}
//		}
//		cout << cnt << endl;
//		lh = l;
//		rh = r;
//		is_fir = 0;
//	}
//
//	return 0;
//}

//
//int main() {
//	string s;
//	cin >> s;
//	int i=0;
//	//int len=s.size();
//	while (s.substr(i).find("ABC") != string::npos) {
//		int last = s.substr(i).find("ABC")+i;
//		s.erase(last, 3);
//		if (last != 0)
//			i = last - 1;
//		else
//			i = 0;
//		if (i == s.size()) {
//			break;
//		}
//		while (s[i] != 'A') {
//			if (i == 0) break;
//			i--;
//		}
//
//	}
//	cout << s;
//	return 0;
//}

//int main() {
//		string s;
//	cin >> s;
//	int i=0;
//	//int len=s.size();
//	while (s.substr(i).find("ABC") != string::npos) {
//		int last = s.substr(i).find("ABC")+i;
//		s.erase(last, 3);
//		//if (last != 0)
//		//	i = last - 1;
//		//else
//		//	i = 0;
//		//if (i == s.size()) {
//		//	break;
//		//}
//		//while (s[i] != 'A') {
//		//	if (i == 0) break;
//		//	i--;
//		//}
//
//	}
//	cout << s;
//
//	return 0;
//}
//
//
//
//

//
//#include <iostream>
//#include <vector>
//
//void combinationUtil(std::vector<int>& arr, std::vector<int>& data, int start, int end, int index, int m) {
//	// 如果已经选择了 m 个元素，打印结果
//	if (index == m) {
//		for (int i = 0; i < m; i++) {
//			std::cout << data[i] << " ";
//		}
//		std::cout << std::endl;
//		return;
//	}
//
//	// 在当前位置选择一个元素并递归调用
//	for (int i = start; i <= end && end - i + 1 >= m - index; i++) {
//		data[index] = arr[i];
//		combinationUtil(arr, data, i + 1, end, index + 1, m);
//	}
//}
//
//void printCombinations(int n, int m) {
//	std::vector<int> arr(n);
//	std::vector<int> data(m);
//
//	// 初始化数组
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//
//	// 调用递归函数
//	combinationUtil(arr, data, 0, n - 1, 0, m);
//}
//
//int main() {
//	int n, m;
//	std::cout << "请输入 n 和 m：";
//	std::cin >> n >> m;
//
//	printCombinations(n, m);
//
//	return 0;
//}
//

//int main() {
//	int N;
//	cin >> N;
//	while (N--) {
//		string s;
//		cin >> s;
//		for (int i = 1; i < 9; i++) {
//			if (i != s[1]-48) {
//				cout << s[0] << i << endl;
//			}
//		}
//		for (int i = 97; i < 105; i++) {
//			if (i != s[0]) {
//				printf("%c", i);
//				cout << s[1] << endl;
//			}
//		}
//	}
//	return 0;
//}
//
//

//int main() {
//	int N;
//	cin >> N;
//	while (N--) {
//		string s;
//		cin >> s;
//		vector<char> target;
//		vector<int> lower ;
//		vector<int> upper;
//		int sz = s.size();
//		int curr = 0;
//		for (int i = 0; i < sz; i++) {
//			if (s[i] != 'b' && s[i] != 'B') {
//				target.push_back(s[i]);
//				if (s[i] >= 'a' && s[i] <= 'z') {
//					lower.push_back(curr);
//				}
//				else  {
//					upper.push_back(curr);
//				}
//				curr++;
//
//			}
//			else {
//				if (s[i] == 'b') {
//					if (lower.size() == 0) {
//						continue;
//					}
//					target[lower[lower.size() - 1]] = 48;
//					//lower.erase(lower.begin() + lower.size() - 1);
//					lower.pop_back();
//					//curr--;
//				}
//				else {
//					if (upper.size() == 0) {
//						continue;
//					}
//					target[upper[upper.size() - 1]] = 48;
//					upper.pop_back();
//					//curr--;
//				}
//			}
//		}
//		for (int i = 0; i < target.size(); i++) {
//			if (target[i]!='0')
//			cout << target[i] ;
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	int N;
//	cin >> N;
//	while (N--) {
//		int num;
//		string s;
//		cin >> num;
//		char hx = '\0';
//		int chongfu = 0;
//		for (int i = 0; i < num; i++) {
//			char x;
//			cin >> x;
//			if (x != hx && chongfu == 0) {
//				s += x;
//				hx = x;
//			}
//			else if (x == hx) {
//				chongfu++;
//				s += x;
//				continue;
//			}
//			else {
//				s.erase(s.size() - 1, 1);
//				chongfu--;
//				if (chongfu == 0) {
//					hx = s[s.size() - 1];
//				}
//			}
//		}
//		//string sii;
//
//		//int findit = 0;
//		//if (s[s.size() - 1] == s[s.size() - 2]) {
//		//	/*for (int i = s.size() - 1; i >= 0; i--) {
//		//		if (s[i] == s[s.size() - 1]) continue;
//		//		else {
//		//			findit = i;
//		//		}
//		//	}*/
//		//	string si = s;
//		//	reverse(si.begin(),si.end());
//		//	hx = '\0';
//		//	chongfu = 0;
//		//	for (int i = 0; i < si.size(); i++) {
//		//		char x;
//		//		x = si[i];
//		//		if (x != hx && chongfu == 0) {
//		//			sii += x;
//		//			hx = x;
//		//		}
//		//		else if (x == hx) {
//		//			chongfu++;
//		//			sii += x;
//		//			continue;
//		//		}
//		//		else {
//		//			sii.erase(sii.size() - 1, 1);
//		//			chongfu--;
//		//			if (chongfu == 0) {
//		//				hx = sii[sii.size() - 1];
//		//			}
//		//		}
//
//		//	}
//		//}
//		chongfu = 0;
//		int findit;
//		if (s.size() == 1) {
//			cout << 1 << endl;
//			continue;
//		}
//		if (s[s.size() - 1] == s[s.size() - 2]) {
//			for (int i = s.size() - 1; i >= 0; i--) {
//				if (s[i] == s[s.size() - 1]) chongfu++;
//				else {
//					findit = i;
//					break;
//				}
//			}
//			while (chongfu > 1 || s.size() == chongfu) {
//				s.erase(findit, 2);
//				chongfu--;
//				findit--;
//				if (s.size() == chongfu) break;
//				if (s[findit] == s[s.size() - 1]) {
//					chongfu++;
//					findit--;
//				}
//				else {
//					;
//				}
//			}
//		}
//			int t = s.size();
//			int st = 0;
//
//			for (int i = 0; i < t - 1; i += 2) {
//				if (s[i] != s[i + 1]) {
//					st += 2;
//				}
//			}
//			cout << t - st << endl;
//		
//	}
//	return 0;
//}
//
//
//











//
//
//int main() {
//	int m, n;
//	cin >> m >> n;
//	int x = m * n;
//	int maxer;
//	for (int i = 0; i < x; i++) {
//		int t;
//		cin >> t;
//		if (i == 0) {
//			maxer = t;
//			continue;
//		}
//		if (t > maxer) {
//			maxer = t;
//		}
//	}
//	cout << maxer;
//}
//int judge(int x) {
//	int sum = 0;
//	for (int i = 1; i < x; i++) {
//		if (x % i == 0) {
//			sum += i;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	int x;
//	cout << "PERFECTION OUTPUT" << endl;
//	while ( cin>>x) {
//		if (x == 0) {
//			break;
//		}
//		int tr = judge(x);
//		if (tr == x) {
//			printf("%5d", x);
//			cout << "  " << "PERFECT";
//		}
//		else if (tr > x) {
//			printf("%5d", x);
//			cout << "  " << "ABUNDANT";
//		}
//		else {
//			printf("%5d", x);
//			cout << "  " << "DEFICIENT";
//		}
//		cout << endl;
//	}
//	cout << "END OF OUTPUT";
//	return 0;
//}

//int main() {
//	string s;
//	while (getline(cin,s)) {
//		for (int i = 0; i < s.size(); i++) {
//			s[i] -= 7;
//			cout << s[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	int Z, I, M, L;
//	int num = 0;
//	while (cin >> Z >> I >> M >> L) {
//		if (Z == 0 && I == 0 && M == 0 && L == 0) {
//			break;
//		}
//		vector<long long> s;
//		int x=L;
//		while (find(s.begin(),s.end(),x) == s.end()) {
//			s.push_back( x);
//			x = (Z * x + I) % M;
//		}
//		num++;
//		int tmde = s.size() - (find(s.begin(), s.end(), x)-s.begin());
//		cout << "Case" << ' ' << num << ':' << ' ' << tmde << endl;
//	}
//	return 0;
//}

//const int n = 5;
//int sum[n];
//int get_sum(int L, int R) {
//	if (L != 0) return sum[R] - sum[L - 1];
//	return sum[R];
//}
//
//int main() {
//	int arr[n] = { 1,3,7,5,2 };
//	sum[0] = arr[0];
//	for (int i = 1; i < n; i++) {
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	cout << get_sum(2, 4) << endl;
//	return 0;
//}
//
//int d[6] = { 0 };
//void add(int l, int r, int v) {
//	d[l] += v;
//	d[r + 1] -= v;
//}
//
//int main() {
//	int arr[5] = {1,3,7,5,2};
//	add(2, 4, 5);
//	add(1, 3, 2);
//	add(0, 2, -3);
//	for (int i = 1; i < 5; i++) { d[i] += d[i - 1]; }
//	for (int i = 0; i < 5; i++) {
//		arr[i] += d[i];
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//int main() {
//	int s;
//	cin >> s;
//	int num = 0;
//	while (s != 6174) {
// 		sort(s1.begin(), s1.end());
//		s2 = s1;
//		reverse(s2.begin(),s2.end());
//		int a1, a2;
//		a1 = stoi(s1);
//		a2 = stoi(s2);
//		s = a2 - a1;
//		//s = to_string(x);
//		num++;
//	}
//
//	cout << num;
//	return 0;
//}
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	if (a.first != b.first) return a.first < b.first;
//	else return a.second < b.second;
//
//}
//
//int main() {
//	vector<pair<int,int>> arr;
//	int L, M;
//	cin >> L >> M;
//	while (M--) {
//		int l, m;
//		cin >> l >> m;
//		arr.push_back({l,m});
//	}
//	sort(arr.begin(), arr.end(), cmp);
//	int l = arr[0].first;
//	int r = arr[0].second;
//	long long sum = 0;
//	sum += l;
//	for (int i = 1; i < arr.size(); i++) {
//		if (r >= arr[i ].first) {
//			r = r > arr[i ].second ? r : arr[i ].second;
//
//		}
//		else {
//			sum += arr[i].first - r - 1;
//			l = arr[i].first;
//			r = arr[i].second;
//		}
//
//	}
//	sum += L - r;
//	cout << sum;
//
//	return 0;
//}
//
//

//int main() {
//	int p1, p2, p3;
//	cin >> p1 >> p2 >> p3;
//	string s1;
//	cin >> s1;
//	string answer;
//	while (s1.find('-') != string::npos) {
//		string then;
//		if (s1.find('-') == 0) {
//			then = '-';
//			answer += then;
//			s1.erase(0, s1.find('-') + 1);
//			continue;
//		}
//
//		if (s1.find('-') == s1.size() - 1) {
//			break;
//		}
//		answer += s1.substr(0, s1.find('-'));
//
//		string x = s1.substr(s1.find('-')-1, 3);
//		if (x[0] >= '0' && x[0] <= '9'&&x[2] >= '0' && x[2] <= '9') {
//			if (x[0] >= x[2]) {
//				then = '-';
//			}
//			else {
//				for (int i = x[0] + 1; i < x[2]; i++) {
//					for (int j = 0; j < p2; j++) {
//						if (p1==1||p1==2)
//						then.push_back(i);
//						else {
//							then.push_back('*');
//						}
//					}
//				}
//				if (p3 == 2) {
//					reverse(then.begin(), then.end());
//				}
//			}
//		}
//		else if (x[0] >= 'a' && x[0] <= 'z'&&x[2] >= 'a' && x[2] <= 'z') {
//			if (x[0] >= x[2]) {
//				then = '-';
//			}
//			else {
//				for (int i = x[0] + 1; i < x[2]; i++) {
//					for (int j = 0; j < p2; j++) {
//						if (p1 == 1 )
//							then.push_back(i);
//						else if (p1 == 2) {
//							then.push_back(i - 32);
//						}
//						else {
//							then.push_back('*');
//						}
//					}
//				}
//				if (p3 == 2) {
//					reverse(then.begin(), then.end());
//				}
//			}
//		}
//		else {
//			then = '-';
//		}
//
//		answer += then;
//		s1.erase(0, s1.find('-') + 1);
//	}
//	answer += s1;
//
//
//
//	cout << answer;
//	return 0;
//}

//int main() {
//	int N;
//	cin >> N;
//	map<int, string> tt;
//	while (N--) {
//		int n;
//		string s;
//		vector<char> ch;
//		vector<int> nu;
//		cin >> n >>  s;
//		string si;
//		vector<char> fir;
//		int numf = 0;
//		int nume = 0;
//		int is_fi = 1;
//		while (n--) {
//			if (is_fi==1)
//			getchar();
//			is_fi = 0;
//			getline(cin, si);
//			if (si[0] == 'F') {
//				fir.push_back('F');
//				numf++;
//				ch.push_back(si[2]);
//				if (si[4] == 'n') nu.push_back(0);
//				else if (si[6] == 'n') nu.push_back(1);
//				else nu.push_back(0);
//			}
//			else if (si[0] == 'E') {
//				nume++;
//				fir.push_back('E');
//
//			}
//		}
//		if (numf != nume) cout << "ERR";
//		vector<char> current;
//		int txt = 0, exe = -1;
//		vector<int> curr;
//		int now;
//		char last = '0';
//		for (int i = 0; i < fir.size(); i++) {
//			if (fir[i] == 'F') {
//				if (find(current.begin(), current.end(), ch[txt]) != current.end()) {
//					cout << "ERR";
//					break;
//				}
//				current.push_back(ch[txt]);
//				txt++;
//				if () {
//					curr[curr.size() - 1] += nu[exe];
//				}
//				else {
//					exe++;
//					curr.push_back(nu[exe]);
//				}
//				last = 'F';
//				
//			}
//			else if (fir[i] == 'E') {
//				current.pop_back();
//				last = 'E';
//			}
//		}
//
//
//
//
//
//
//
//	}
//	return 0;
//}
//
//

//int main() {
//	int N, K, S;
//	int sum = 0;
//	cin >> N >> S >> K;
//	while (N--) {
//		int P, Q;
//		cin >> P >> Q;
//		sum += P * Q;
//	}
//	if (sum >= S)cout << sum;
//	else cout << sum + K;
//	return 0;
//}

//int main() {
//	int K, G, M;
//	cin >> K >> G >> M;
//	int g = 0, m = 0;
//	int times = 0;
//	while (K--) {
//				 if (g == G) {
//					g = 0;
//					continue;
//		}
//
//		else if (m == 0) {
//			m = M;
//			continue;
//		}
//		else {
//			if (m >= (G - g)) {
//				m -= (G - g);
//				g = G;
//
//			}
//			else {
//				g += m;
//				m = 0;
//			}
//		}
//	}
//	cout << g << ' ' << m;
//
//	return 0;
//}
//

//int main() {
//	int N, M;
//	string S;
//	cin >> N >> M >> S;
//	int num=0, max = 0;
//	int curr1 = M;
//	for (int i = 0; i < N; i++) {
//		if (S[i] == '0') {
//			if (num > max) max = num;
//			S[S.find('0')] = -1;
//			num = 0;
//			curr1 = M;
//
//		}
//		else {
//			if (S[i] == '2') {
//				num++;
//			}
//			else {
//				curr1--;
//				if (curr1 == 0) {
//					if (S.find('0') == string::npos) {
//						int x = S.size() - 1 - i;
//						num += x;
//						break;
//					}
//					else {
//						int x = S.find('0') - 1 - i;
//						num += x;
//						if (num > max) max = num;
//						i = S.find('0');
//						S[S.find('0')] = -1;
//						num = 0;
//						curr1 = M;
//					}
//				}
//			}
//		}
//	}
//	if (num > max) max = num;
//	cout << max;
//	return 0;
//}
//
//
//int main() {
//	int H, W;
//	cin >> H >> W;
//	vector<vector<int>> A(H, vector<int>(W));
//	vector<vector<int>> B(H, vector<int>(W));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			int x;
//			cin >> x;
//
//			A[i][j] = x;
//		}
//	}
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			int x;
//			cin >> x;
//
//			B[i][j] = x;
//		}
//	}
//
//	int times = 0;
//	while (A != B) {
//		for (int i = 0; i < H; i++) {
//			for (int j = 0; j < W; j++) {
//				if (A[i][ j] != B[i][ j]) {
//					if (find(B.begin(), B.end(), A[i]) == B.end()) {
//						cout << '-1';
//						return 0;
//					}
//					for (int p = 0; p < H; p++) {
//						for (int q = 0; q < W; q++) {
//
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//


//int main() {
//	//char a[10], b[10];
//	//int i, j;
//	//fgets()
//	char a = '\0';
//	printf("%c", a);
//
//	return 0;
//}



























































