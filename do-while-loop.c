#include <stdio.h>
 
int main () {

   /* local variable definition */
   int intVar = 10;

   /* do loop execution */
   do {
      printf("value of intVar: %d\n", intVar);
      intVar = intVar + 1;
   }while( intVar < 20 );
 
   return 0;
}
