#include <stdio.h>

void print_b(void *pointer, size_t size){
    unsigned long data = *((unsigned long*)pointer);
    int length = size*8;
    int counter = 0;
    printf("======\n");
    printf("十进制: %lu\n", data);
    printf("二进制: ");
    while(length-->0){
        printf("%lu", (data>>length)&0x1);
        counter++;
        if(counter%8==0){
            printf(" ");
        }
    }
    printf("\n======\n");
}

int main()
{
    int x;
    printf("请输入十进制数字: ");
    scanf("%d", &x);
    print_b(&x, sizeof(x));
    return 0;
}
