#include <stdio.h>
int main()
{
    int invst = 8500;           // investment
    int sp1 = 170, sp2 = 125;   // sp=share price
    int fval = 100;             // face value
    int sper1 = 10, sper2 = 12; // share percentage
    int pincr = 30;             // price incresed
    int salepro, dividend1, dividend2, newshares, shares, inchange;

    shares = invst / sp1;
    salepro = shares * (sp1 + pincr);
    newshares = salepro / sp2;

    dividend1 = shares * fval * sper1 / 100;
    dividend2 = newshares * fval * sper2 / 100;
    inchange = dividend2 - dividend1;

    printf("%d,%d,%d", salepro, newshares, inchange);

    return 0;
}
