#include<stdio.h>

void _print_rev_recursion(char *s);


int main() {
   
   
    _print_rev_recursion("Puts with recursion");
  
	printf("\n");

    return (0);
}


 void _print_rev_recursion(char *s)
{
      int i;
   
      i = 0;
       while(s[i] != '\0')
            i++;
       
         while(i >= 0)
         {
            printf("%c", s[i]);
            i--;
         }
}
