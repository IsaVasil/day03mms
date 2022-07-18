#include <stdio.h>
#define os 1
#define debug
int main(){

    #ifdef debug
printf("dasdfs");
#endif
    #if os==1
    printf("hello");

    #elif os==2

    printf("bye");


    #if 1
   
    printf("hello");
    #else 
    printf("bye");
    #endif
    return 0;
}