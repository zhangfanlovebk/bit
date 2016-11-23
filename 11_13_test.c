#define CRT_SECURE_NO_WARNINGS 1
//11.1
//1.写一个宏可以将一个数字的奇数位和偶数位交换
//#include <stdio.h>
//#define CHANGE(X) \
//    ((X&0x55555555)<<1)|((X&0xaaaaaaaa)>>1)//奇数位左移一位，偶数位右移一位
//int main()
//{
//    int a=0;
//    scanf("%d",&a);
//    printf("奇偶位交换后：%d\n", CHANGE(a));
//    return 0;
//}


//11.5
//1.模拟实现strstr函数（在串中查找指定字符串的第一次出现）
//#include <stdio.h>  
//const char *my_strstr(const char *str1, const char *str2)  
//{  
//	int i = 0;
//    for(; str1[i] != '\0'; i++)  
//    {  
//        int tem = i;		//tem保留主串中的起始判断下标位置   
//        int j = 0;  
//        while(str1[i++] == str2[j++])  
//        {  
//            if(str2[j] == '\0')  
//            {  
//                return &str1[tem];  
//            }  
//        }  
//        i = tem;  
//    }
//    return NULL;  
//}  
// 
//int main()  
//{  
//    char *a = "12345 hello bit.";  
//    char *b = "3";  
//    printf("%s\n", my_strstr(a, b));  
//    return 0;  
//}  

//2.实现一个函数翻转字符串（将一个字符串的内容，逆序存储）
//第一种
//#include <stdio.h> 
//int main()  
//{  
//    void con(char word[]);  
//    char a[40];
//    gets(a);  
//    con(a);  
//    return 0;  
//}  
//  
//void con(char word[])  
//{  
//    int i=0,z;
//	while(word[i++])
//	{  
//        z=i;
//	}
//    for(i=z-1;i>=0;i--)
//	{
//        printf("%c",word[i]);
//	}
//    printf("\n");  
//} 

//第二种
//#include <stdio.h>
//char *rstr(char* a)
//{
//    char *p1, *p2, t;
//    p2 = a;
//	p1 = p2;		//等同于p1=p2=a
//    while(*p2) 
//	{
//		++p2;
//	}
//    while(p1 < p2) 
//	{
//        t = *p1;
//        *p1++ = *--p2;
//        *p2 = t;
//    }
//    return a;
//}
//
//int main()
//{
//    char a[] = "hello my big world.";
//    puts(rstr(a));
//}
//
//3.每瓶汽水1元，两个空瓶可以置换一瓶汽水，现在有20元，最多能喝多少瓶汽水（编程实现）
//#include <stdio.h>
//int main()
//{
//    int money = 20;
//    int count = 20;
//    while (1)
//    {
//        if (money % 2 != 0)
//        {
//            count = count + money - 1;
//            break;
//        }
//        else
//        {
//            money = money / 2;
//            count += money;
//        }
//    }
//    printf("%d\n", count);
//    system("pause");
//    return 0;
//}

//11.7
//1.实现一个函数，可以左旋字符串中的k个字符。
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//第一种
//#include<stdio.h>  
//#include<string.h>  
//void left_move(char *p, int n)  
//{  
//    int i;				  //循环移位，对需要旋转的i个字符按顺序进行旋转
//    int len = strlen(p);  
//    for (i = 0; i < n; i++)  
//    {  
//        char tmp = p[0];  //将要旋转的一个字符保存起来，将后面的往前挪动一位
//        int j = 0;  
//        for (j = 0; j < len - 1; j++)  
//        {  
//            p[j] = p[j + 1];  
//        }  
//        p[len - 1] = tmp;  //将保存起来的这个字符赋给最后一位，这样连续循环i次
//    }  
//}
//
//int main()  
//{  
//    char arr[] = "abcdef";  
//    int n = 0;  
//    scanf_s("%d", &n);  
//    left_move(arr, n);  
//    printf("%s\n", arr);    
//    return 0;  
//}

//第二种
//三步旋转法，先将要旋转的k个字符串逆序
//再将剩余的字符串逆序，再对整个字符串逆序就得到了旋转k个字符后的字符串
//#include<stdio.h>  
//#include<string.h>  
//void reverse(char *left, char *right)  
//{  
//    while (left < right)  
//    {  
//        char tmp = *left;  
//        *left = *right;  
//        *right = tmp;  
//        left++;  
//        right--;  
//    }  
//}  
//void left_move(char *p, int n)  
//{  
//    int len = strlen(p);  
//    reverse(p, p + n - 1);  
//    reverse(p + n, p + len - 1);  
//    reverse(p, p + len - 1);  
//}  
//int main()  
//{  
//    char arr[] = "abcdef";  
//    int n = 0;  
//    scanf_s("%d", &n);  
//    left_move(arr, n);  
//    printf("%s\n", arr);  
//    return 0;  
//}  


//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 ＝ AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//AABCD右旋两个字符得到CDAAB
//#include<stdio.h>
//#include <string.h>
//void reserve(char *left, char*right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_reserve(char arr[], int k)
//{
//	int len = strlen(arr) - 1;
//	char *pstart = &arr[0];
//	char *pend = arr + len;
//	reserve(pstart, pstart + k - 1);
//	reserve(pstart + k, pend);
//	reserve(pstart, pend);
//}
//
//void right_reserve(char arr[], int k)
//{
//	int len = strlen(arr) - 1;
//	char *pstart = &arr[0];
//	char *pend = arr + len;
//	reserve(pstart, pstart + len - k);
//	reserve(pend - k+1, pend);
//	reserve(pstart, pend);
//}
//
//int main()
//{
//	int k = 5;
//	char arr[20]="ABCDEF";
//	char arr2[20]="CDEFBA";
//	char *p = arr;
//	while (k)
//	{
//		left_reserve(arr, k);
//		if (strcmp(arr, arr2) == 0)
//		{
//			printf("1\n");
//			break;
//		}
//		right_reserve(p, k);
//		if (strcmp(p, arr2) == 0)
//		{
//			printf("1\n");
//			break;
//		}
//		k--;
//	}
//	if (0 == k)
//	{
//		printf("0\n");
//	}
//	system("pause");
//}
//建议方法
//#include <stdio.h>  
//#include <string.h>  
//#include <assert.h>  
//int rotate(char *p, char *q)  
//{  
//    assert(p != NULL && q != NULL);  
//    strncat(p,p,strlen(p));  
//    if (strstr(p, q) == NULL)  
//    {  
//        return 0;  
//    }  
//    else  
//    {  
//        return 1;  
//    }  
//}  
//  
//int main()  
//{  
//    char p[20] = "AABCD";  
//    char *q = "BCDAA";  
//    char r[20] = "abcd";  
//    char *s = "ACBD";  
//    printf("%d\n", rotate(p, q));  
//    printf("%d\n", rotate(r, s));  
//    return 0;  
//}


//11.8
//1.求第n个斐波那契数（非递归实现）。
//#include <stdio.h>
//int fib(int n)
//{
//    int a1 = 1;
//    int a2 = 1;
//    int an = a1;
//    if (n <= 2)
//    {
//        return an;
//    }
//    while(n > 2)
//    {
//        an = a1 + a2;
//        a1 = a2;
//        a2 = an;
//        n--;
//    }
//    return an;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", fib(n));
//    return 0;
//}
//
//递归方法
//#include <stdio.h>
//#include <stdlib.h>
//int fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", fib(n));
//    return 0;
//}
//
//2.一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//  找出这两个数字，编程实现。//100010010
//#include<stdio.h>  
//Find_Num(int arr[], int sz , int * num1, int *num2)  
//{   
//   int i = 0;  
//   int ret = 0;  
//   int pos = 0;  
//   int temp = 0; 
//   * num1 = 0;  
//   * num2 = 0; 
//   for (i = 0; i < sz ; i++)  
//   {  
//       ret ^= arr[i];//0与数组中元素依次亦或，最终得到
//	//两个不唯一的数的亦或值，其余的数在亦或过程中消掉了。  
//   }  
//   temp = ret;  
//   while (ret)  
//   {  
//        if (ret % 2 == 1)  
//         {  
//            break;  
//         }  
//        pos++;						//第pos位为1  
//        ret /= 2;  
//   }  
//   for (i = 0; i < sz ; i++)  
//   {  
//        if ((arr [i] >> pos) & 1)   //取出第pos位的值  
//         {  
//            *num1^= arr [i];  
//         }  
//   }  
//   *num2 = temp^*num1 ;  
//} 
//
//int main()  
//{  
//   int num1 = 0;  
//   int num2 = 0;  
//   int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 8 };  
//   int sz = sizeof (arr) / sizeof(arr[0]);  
//   Find_Num(arr, sz, &num1, &num2);  
//   printf( "%d,%d\n", num1, num2);  
//   return 0;  
//} 
//
//建议方法
//#include <stdio.h>
//#include <stdlib.h>
//void find(int a[], int sz)
//{
//    int i = 0;
//    int num1 = 0;
//    int num2 = 0;
//    int num = 0;
//    int flag = 0;
//    for (i = 0; i < sz; i++)
//    {
//        num ^=a[i];
//    }
//    for (i = 0; i < 32; i++)
//    {
//        if (((num >> i) & 1) != 1)//找异或之后这个数字二进制数中最先出现的1的位置
//        {
//            flag++;
//        }
//        else
//            break;
//    }
//    for (i = 0; i < sz; i++)
//    {
//        if (((a[i] >> flag)&1) == 1)//分成2组
//            num1 ^= a[i];
//        else
//            num2 ^= a[i];
//    }
//    printf("%d %d\n",num2,num1);
//}
//
//int main()
//{
//    int a[] = {1,2,3,4,5,1,2,3};
//    int sz = sizeof(a) / sizeof(a[0]);
//    find(a, sz);
//    return 0;
//}

//11.12
//1.递归实现字符串的逆序。
//#include<stdio.h>
//#include<string.h>  
//char s[100];  
//int len;  
//void reverse(int i,int j)  
//{  
//    char temp;
//	if(i==len/2){
//        return 0; 
//	} 
//    temp=s[i];  
//    s[i]=s[j];  
//    s[j]=temp;  
//    reverse(++i,--j);   
//}
//
//int main()  
//{  
//    scanf("%s",&s);  
//    len=strlen(s);   
//    reverse(0,len-1);   
//    printf("%s\n",s);
//	return 0;
//}
//
//2.模拟实现一个printf，
//  函数可以实现my_printf("s ccc.","hello",'b','i','t');
//第一种
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//void my_printf(const char *str, ...)
//{
//    va_list arg;//定义va_list类型变量arg 
//    va_start(arg, str);
//			//arg初始化,n是第一个可见参数名字;使arg指向第一个可选参数
//    while (*str)
//    {
//        switch (*str)
//        {
//        case 'c':
//        {
//            char ch = va_arg(arg, char);
//			//返回参数列表中的当前参数并使arg指向参数列表中的下一个参数
//            putchar(ch);
//            break;
//        }
//        case 's':
//        {
//            char *pc = va_arg(arg, char *);
//				//va_arg的第二个参数是你要返回的参数的类型
//            while (*pc)
//            {
//                putchar(*pc);
//                pc++;
//            }
//            break;
//        }
//        case 'd':
//        {
//            int q=va_arg(arg,int);//此处返回整型
//            putchar(q+'0');
//            break;
//        }
//        default:
//            putchar(*str);
//            break;
//        }
//        str++;
//    }
//    va_end(arg);//把arg指针清为NULL 
//}
// 
//int main()
//{
//    my_printf("s ccc d\n","hello",'b','i','t',6);
//    return 0;
//}
//
//
//第二种
//#include <stdio.h>  
//#include <stdlib.h>  
//#include <stdarg.h>  
//void my_printf(char * val, ...)                    //可变参数列表  
//{  
//    char *c = NULL;  
//    va_list arg;                               //typedef char * va_list  
//    va_start(arg, val);                        //获取参数地址    
//    while (*val != '\0') {                     //val指向"val:ccc s"  
//        if (*val == 'c') {  
//            putchar(va_arg(arg, char));  
//        }  
//        else if (*val == 's') {  
//            puts(va_arg(arg, char*));  
//        }  
//        else  
//            putchar(*val);  
//        ++val;  
//    }  
//    va_end(arg);  
//}  
//  
//int main()  
//{  
//	my_printf("s ccc\n","hello",'b','i','t');    
//    return 0;  
//} 

//1. 打印100~200 之间的素数

#include <stdio.h>

#include <math.h>

int main()

{

    int i,n,k;

    for(n=100;n<201;n++)

    {

       k=sqrt(n);

    for(i=2;i<=k;i++)

           if(n%i==0)break;

       if(i>k)

           printf("%d\n",n);

    }

    return 0;

}