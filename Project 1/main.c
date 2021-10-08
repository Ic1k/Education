#include <stdio.h>

int main() {
    int list[1000];
    int z = 0;
    int sumnum;
    double allsum = 0;
    double allsum17 = 0;
    for (int i = 0; i < 1000; i++)
        if((i % 2) != 0) {
            list[z] = i * i * i;
            z++;
        }
    for (int i = 0; i < z; i++) {
        sumnum = 0;
        for (int num = list[i]; num > 0;) {
            if (num > 9)
                sumnum += num % 10;
            else
                sumnum += num;
            num = num / 10;
        }
        if(sumnum % 7 == 0)
            allsum += list[i];
    }
    for (int i = 0; i < z; i++) {
        sumnum = 0;
        for (int num = (list[i] + 0.17) * 100; num > 0;) {
            if (num > 9)
                sumnum += num % 10;
            else
                sumnum += num;
            num = num / 10;
        }
        if(sumnum % 7 == 0)
            allsum17 += list[i];
    }
    printf("%.lf %.lf", allsum, allsum17);
    return 0;
}
