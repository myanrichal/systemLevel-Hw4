// hw 4
// ryan michal

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int reverseBits(unsigned int x);
void shift();
unsigned int int_to_int(unsigned int k);

int main() {
    int x = reverseBits(7);
    printf("Reversed input: %d", x);
    shift();
}


unsigned int reverseBits(unsigned int x) {
    unsigned int input = x;
    unsigned int reversed = 0;
    unsigned int bits = log2(input)+1 ;
    unsigned int last_bit;

    //go through each bit
    for(int i = 0; i < bits; i++) {
        //shift to last bit & check t
        last_bit = (input & (1 << i));
        if(last_bit) {
            //bit was 1; write that into our reversed int
            reversed |= (1 << ((bits - 1) - i));
        }
    }
    return reversed;
}

unsigned int reverseBits(unsigned int input) {
    unsigned int x = 0;

    while(input > 0) {
        x<<=1;
        if(input & 1 == 1) {
            x ^= 1;
        }
        input >>= 1;
    }
    return x;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void shift();
unsigned int int_to_int(unsigned int k);

int main()
{
    printf("Hello World\n");
    shift();

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



void shift()
{

    printf("lets smoosh characters together");
    unsigned int product = 0;
    unsigned int a = 'a';
    unsigned int b = 'b';
    unsigned int c = 'c';
    unsigned int d = 'd';

    printf("%c %d %d\n", a, a, int_to_int(a));
    printf("%c %d %d\n", b, b, int_to_int(b));
    printf("%c %d %d\n", c, c, int_to_int(c));
    printf("%c %d %d\n", d, d, int_to_int(d));

    product = product | a;
    product = product << 8;

    product = product | b;
    product = product << 8;

    product = product | c;
    product = product << 8;

    product = product | d;

    printf("\n%c%c%c%c =  %d", a, b, c, d, product);
}

/* Credit for int_to_int
    https://stackoverflow.com/questions/5488377/converting-an-integer-to-binary-in-c?rq=1
*/
unsigned int int_to_int(unsigned int k)
{
    return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_int(k / 2)));
}