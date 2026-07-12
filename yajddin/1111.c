/*
the first：
先定义数组cost
for循环i的值（比如i=4,则循环进行四次）
在循环中嵌套if判断（失败！）
/*先定义数组cost
for循环i的值（比如i=4,则循环进行四次）
在循环中嵌套if判断
#include <stdio.h>
int main()
{
    int cost[]={1,2,3};
    int temp;
    int temp1;
    int sum=0;
    if(cost[0]<cost[1])
    {
        cost[1]=temp;
        if(cost[0]<cost[2])
        {
        cost[2]=temp1;
        }
        else
        {
            cost[0]=temp1;
        }
    }
    else if(cost[0]>cost[1])
    {
        cost[0]=temp;
        if(cost[1]<cost[2])
        {
            cost[2]=temp1;
        }
        else
        {
            cost[1]=temp1;
        }
    }
    printf("%d+%d=%d",temp,temp1,sum);
    return 0;
}

the second：
重新整理一下思路（参考了一下冒泡排序的逻辑）：
定义一个void函数
使用for循环嵌套for循环
最后使用if语句进行判断
再将大的数放入temp中（失败！！）
the third：
冒泡排序的思路大概率没错，只不过需要更改
因为是以三个为一组，所以在冒泡排序后第三个就是免费的
将他们排序后，需要函数来进行分组（目前还没想好怎么分）
分组之后用if去掉那个最后的数



*/
#include <stdio.h>
void money(int cost[],int len);

int main()
{
    int i;
    int cost[5]={};
    int len;
    int sum=0;
    scanf("%d",cost[5]);
    len=sizeof(cost)/sizeof(cost[0]);
    money(cost,len);//最后的printf因为逻辑不通，更换思路的时候删掉了
    return 0;
}
void money(int cost[],int len)
{
    int i,j,temp;
    for(i=0;i<=len-1;i++)
    {
        for(j=0;j<=len-1;j++)
        {
            if(cost[j]>cost[j+1])
            {
                cost[j]=temp;
                cost[j]=cost[j+1];
                cost[j+1]=temp;
            }
        }
    }
}