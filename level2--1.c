#include<stdio.h>
#include<string.h>
int main()
{
    int channel[5]={0};//表示几号货物通道中摆放的数目，如channel[0]==3，表示1号通道里面摆放了三件货物
    char goods[5];//表示几号通道摆放的货物种类，如goods[0]==A,代表1号通道放着A货物
    int price[5]={0};//表示几号通道中摆放的货物的单价，如price[0]==5,表示1号通道中货物单价为5元
    char q[10];
    printf("请选择是否需要摆放货物，如需要则输入YES，如不需要摆货或摆货结束，则输入END进行购买货物。");
    scanf("%9s",q);
    int i,j,k;//分别是通道，单价，与摆放数目。
    char ch; 
    while(strcmp(q,"END")!=0&&strcmp(q,"YES")==0){
        while(ch=(getchar())!='\n'&&ch!=EOF){;}
        char r;
        printf("请输入摆放的货物种类，通道，单价与摆放数目\n");
        scanf("%c",&r);
        scanf("%d %d %d",&i,&j,&k);
        //printf("j=%d",j);
        //printf("k=%d",k);
        if((ch=getchar())!='\n'&&ch!=EOF||j>10||k>50){
        printf("摆放错误！\n");
        break;
        }else{
            if(channel[i-1]==0){
            channel[i-1]=k;
            goods[i-1]=r;
            price[i-1]=j;
            int m=0;
            for(m=0;m<=5;m++){
                if(channel[i-1]==channel[m-1]){
                    if(price[i-1]!=price[m-1]){
                        printf("货物单价前后不一致。请重新输入\n");
                        printf("请输入摆放的货物种类，通道，单价与摆放数目\n");
                        scanf("%c",&r);
                        scanf("%d %d %d",&i,&j,&k);
                        break;
                    }
                }
            }
            if(price[i-1]!=price[m-1]){
                printf("请选择是否需要继续摆放货物，如需要则输入YES，如不需要摆货或摆货结束，则输入END进行购买货物。\n");
                scanf("%s",q);
                }   
            }else{
                printf("重复摆放到同一通道。如重新摆放则输入YES，若停止摆放则输入END。");
                scanf("%s",q);
            }
        }
        
    }
    if(strcmp(q,"END")!=0&&strcmp(q,"YES")!=0)
    {
        printf("输入错误！\n");
    }
    if(strcmp(q,"END")==0){
        printf("摆货结束且摆放结果如下\n");
    
    
        for(i=1;i<=5;i++){
            if(channel[i-1]>0){
                printf("%d号通道摆放%c货物，数量为%d个。货物单价为%d元\n",i,goods[i-1],channel[i-1],price[i-1]);
            }
            else{
             printf("%d号通道未摆放货物。\n",i);
            }
        }
    }   
    while(ch=(getchar())!='\n'&&ch!=EOF){;}
    printf("请选择是否需要购买货物，如需要则输入YES，如无需购买或者购买结束，请输入END结束购买货物：");
    int number;//一次购买的数量
    scanf("%s",q);
    int sum=0;
    while(strcmp(q,"END")!=0){
        while(ch=(getchar())!='\n'&&ch!=EOF){;}
        char r;
        printf("请输入需要购买的货物种类，通道和数目。");
        scanf("%c %d %d",&r,&i,&number);
        sum=sum+price[i-1]*number;
        if(r==goods[i-1]&&number<=channel[i-1]){
            printf("是否需要继续购买货物，如需要则输入YES，如无需购买或者购买结束，请输入END结束购买货物：");
            scanf("%s",q);
            if(strcmp(q,"END")!=0&&strcmp(q,"YES")!=0){
            printf("输入错误！\n");
            printf("是否需要继续购买货物，如需要则输入YES，如无需购买或者购买结束，请输入END结束购买货物：");
            }
        }else if(number>channel[i-1]){
            printf("无法购买，库存不足。\n如需要重新购买，则输入YES，如需要结束购买，则输入END。");
            scanf("%s",q);
        }else {
            printf("无法购买。请检查购买货物的种类所在通道是否正确。\n如需要重新购买，则输入YES，如需要结束购买，则输入END。");
            scanf("%s",q);
        }
        
    }
    if(strcmp(q,"END")!=0&&strcmp(q,"YES")!=0)
    {
        printf("输入错误！\n");
    }
    if(strcmp(q,"END")==0){
        printf("购买结束，总金额为%d元。\n请您投币支付（一次性只能投入1元，2元或者5元）",sum);
        printf("请输入第一次投币的金额：");
        int every;//每一次投币的金额
        int count=2;//投币的次数
        int total=0;//投币的总金额
        scanf("%d",&every);
        total=total+every;
        while(total<sum){
            printf("请输入第%d次投币的金额:",count);
            scanf("%d",&every);
            total=total+every;
            count++;
        }
        if(total==sum){
            printf("无需找零。\n期待您的下一次购买。");
        }else{
            printf("找您%d元。\n期待您的下一次购买。",total-sum);
        }
        
    }
    return 0;

}