#include<stdio.h>

int main()
{
    int a;
    printf("1表示摆货，2表示购买货物。\n请输入你所需要的操作对应的数字。");
    scanf("%d",&a);
    if(a==1){
       getchar();
        char p;//摆货
        int i,j,k;
        scanf("%c",&p);
        //printf("%c",p);
        scanf("%d %d %d",&i,&j,&k);
        printf("%d:",i);
        for( ;k>0;k--){

            printf("%c",p);
            if(k==1){
                printf(" ");
            }
        }
        
        printf("%d",j);//摆放货物。
    }
        if(a==2){
            printf("请输入总价格：");
        int total;
        scanf("%d",&total);
        printf("请输入第一次投币的金额：");
        int i;
        int count=2;
        int sum=0;
        scanf("%d",&i);
        sum=sum+i;
        while(sum<total){
            printf("请输入第%d次投币的金额:",count);
            scanf("%d",&i);
            sum=sum+i;
            count++;
        }
        if(sum==total){
            printf("无需找零。");
        }else{
            printf("找您%d元。",sum-total);
        }
        } 
        return 0;
    }