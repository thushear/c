#include <stdio.h>

int main(int argc, char *argv[])
{
	char ch[20];//ֻ�����ڴ� �����ʼ��

    memset(ch,88,sizeof(ch));
	printf("%s\n",ch);
	 
    int i;
	for(i=0;i<sizeof(ch);i++){
	   printf("%d|",ch[i]);
	   //printf("%s|",ch[i]);
	}

    //==============
	printf("\n");
	char ch1[20] = {0}; //��������ĳ�ʼ�� ����д��
	 int j;
	for(j=0;j<sizeof(ch);j++){
	   printf("%d|",ch1[j]);
	   //printf("%s|",ch[i]);
	}
	return 0;
}