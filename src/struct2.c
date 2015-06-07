#include <stdio.h>

/**
ypedef int zhengshu;可以给int取一个别名zhengshu。

因此也可以用typedef struct _Person Person;把Person定义为struct _Person 的别名

3、当然最常用的简化写法：

typedef struct _Person

{

int age;

char* name;

} Person;
p1和p2的地址不一样，结构体赋值是“复制一份”

5、为了避免内存占用，一般只用一份，因此通过结构体指针传递：

Person *p2 = &p1;

printf("%s的年龄是%d\n",p2->name,p2->age);

6、注意：对于结构体指针，取成员要使用->，而不是“.”

本节代码：

*/
typedef struct _Person
{
	char* name;
	int age;
}  Person ;


int main(int argc, char *argv[])
{
	printf("Hello, world\n");
	
	Person p = {0};
	p.age  = 10;
	p.name = "kongming";
	
	printf("%d \n",sizeof(p));

	Person p2 = p;
    printf("%d , %d \n" , &p,&p2);
    p.age = 100;
	printf("%d \n",p2.age);

	Person* p3 = &p;
	printf("%d , %d\n",p3,&p);
	printf("%d , %s\n",p3->age,p3->name);
	p3->age= 120;
	printf("%d , %s\n",p3->age,p3->name);
	printf("%d , %s\n",p.age,p.name);
	return 0;
}
