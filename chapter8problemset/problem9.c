# include <stdio.h>
# include <string.h>
void check(char st[]){
    
    int a =strlen(st);
    char s;
    printf("ENter the charcter you want to check weather it is there or not ");
    getchar();
    scanf("%c",&s);
    for (int i = 0; i < a;   i++)
    {
    if (st[i]==s){
        printf("The charecter %c is present in the given string",s);
        break;
    }

    }
    
}
int main(){
    char st[30];

    printf("Enter the name");
    scanf("%s",st);
    check(st);
     
     return 0;
}