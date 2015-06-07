#include <stdio.h>

struct  _Person
{
	 char *name;
	 int age;
	 double height;
};
/**
为什么是16？

对于int、short等放到结构体中保存是占用对应的字节，但是对于char*等，则只是保存它的指针（地址）。

*/

int main(int argc, char *argv[])
{
    //结构体初始化
	struct _Person p = {0};
	p.age = 20;
	p.name = "fsasfasef";
	p.height = 178;
	printf( " %d , %s \n",p.age,p.name);
	printf("%d\n",sizeof(p));
	return 0;
}
