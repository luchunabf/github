#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

//int main()//��д��
//{
//	char arr[1] = { 0 };//��һ���ַ���ô��
//	char c1[1] = { 0 };
//	printf("��������ĸ��\n");
//	scanf("%c", &arr[1]);
//	if (arr[1] >= 'a'&&arr[1] <= 'z')
//	{
//		c1[1] = arr[1] - 32;
//	}
//	if (arr[1] >= 'A'&&arr[1] <= 'Z')
//	{
//		c1[1] = arr[1] + 32;
//	}
//	
//	printf("%c\n", c1[1]);
//	system("pause");
//	return 0;
//}


int main()//��ʦд��
{
	
	while (1)
	{
		char c = getchar();
		if (c >= 'a'&&c <= 'z')
		{
			putchar(c - 32);
			
		}
		if (c >= 'A'&&c <= 'Z')
		{
			putchar(c + 32);
			
		}
		/*if (c >= '0'&&c <= '9')//�Ҽӵ�
		{
			putchar(c);*/
			
		}
	}
	system("pause");
	return 0;
}