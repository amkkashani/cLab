#include <stdio.h>
#include <stdlib.h>
typedef struct loop{
    int price;
    int chiz;
}t1;
typedef struct nn{
    int price;
    int miz;
}t2;


int main()
{
   // void* test[];
    printf("%d\n",sizeof(void*));
    void* test[12];
    t2 x1;
    x1.price = 5;
    t1 x2;
    x2.price = 8;
    test[0] = &x1;
    test[1] = &x2;
    printf("x1 = %d  , x2 = %d ")
    //test = malloc(sizeof(void*));
    printf("Hello world!\n");
    return 0;
}
