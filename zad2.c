#include <stdio.h>
#define setbit(mask,bit)(mask|=(1ull<<(bit)))
#define clearbit(mask,bit)(mask &= ~(1ull << (bit)))
#define checkbit(mask,bit)(!!(mask & (1ull << (bit))))
#define flipbit(mask,bit)(mask ^= (1ull << (bit)))
#define bool char
#define true 1
#define false 0
#define printname(name) printf("name %s",#name)
#define printnum (num) printf("%s=%d",#num num)
#define printint (n) printf("%d",num##n)


int main(){
int mask;
int num1=20, num2=30,num3=56,num4=100;
for (int i=0; i<10;i++){
printnum(i)

}

    return 0;
}