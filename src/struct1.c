#include <stdio.h>

struct  _Person
{
	 char *name;
	 int age;
	 double height;
};
/**
Ϊʲô��16��

����int��short�ȷŵ��ṹ���б�����ռ�ö�Ӧ���ֽڣ����Ƕ���char*�ȣ���ֻ�Ǳ�������ָ�루��ַ����

*/

int main(int argc, char *argv[])
{
    //�ṹ���ʼ��
	struct _Person p = {0};
	p.age = 20;
	p.name = "fsasfasef";
	p.height = 178;
	printf( " %d , %s \n",p.age,p.name);
	printf("%d\n",sizeof(p));
	return 0;
}
