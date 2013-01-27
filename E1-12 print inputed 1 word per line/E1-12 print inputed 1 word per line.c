#include <stdio.h>
//#define IN  1
//#define OUT 0

/* Exercise 1-12 Write a program that prints its input one word per line.  */
int main(void)
{

    int c;

/* ---My first solution, which prints a new-line before every new word. Not a pretty way.---
    int state = OUT;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            putchar('\n');
            putchar(c);
        }
        else
            putchar(c);
    }
*/

/* ---My second solution, which insert a new-line when detecting the first space between  every 2 words--- */
    int space = 0;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c== '\n' || c == '\t'){
            space++;
            if (space == 1)
                putchar('\n');
        }
        else{
            space = 0;
            putchar(c);
        }
    }
      return 0;
}

/* ---Another Solution---
int main(void)
{
  int c;
  int inspace;

  inspace = 0;
  while((c = getchar()) != EOF)
  {
    if(c == ' ' || c == '\t' || c == '\n')
    {
      if(inspace == 0)
      {
        inspace = 1;
        putchar('\n');
      }
      // else, don't print anything
    }
    else
    {
      inspace = 0;
      putchar(c);
    }
  }
  return 0;
}
*/
