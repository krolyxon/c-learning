#include <stdio.h>

int choice, celcius, fahrenheit;

void fah_to_cel() {
    printf("\nPlease enter the temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    printf("\nThe temperature in Celcius is: %f°C", (fahrenheit - 32)/1.8);
}

void cel_to_fah() {
    printf("\nPlease enter the temperature in Celcius: ");
    scanf("%d", &celcius);
    printf("\nThe temperature in Fahrenheit is: %f°F", (celcius * 1.8 ) + 32);
}

void fah_to_kel() {
    printf("\nPlease enter the temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    printf("\nThe temperature in kelvin is: %f°K", (fahrenheit + 459.67 ) * 5/9 );
}

void cel_to_kel() {
    printf("\nPlease enter the temperature in celcius: ");
    scanf("%d", &celcius);
    printf("\nThe temperature in kelvin is: %f°K", (celcius + 273.15 ));
}

int main()
{
    printf("\n[1] Convert Fahrenheit to Celcius");
    printf("\n[2] Convert Celcius to Fahrenheit");
    printf("\n[3] Convert Fahrenheit to Kelvin");
    printf("\n[4] Convert Celcius to Kelvin");

    printf("\nPlease choose a method from above: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: fah_to_cel(); break;
        case 2: cel_to_fah(); break;
        case 3: fah_to_kel(); break;
        case 4: cel_to_kel(); break;
    }
    printf("\n");
}
