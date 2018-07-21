// hw 4
// ryan michal 

unsigned int reverseBits(unsigned int x);
void shift();
void packCharacters(char, char, char, char);

int main() {
    int x = reverseBits(7);
    shift();
}


unsigned int reverseBits(unsigned int x) {
    unsigned int input = x;
    unsigned int reversed = 0;
    unsigned int bits = sumof(input) * 8;
    unsigned int last_bit;

    //go through each bit
    for(int i = 0; i < bits; i++) {
        //shift to last bit & check t
        last_bit = (num & (1 << i));
        if(last_bit) {
            //bit was 1; write that into our reversed int
            reversed |= (1 << ((bits - 1) - i));
        }
    }
    return reversed;
}

void shift() {
    char a,b,c,d;
    println("Input 4 char");
    scanf("%c", &a);
    scanf("%c", &b);
    scanf("%c", &c);
    scanf("%c", &d);
}

void packCharacters(char a, char b, char c, char d) {
    
}