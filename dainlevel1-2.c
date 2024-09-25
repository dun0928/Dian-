#include<stdio.h>
int main()
{
     /*int i,j;
   printf("请输入购买的货物的金额与数量：");
    scanf("%d %d",&i,&j);
    int total=i*j;*/
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
    return 0;

    


}