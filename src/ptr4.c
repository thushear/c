#include <stdio.h>
/**
不是可以通过strlen获取字符串长度吗？安全性问题，strlen根据'\0'判断字符串结束，恶意攻击者会构造一个不包含'\0'的字符串，然后让数据写入数组之外的程序内存空间，从而进行破坏。strcpy→strncpy；strcat→strncat等。

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
