#define CRT_SECURE_NO_WARNINGS 1
//11.1
//1.дһ������Խ�һ�����ֵ�����λ��ż��λ����
//#include <stdio.h>
//#define CHANGE(X) \
//    ((X&0x55555555)<<1)|((X&0xaaaaaaaa)>>1)//����λ����һλ��ż��λ����һλ
//int main()
//{
//    int a=0;
//    scanf("%d",&a);
//    printf("��żλ������%d\n", CHANGE(a));
//    return 0;
//}


//11.5
//1.ģ��ʵ��strstr�������ڴ��в���ָ���ַ����ĵ�һ�γ��֣�
//#include <stdio.h>  
//const char *my_strstr(const char *str1, const char *str2)  
//{  
//	int i = 0;
//    for(; str1[i] != '\0'; i++)  
//    {  
//        int tem = i;		//tem���������е���ʼ�ж��±�λ��   
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

//2.ʵ��һ��������ת�ַ�������һ���ַ��������ݣ�����洢��
//��һ��
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

//�ڶ���
//#include <stdio.h>
//char *rstr(char* a)
//{
//    char *p1, *p2, t;
//    p2 = a;
//	p1 = p2;		//��ͬ��p1=p2=a
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
//3.ÿƿ��ˮ1Ԫ��������ƿ�����û�һƿ��ˮ��������20Ԫ������ܺȶ���ƿ��ˮ�����ʵ�֣�
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
//1.ʵ��һ�����������������ַ����е�k���ַ���
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//��һ��
//#include<stdio.h>  
//#include<string.h>  
//void left_move(char *p, int n)  
//{  
//    int i;				  //ѭ����λ������Ҫ��ת��i���ַ���˳�������ת
//    int len = strlen(p);  
//    for (i = 0; i < n; i++)  
//    {  
//        char tmp = p[0];  //��Ҫ��ת��һ���ַ��������������������ǰŲ��һλ
//        int j = 0;  
//        for (j = 0; j < len - 1; j++)  
//        {  
//            p[j] = p[j + 1];  
//        }  
//        p[len - 1] = tmp;  //����������������ַ��������һλ����������ѭ��i��
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

//�ڶ���
//������ת�����Ƚ�Ҫ��ת��k���ַ�������
//�ٽ�ʣ����ַ��������ٶ������ַ�������͵õ�����תk���ַ�����ַ���
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


//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 �� AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//AABCD���������ַ��õ�CDAAB
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
//���鷽��
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
//1.���n��쳲����������ǵݹ�ʵ�֣���
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
//�ݹ鷽��
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
//2.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//  �ҳ����������֣����ʵ�֡�//100010010
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
//       ret ^= arr[i];//0��������Ԫ������������յõ�
//	//������Ψһ���������ֵ������������������������ˡ�  
//   }  
//   temp = ret;  
//   while (ret)  
//   {  
//        if (ret % 2 == 1)  
//         {  
//            break;  
//         }  
//        pos++;						//��posλΪ1  
//        ret /= 2;  
//   }  
//   for (i = 0; i < sz ; i++)  
//   {  
//        if ((arr [i] >> pos) & 1)   //ȡ����posλ��ֵ  
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
//���鷽��
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
//        if (((num >> i) & 1) != 1)//�����֮��������ֶ������������ȳ��ֵ�1��λ��
//        {
//            flag++;
//        }
//        else
//            break;
//    }
//    for (i = 0; i < sz; i++)
//    {
//        if (((a[i] >> flag)&1) == 1)//�ֳ�2��
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
//1.�ݹ�ʵ���ַ���������
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
//2.ģ��ʵ��һ��printf��
//  ��������ʵ��my_printf("s ccc.","hello",'b','i','t');
//��һ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//void my_printf(const char *str, ...)
//{
//    va_list arg;//����va_list���ͱ���arg 
//    va_start(arg, str);
//			//arg��ʼ��,n�ǵ�һ���ɼ���������;ʹargָ���һ����ѡ����
//    while (*str)
//    {
//        switch (*str)
//        {
//        case 'c':
//        {
//            char ch = va_arg(arg, char);
//			//���ز����б��еĵ�ǰ������ʹargָ������б��е���һ������
//            putchar(ch);
//            break;
//        }
//        case 's':
//        {
//            char *pc = va_arg(arg, char *);
//				//va_arg�ĵڶ�����������Ҫ���صĲ���������
//            while (*pc)
//            {
//                putchar(*pc);
//                pc++;
//            }
//            break;
//        }
//        case 'd':
//        {
//            int q=va_arg(arg,int);//�˴���������
//            putchar(q+'0');
//            break;
//        }
//        default:
//            putchar(*str);
//            break;
//        }
//        str++;
//    }
//    va_end(arg);//��argָ����ΪNULL 
//}
// 
//int main()
//{
//    my_printf("s ccc d\n","hello",'b','i','t',6);
//    return 0;
//}
//
//
//�ڶ���
//#include <stdio.h>  
//#include <stdlib.h>  
//#include <stdarg.h>  
//void my_printf(char * val, ...)                    //�ɱ�����б�  
//{  
//    char *c = NULL;  
//    va_list arg;                               //typedef char * va_list  
//    va_start(arg, val);                        //��ȡ������ַ    
//    while (*val != '\0') {                     //valָ��"val:ccc s"  
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

//1. ��ӡ100~200 ֮�������

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