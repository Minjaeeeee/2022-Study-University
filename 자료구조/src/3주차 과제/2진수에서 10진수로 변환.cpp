//인터넷 자료
#include <math.h>
#include <stdio.h>


int convert(long long n);
int main() {
    long long n;
    printf("ÀÌÁø¼ö ÀÔ·Â: ");
    scanf("%lld", &n);
    printf("%lld  = %d \n", n, convert(n));
    return 0;
}
 
int convert(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

