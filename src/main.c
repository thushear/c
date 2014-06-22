/*
 ============================================================================
 Name        : main.c
 Author      : kongm
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "readlines.h"
#include "qsort.h"

#define MAXLINES 5000

#define  MAXOP 100

char *lineptr[MAXLINES];

int main(int argc,char *argv[]) {
	int nlines;
	if((nlines=readlines(lineptr,MAXLINES))>=0){
		qsort1(lineptr,0,nlines-1);
		writelines(lineptr,nlines);
		return 0;
	}else{
		printf("Error: input too big to sort.\n");
		return 1;
	}




     /* int array[100];
	 int n = strlen("hello world");
	 int m = strlen(array);
	 printf( "%d\n",n);
	 printf( "%d\n",m);*/
	/*int type;
	    double op2;
	    char s[MAXOP];

	    while ((type = getop(s)) != EOF) {
	        switch (type) {
	        case NUMBER:
	            push(atof(s));
	            break;
	        case '+':
	            push(pop() + pop());
	            break;
	        case '*':
	            push(pop() * pop());
	            break;
	        case '-':
	            op2 = pop();
	            push(pop() - op2);
	            break;
	        case '/':
	            op2 = pop();
	            if (op2 != 0.0)
	                push(pop() / op2);
	            else
	                printf("error: zero divisor\n");
	            break;
	        case '%':
	            op2 = pop();
	            if (op2 != 0.0)
	                push(fmod(pop(), op2));
	            else
	                printf("error: zero divisor\n");
	            break;
	        case '\n':
	            printf("= %g\n", pop());
	            break;
	        default:
	            printf("error: unknown command %s\n", s);
	        break;
	        }
	    }
*/
	    return 0;
}
/**/
int strlen(char *s){
	int n;
	for(n=0;*s!='\0';s++)
		 n++;
	return n;
}

