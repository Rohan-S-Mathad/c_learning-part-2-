# include <stdio.h>
# include <string.h>

int main(){
     char st[30];
     scanf("%s",st);
     for (int i = 0; i < strlen(st); i++)
     {
        st[i]=st[i]-1;
     }
     printf("%s",st);
     
     return 0;
}