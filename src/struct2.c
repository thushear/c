#include <stdio.h>

/**
ypedef int zhengshu;���Ը�intȡһ������zhengshu��

���Ҳ������typedef struct _Person Person;��Person����Ϊstruct _Person �ı���

3����Ȼ��õļ�д����

typedef struct _Person

{

int age;

char* name;

} Person;
p1��p2�ĵ�ַ��һ�����ṹ�帳ֵ�ǡ�����һ�ݡ�

5��Ϊ�˱����ڴ�ռ�ã�һ��ֻ��һ�ݣ����ͨ���ṹ��ָ�봫�ݣ�

Person *p2 = &p1;

printf("%s��������%d\n",p2->name,p2->age);

6��ע�⣺���ڽṹ��ָ�룬ȡ��ԱҪʹ��->�������ǡ�.��

���ڴ��룺

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
