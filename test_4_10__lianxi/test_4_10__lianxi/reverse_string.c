#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strlen(char* str)
{
	if (*str == '\0')
		return 0;
	return 1 + strlen(str + 1);
}
void reverse_string(char* str)
{
	int len = strlen(str);
	
	if (*str != 0)
	{
		char tmp;
		tmp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';
		reverse_string(str + 1);
		str[len - 1] = tmp;

	}
}
int main()
{
	char arr[1024] = { 0 };
	printf("ÊäÈë×Ö·û´®£º\n");
	scanf("%s", &arr);
	reverse_string(arr);
	printf("%s", arr);
	system("pause");
	return 0;
}