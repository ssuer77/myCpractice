#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
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
#include <stdio.h>

int main() {
    int num, count = 0;
    int sum = 0;
    float average;


    for (int i = 0; i < 20; i++) {
        scanf("%d", &num);
        if (num < 0) {
            count++;
        }
        sum += num;
    }

    average = (float)sum / 20;

    printf("%d %.1f\n", count,average);

    return 0;
}







