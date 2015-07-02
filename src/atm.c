#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
int x;
void show_menu();
void land();
void inquiry();
void withdrawals();
void depoist();
void out();
void cls();
struct atm
{
    char name[10];
    int account;
    int password;
    float money;
}
at[10]={{"XiaoFeng",1,1,8000},{"XiaoQiang",2,2,100},
{"MM",3,3,5888},{"XiaoYi",4,4,7543},
{"ShiWei",5,5,10000},{"ShiLei",6,6,12000},
{"DaDa",7,7,2765},{"XiaoXiao",8,8,4530},
{"FangFang",9,9,5693},{"YuanYuan",10,10,7543}};

void main(){
    printf("\t\t******************Welcome to ATM******************\n");
    printf("\t\t**************************************************\n");
    land();
}

void cls()
{
    printf("\n\nPlease wait...\n");
    sleep(3);
    system("clear");
}

void land(){
    int a;
    int account;
    int password;
    printf("Please input your account:");
    scanf("%d",&account);
    for(a=0;a<=9;a++){
        if(account==at[a].account)
        {
            x=a;
            printf("Please input your password:");
            scanf("%d",&password);
            if(password==at[a].password)
            {
            cls();
            show_menu();
            break;}
        else
                {
                printf("The password is wrong .\n");
                cls();
                main();
                land();
                }
        }
    }
    printf("Warning : error !\n");
    cls();
    main();
    land();
}

void show_menu()
{
    int z;
    printf("\t\t************* Shiyanlou ATM **************\n");
    printf("\t\t******************************************\n");
    printf("\t\t**\tBalance inquiries--------1\t**\n");
    printf("\t\t**\tWithdrawals--------------2\t**\n");
    printf("\t\t**\tDepoist -----------------3\t**\n");
    printf("\t\t**\tExit---------------------4\t**\n");
    printf("\t\t******************************************");
    while(1)
    {
    printf("\n\nPlease choice:");
    scanf("%d",&z);
    switch(z)
    {
    case 1:inquiry();break;
    case 2:withdrawals();break;
    case 3:depoist();break;
    case 4:out();break;
    default:printf("Warning: illegal operation!");
    return;
    }
    }
}

void inquiry()
{
    printf("%s Mr./MS. Your account balance $%7.2f ",at[x].name,at[x].money);
    cls();
    show_menu();
}

void withdrawals()
{
    float a;
    printf("Please input the amount of money $");
    scanf("%f",&a);
    if(a>at[x].money)
    printf("Your account balance is not enough .");
    else
    {
        printf("Transaction completed .");
        at[x].money=at[x].money-a;
    }
    cls();
    show_menu();
}

void depoist()
{
    float a;
    printf("Please input the amount of deposit $");
    scanf("%f",&a);
    if(a>10000)
    printf("Maximum deposit $10000 ");
    else
    {
        printf("You have been deposited $%7.2f",a);
        at[x].money=at[x].money+a;
    }
    cls();
    show_menu();
}

void out()
{

    printf("Please get your card.\n");
    cls();
    main();
}
