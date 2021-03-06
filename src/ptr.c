#include <stdio.h>

int main(int argc, char *argv[])
{
	//内存中没有数据类型  数据以字节 为单位 存取
	//32位系统中 int 为4个字节  short为2个字节
	// & 表示获得变量所指向的内纯的地址 地址也是数字
	
	int i = 5;
	printf("%d , %d\n",i,&i);
	
	int j = 5;
	printf("%d , %d \n",j,&j);

	int iAddr = &i;
	printf("%d \n",iAddr);
		
	int* iPtr = &i;
	printf("%d \n",iPtr);	
      //使用*取指针指向的内存数据  
	  int i1 = *iPtr;

	  printf("%d %d\n",i1,&i1);
	  //改变指针所指向的内存的值
	  *iPtr = 6666;
	  printf("%d %d\n",i,iPtr);	
	  //*的俩个用途 
	  //1 声明的时候用来声明指针变量
		  //2 除了声明变量的时候 其他时候*用来表示获取指针指向的数据
		//&用来获取变量的指针

   //==============数组=============
   // 数组在内存是一块连续的内存区域 数组的名称就是数组中第0个元素的内存地址 
   int num[] = {11,22,33,55,66};
   printf("%d %d %d  %d\n",&(num[0]),&(num[1]),&(num[2]),num);
   
   //字符串表示已\0结尾的一个 字符数组
   char str[] = "helloworld";
   printf("%d \n",str);
   char * strPtr = str;
   printf("%d \n",strPtr);
   
    //指针的加减法 
	//指针的加法就是指针向前移动指针类型对应的字节数 如int类型指针则移动4个字 节  减法同理
 	int n[] = {22,333,55,66,77};
	int* p = n;
	printf("%d %d\n",*p,p);
	p++;
    printf("%d %d\n",*p,p);
    p+=2;
	printf("%d %d\n",*p,p);
	p--;
	printf("%d %d\n",*p,p);

	// 指针的移动
	char a[] = "hello world";
	char * ap = a;
	printf("%d %s \n",a,a);
	ap+=3;
	printf("%d %s \n",ap,ap);
   
    //指针的减法 同类型指针相减得出的是相距的数据类型的长度 不同类型的指针间的减法没意义 编译不会通过
	char * app = a;
	app+=6;
	int ii= app - ap;
	printf("%d \n",ii);
	int nn[] = {1,2,4,5,6};
	int * ip = nn;
    int * ipp = nn;
	ipp+=4;
	printf("%d\n",(ipp -ip));

	//指针
	int i11 = 555;
	int j11 = 666;
	printf("%d %d\n",&i11,&j11);
	int * i11p = &i11;
    i11p--;
	printf("%d\n",*i11p);
   i11p--;
	printf("%d %d\n",*i11p,i11p);
     //i11p-=9999;  内存越界
	//printf("%d %d\n",*i11p,i11p);
    return 0;
}
