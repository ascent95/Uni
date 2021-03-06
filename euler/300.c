#include <stdio.h>

int test(unsigned int a) {
    int tmp = 0;
    int bit = 0;
    while (bit < 32) {
        if (tmp == 1) {
            if (a & 0x01) return 0;
            else tmp = 0;
        }
        else if (a & 0x01) tmp = 1;
        a = a >> 1;
        bit++;
    }
    return 1;
}

int main(void) {
    unsigned int i;
    unsigned int count = 0;
    /*for (i = 10; i <= 13; i++) { //0x40000000
        if (test(i)) count++;
    }*/
    printf("The number of integers for which the nim-sum is 0 is: %d\n", test(0x40030000));
    return 0;
}
