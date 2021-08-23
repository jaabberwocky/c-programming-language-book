#include <stdio.h>

int main() {
    float lower, upper, step, celsius, fahr;
    
    lower = 0;
    upper = 200;
    step = 20;

    printf("%3s %6s\n", "C", "F");
    for (celsius = upper ; celsius >= lower; celsius = step) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
    }
}