# include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
}da;
void compare(da d1,da d2){
    if (d1.year>d2.year)
    {
        printf("d2 date comes before d1");
        return;
    }
    
    else if (d1.year==d2.year && d1.month>d2.month)
    {
        printf("d2 date comes before d1");
        return;
    }
    else if (d1.year==d2.year&&d1.month==d2.month&&d1.day>d2.day)
    {
        printf("d2 date comes before d1");
        return;
    }
    else if (d1.year==d2.year &&d1.month==d2.month&&d1.day==d2.day){
        printf("both are same day");
    }
    else{
        printf("d1 date comes before d2");
    }
    
    
}

int main(){
    da d[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter d[%d] day ",i);
        if (scanf("%d",&d[i].day)!=1){
        printf("enter the correct value");
        return 1 ;
        }
        printf("enter d[%d] month ",i);
        if (scanf("%d",&d[i].month)!=1){
        printf("enter the correct value");
        return 1 ;
        }
        printf("enter d[%d] year ",i);
        if (scanf("%d",&d[i].year)!=1){
        printf("enter the correct value");
        return 1 ;
        }
    }
    printf("d1 %d / %d / %d \n",d[0].day,d[0].month,d[0].year);
    printf("d2 %d / %d / %d \n",d[1].day,d[1].month,d[1].year);
    compare (d[0],d[1]);
     
     return 0;
}