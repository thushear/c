#include <stdio.h>

/**
1��void *��ʾһ������֪�����͡���ָ�룬Ҳ�Ͳ�֪�������ָ���ַ��ʼ�����ֽ�Ϊһ�����ݡ�����int��ʾָ������ͬ����ֻ�Ǹ���ȷ�ǡ�ָ�롱��

���void*ֻ�ܱ�ʾһ����ַ����������&ȡֵ��Ҳ����++--�ƶ�ָ�룬��˲�֪�������ֽ���һ�����ݵ�λ

2��void *����һ�����ܶ��ġ���ַ�����ڽ���&���ƶ�ָ��֮ǰ����ת��Ϊ����ָ��

3��void *����;����ֻ֪���ڴ棬���ǲ�֪����ʲô���͵�ʱ��
*/
typedef struct _Person
{
	char *name;
	int age;
} Person;


void zeromem(void *src,int size){
   char * p = (char *)src;
   int i;
   for(i=0;i<size;i++){
      *p = 0;
	  p++;
   }
}


int main(int argc, char *argv[])
{
	printf("Hello, world\n");
    int nums[10];
	zeromem(nums,sizeof(nums));
    int i ;
	 for(i=0;i<sizeof(nums)/sizeof(int);i++){
	     printf("%d | ",nums[i]);
	  }
    
	Person p ;
	zeromem(&p,sizeof(p));
	printf("\n %d \n",p.age);
	return 0;
}
