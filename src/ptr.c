#include <stdio.h>

int main(int argc, char *argv[])
{
	//�ڴ���û����������  �������ֽ� Ϊ��λ ��ȡ
	//32λϵͳ�� int Ϊ4���ֽ�  shortΪ2���ֽ�
	// & ��ʾ��ñ�����ָ����ڴ��ĵ�ַ ��ַҲ������
	
	int i = 5;
	printf("%d , %d\n",i,&i);
	
	int j = 5;
	printf("%d , %d \n",j,&j);

	int iAddr = &i;
	printf("%d \n",iAddr);
		
	int* iPtr = &i;
	printf("%d \n",iPtr);	
      //ʹ��*ȡָ��ָ����ڴ�����  
	  int i1 = *iPtr;

	  printf("%d %d\n",i1,&i1);
	  //�ı�ָ����ָ����ڴ��ֵ
	  *iPtr = 6666;
	  printf("%d %d\n",i,iPtr);	
	  //*��������; 
	  //1 ������ʱ����������ָ�����
		  //2 ��������������ʱ�� ����ʱ��*������ʾ��ȡָ��ָ�������
		//&������ȡ������ָ��

   //==============����=============
   // �������ڴ���һ���������ڴ����� ��������ƾ��������е�0��Ԫ�ص��ڴ��ַ 
   int num[] = {11,22,33,55,66};
   printf("%d %d %d  %d\n",&(num[0]),&(num[1]),&(num[2]),num);
   
   //�ַ�����ʾ��\0��β��һ�� �ַ�����
   char str[] = "helloworld";
   printf("%d \n",str);
   char * strPtr = str;
   printf("%d \n",strPtr);
   
    //ָ��ļӼ��� 
	//ָ��ļӷ�����ָ����ǰ�ƶ�ָ�����Ͷ�Ӧ���ֽ��� ��int����ָ�����ƶ�4���� ��  ����ͬ��
 	int n[] = {22,333,55,66,77};
	int* p = n;
	printf("%d %d\n",*p,p);
	p++;
    printf("%d %d\n",*p,p);
    p+=2;
	printf("%d %d\n",*p,p);
	p--;
	printf("%d %d\n",*p,p);

	// ָ����ƶ�
	char a[] = "hello world";
	char * ap = a;
	printf("%d %s \n",a,a);
	ap+=3;
	printf("%d %s \n",ap,ap);
   
    //ָ��ļ��� ͬ����ָ������ó����������������͵ĳ��� ��ͬ���͵�ָ���ļ���û���� ���벻��ͨ��
	char * app = a;
	app+=6;
	int ii= app - ap;
	printf("%d \n",ii);
	int nn[] = {1,2,4,5,6};
	int * ip = nn;
    int * ipp = nn;
	ipp+=4;
	printf("%d\n",(ipp -ip));

	//ָ��
	int i11 = 555;
	int j11 = 666;
	printf("%d %d\n",&i11,&j11);
	int * i11p = &i11;
    i11p--;
	printf("%d\n",*i11p);
   i11p--;
	printf("%d %d\n",*i11p,i11p);
     //i11p-=9999;  �ڴ�Խ��
	//printf("%d %d\n",*i11p,i11p);
    return 0;
}