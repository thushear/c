#include <stdio.h>
/**
���ǿ���ͨ��strlen��ȡ�ַ��������𣿰�ȫ�����⣬strlen����'\0'�ж��ַ������������⹥���߻ṹ��һ��������'\0'���ַ�����Ȼ��������д������֮��ĳ����ڴ�ռ䣬�Ӷ������ƻ���strcpy��strncpy��strcat��strncat�ȡ�

*/
int main(int argc, char *argv[])
{
	char c1[] = "Hello world";
	char c2[20];

    printf("%d , %d \n",sizeof(c1),sizeof(char));
	strncpy(c2,c1,sizeof(c1)/sizeof(char));
	printf("%s \n",c2);
	return 0;
}
