#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main() {
float x, a, hx = 1.3, ha = 1.3;
float x0 = 1.0, x1 = 3.0;
float a0 = 2.0, a1 = 4.0;
float Z, U;

for (float xn = x0; xn <= x1; xn += hx){
    for (float an = a0; an <= a1; an += ha){
        U = fminf(tanf(an / xn), xn * pow(sinf(an), 2));
        Z = fminf(an * sqrtf(U), sinf(an) / xn);
        printf("x = %f a = %f Z = %f\n",xn ,an, Z);
    }
}
}