// # include <stdio.h>
// # include <string.h>


// int main(){
//      char st1[30];
//      char st2[30];
//      printf("enter a world one by one");
//      for (int i = 0; i < 5; i++)
//      {
//          scanf(" %c",&st1[i]);
//              fflush(stdin);
        
//      }
//      st1[5]='\0';
//      for (int i = 0; i < 5; i++)
//      {
//         printf("%c",st1[i]);
//      }
//      printf("enter the same word as above");
//      scanf("%s",st2);

//      printf("%s",st2);
//      if (strcmp(st1,st2)==0){
//         printf("ENTERED WORDS ARE SAME ");
    
//      }
//      else {
//         printf("enter the same words ");
//      }
     
//      return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char st1[6];
    char st2[30];

    printf("Enter a 5-letter word (character by character):\n");
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &st1[i]); // SPACE before %c is CRITICAL to skip newline
        fflush(stdin);//fflush is used here because it will clear the charecter created when enter is typed hence it makes the code to run correctly
        
    }
    st1[5] = '\0'; // Null-terminate st1 to make it a valid string

    printf("Enter the same 5-letter word using string input: ");
    scanf("%s", st2); // This input is automatically null-terminated

    printf("st1 = %s\n", st1);
    printf("st2 = %s\n", st2);

    if (strcmp(st1, st2) == 0) {
        printf("✅ Both words are SAME.\n");
    } else {
        printf("❌ Words are DIFFERENT.\n");
    }

    return 0;
}

