#include <stdio.h>

int main(void)
{
    int c  = 0;
    int nb = 0;
    while ((c = getchar()) != EOF){
        if (c == ' ')
            nb++;
        else{
            nb = 0;
            putchar(c);
            //printf("%c", c);
        }
        if (nb == 1)
            printf(" ");
    }
    return 0;
}

/* --- Another solution 1---
int main(void)
{
    int c;
    int inspace;

    inspace = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            if(inspace == 0){
                inspace = 1;
                putchar(c);
            }
        }
                   //We haven't met 'else' yet, so we have to be a little clumsy.
        if(c != ' '){
            inspace = 0;
            putchar(c);
        }
    }
    return 0;
}
*/

//上一个程序也可以不用设置boolen类型的flag，看下面一种解决方法：
/* --- Another solution 2---
int
main()
{
        int c, pc;     //c = character, pc = previous character

        //set pc to a value that wouldn't match any character, in case
        //this program is ever modified to get rid of multiples of other
        //characters

        pc = EOF;

        while ((c = getchar()) != EOF) {
                if (c == ' ')
                        if (pc != ' ')   // or if (pc != c)
                                putchar(c);

                //We haven't met 'else' yet, so we have to be a little clumsy.
                if (c != ' ')
                        putchar(c);
                pc = c;
        }

        return 0;
}
*/

//使用break的话。。。
/* ---Another solution 3---
int main(void)
{
        int c;
        while ((c = getchar()) != EOF) {
                if (c == ' ') {
                       putchar(c);
                       while((c = getchar()) == ' ' && c != EOF)
                               ;
               }
               if (c == EOF)
                       break;  // the break keyword is mentioned
                               // in the introduction...

               putchar(c);
        }
        return 0;
}
*/
