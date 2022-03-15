#include<stdio.h>
#include<stdlib.h>
int a[10],n,i,elem,pos;
void create()
{
    printf("\n enter the size of the array\n");
    scanf("%d",&n);
    printf("enetr the elements of an array\n");
    for(i=0;i<=n;i++)
    scanf("%d",a[i]);
}
void display()
{
    printf("the elements to be displayed are:\n");
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    {
    printf("%d\t",a[i]);
    }
}
void insert()
{
    printf("enetr rhe postion of the element\n");
    scanf("%d",&pos);
    printf("enetr the element to be inserted\n");
    scanf("%d",&elem);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i]
    }
    a[pos]=elem;
    n=n+1;
}
void del()
{
    printf("enter the postion to be deleted\n");
    scanf("%d",&pos);
    elem=a[pos];
    for(i=pos;i<n-1;i++)
    {
        a[i+1]=a[i]
    }
       n=n-1;
       printf("\n the element which is deleted is=%d",elem);

}
void main()
{
    int ch;
    do
    {
    printf("\n----------menu--------\n");
    printf("\n1.create\n2.display\n3.insert\n4.delete\n5.exit\n");
    printf("-----------");
    printf("enetr your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:create();
        break;
        case 2:display();
        break; 
        case 3:insert();
        break;
        case 4:del();
        break;
        case 5:exit(0);
        break;
        default:printf("\n invalid choice\n");
        break;
    }
    } 
    while(ch!=5);
    
    
}
