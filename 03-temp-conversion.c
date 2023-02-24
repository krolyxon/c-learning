#include <stdio.h>

// Converting Fahrenheit to celcius
// 0 fahrenheit = -17.77 degree celcius
// therefore, celcius = ( fahrenheit - 32 ) * 5/9

void ftoc(float temp) {
    double tmp_in_celcius = (( temp - 32) * 5/9);
    printf("Conversion of %2.2f °F in Celcius is %2.2f °C", temp, tmp_in_celcius);
}

int main() {
    float temp;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &temp);
    ftoc(temp);
}
