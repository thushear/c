#include <stdio.h>


//方法参数中传入指针 类似于java中传入 引用 
int parseNum(int i,int* ge,int* shi,int* bai )
{
	if(i<0||i>999){
	  return 0;
	}
    *ge = i%10;
	*shi = (i/10)%10;
	*bai = i/100;
	return 1; 

}

int mystrlen(char* ch){
   int len = 0;
   while(*ch != '\0'){
     len ++;
	 ch ++;
   }
   return len;
}

int endsWith(char* str , char* substr){
     int strlen = 0;
	 while(*str!='\0'){
	    strlen++;
		str++;
	 }

	 int substrlen = 0;
	 while(*substr!='\0'){
	    substrlen++;
		substr++;
	 }
	 if(substrlen > strlen){
	     return 0;
	 }
     int i; 
     for(i = 0;i<=substrlen;i++){
	     if(*substr!=*str){
		    return 0;
		 }
		 str--;
         substr--;
	 } 

     return 1;
}


int main(int argc, char *argv[])
{  
    int i = 678;
	int ge,shi,bai;
	if(parseNum(i,&ge,&shi,&bai)){
	   printf("%d %d %d \n",ge,shi,bai);
	}
    printf("%d \n" ,mystrlen("helloworld"));
     
    printf("%d \n",endsWith("rupeng","eng"));
    printf("%d \n",endsWith("rupeng","ing"));
	printf("%d \n",endsWith("rupeng","fsfsfsing"));
	return 0;
}
