#include <stdio.h>


void printEach2(int *nums, int len){
  
   int i;
	for(i=0;i<len;i++){
		printf("%d | ",nums[i]);
	}
}

/**
������������ڣ�������������ʽ�����������ʹ��sizeof�������С��

int num[]={5,89,33,25,99};

int len = sizeof(num)/sizeof(int);
sizeof�Ǳ������ڱ����ʱ�����ģ��޷���̬���㡣��˶���int *���߽����鴫�ݸ���������ô���޷�ʹ��sizeof��ȡ��С�ˡ���ʹ����������д��int[]Ҳ���У�Ϊ�˱�����⣬��Ҫ�ڲ����������������ͣ���

���һ���������������/�ַ�����ʱ��Ҫ����⴫�ݡ����ȡ���������Ϊ�����ڲ�Ҳ��֪�����ж೤����memcpy(void * restrict, const void * restrict, size_t)
*/
void printEach(int *nums){
	//sizeof���ڱ���ʱ
	int len = sizeof(nums)/sizeof(int);
	printf("%d , %d , %d \n",len , sizeof(nums), sizeof(int));
   int i;
	for(i=0;i<len;i++){
		printf("%d | ",nums[i]);
	}
}

int main(int argc, char *argv[])
{
    int nums[] = {11,22,33,44,55,66};
	int len = sizeof(nums)/sizeof(int);
	printf("%d , %d , %d \n",len , sizeof(nums), sizeof(int));
	int i;
	for(i=0;i<len;i++){
		printf("%d | ",nums[i]);
	}
	printf("\n"); 
	//printEach
    printEach(nums);
    printf("\n");
    printEach2(nums,sizeof(nums) / sizeof(int));
	
	return 0;
}
 