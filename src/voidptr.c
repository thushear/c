#include <stdio.h>

/**
1、void *表示一个“不知道类型”的指针，也就不知道从这个指针地址开始多少字节为一个数据。和用int表示指针异曲同工，只是更明确是“指针”。

因此void*只能表示一个地址，不能用来&取值，也不能++--移动指针，因此不知道多少字节是一个数据单位

2、void *就是一个不能动的“地址”，在进行&、移动指针之前必须转型为类型指针

3、void *的用途：在只知道内存，但是不知道是什么类型的时候。
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
