# include <stdio.h>
typedef struct employee
{
    int salary;
    char name[30];

}em;

int main(){
     em e[2];
     printf("Enter each employees salary");
     for(int i=0 ; i<2;i++){
     if (scanf("%d",&e[i].salary)!=1){
     printf("enter the correct value");
     return 1 ;
     }}
     printf("Enter the name of each person ");
     for (int i = 0; i < 2; i++)
     {
        scanf("%s",e[i].name);
     }
     FILE*ptr;
     ptr=fopen("read23.txt","w");
     for (int i = 0; i < 2; i++)
     {
         
         fprintf(ptr,"%s",e[i].name);
         fprintf(ptr,"%s"," ,");
         fprintf(ptr,"%d",e[i].salary);
         fprintf(ptr,"%c",'\n');
         
        }

     
     return 0;
}