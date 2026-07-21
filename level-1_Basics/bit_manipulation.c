#include<stdio.h>

int main()

{

    int reg = 00001111; // Example register value

    //set bit 
    reg = reg | (1<<3); // 1<<3,(00001000)
    printf("%d\n",reg);
    //clear bit
    reg = reg & ~(1<<3);// ~(00001000) = 11110111
    printf("%d\n",reg);
    //toggle bit
    reg = reg ^ (1<<3);// 00001111 ^ 00001000 = 00000111
    printf("%d\n",reg);
    //check bit
    reg = reg & (1<<3)!= 0;// 00001111 & 00001000 = 00001000 != 0, so it will return 1 (true)
    printf("%d\n",reg);
    return 0;
}