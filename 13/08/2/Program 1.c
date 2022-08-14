#include <stdio.h>

int main() {
  int i,j;
  char ch1='A';
  char ch2='a';
  for(i=1;i<=5;i++)
  { 
      for(j=1;j<=i;j++)
      {
          printf("%c %c",ch1,ch2);
          ch1++;
          ch2++;
          
      }
        printf("\n");
  }
    return 0;
}
