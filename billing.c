#include<stdio.h>
float calculation(char ward_type,int days){
    float amount;
    float price;
    switch(ward_type){
        case 'G':{
            price = 1000.0f;
            break;
        }
        case 'P':{
            price= 2000.0f;
            break;
        }
        case 's':{
            price =5000.0f;
            break;
        }
    }
    amount=price+days;
    if(days>7){
        amount*=0.95f;
    }
    return amount;
}
int main()
{
    char name[255];
    char ward_type;
    int numb_days_admitted;
    printf("enter the patient name\n");
    scanf("%s",name);
    getchar();
    printf("enter ward type(G:for general/P:for private/SP:for semiprivate\n");
    scanf("%c",&ward_type);
    printf("enter the number of days\n");
    scanf("%d",&numb_days_admitted);
    float amount=calculation(ward_type,numb_days_admitted);
    printf("patient name:%s\n",name);
    printf("bill amount:%.2f\n",amount);
    return 0;
}
