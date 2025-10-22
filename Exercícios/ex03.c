#include <stdio.h>
#include <stdlib.h>

int main()
{
    char d_1[4], d_2[4];
    int d1, h1, m1, s1, d2, h2, m2, s2, tot_s;
    //Dia 1
    scanf("%s %d", d_1, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    //Dia 2
    scanf("%s %d", d_2, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    d1 *= 86400;
    h1 *= 3600;
    m1 *= 60;
    d2 *= 86400;
    h2 *= 3600;
    m2 *= 60;
    tot_s = abs((d1+h1+m1+s1)-(d2+h2+m2+s2));
    printf("%d dia(s)\n", tot_s/86400);
    tot_s %= 86400;
    printf("%d hora(s)\n", tot_s/3600);
    tot_s %= 3600;
    printf("%d minuto(s)\n", tot_s/60);
    tot_s %= 60;
    printf("%d segundo(s)\n", tot_s);
    return 0;
}
