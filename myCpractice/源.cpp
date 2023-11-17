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






































































