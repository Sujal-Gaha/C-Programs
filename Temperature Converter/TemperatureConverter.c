#include <stdio.h>
#include <ctype.h>

int main(){
    
    char inunit,outunit;
    float intemp,outtemp;

    //Prompt the user to input temperature unit
    printf("\nIs your temperature in (F) , (C) or (K)?: ");
    scanf("%c", &inunit);

    //Convert the input unit to uppercase for consistency
    inunit = toupper(inunit);

    if(inunit == 'F'){
        //If the input unit is in Fahrenheit
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &intemp);

        //Prompt the user for their desired output unit
        printf("\nChoose the unit (C) or (K) to convert to: ");
        scanf(" %c", &outunit);

        //Convert the output unit to uppercase for consistency
        outunit = toupper(outunit);

        switch(outunit){
            case 'C':
                //To convert from Fahrenheit to Celsius
                outtemp = (((intemp - 32.00) * 5.00) / 9.00);
                printf("\nThe temperature in Celsius is %.2f", outtemp);
                break;
            case 'K':
                //To convert from Fahrenheit to Kelvin
                outtemp = (((intemp - 32.00) * 5.00) / 9.00) + 273.15;
                printf("\nThe temperature in Kelvin is %.2f", outtemp);
                break;
            default:
                printf("\nINVALID OPERATION!!!");
        }
    }
    else if(inunit == 'C'){
        //If the input unit is in Celsius
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &intemp);

        //Prompt the user for their desired output unit
        printf("\nChoose the unit (F) or (K) to convert to: ");
        scanf(" %c", &outunit);

        //Convert the output unit to uppercase for consistency
        outunit = toupper(outunit);

        switch(outunit){
            case 'F':
                //To convert from Celsius to Fahrenheit
                outtemp = ((intemp * (9.00 / 5.00)) + 32.00);
                printf("\nThe temperature in Fahrenheit is %.2f", outtemp);
                break;
            case 'K':
                //To convert from Celsius to Kelvin
                outtemp = (intemp + 273.15);
                printf("\nThe temperature in Kelvin is %.2f", outtemp);
                break;
            default:
                printf("\nINVALID OPERATION!!!");
        }
    }
    else if(inunit == 'K'){
        //If the input unit is in Kelvin
        printf("\nEnter the temperature in Kelvin: ");
        scanf("%f", &intemp);

        //Prompt the user for their desired output unit
        printf("\nChoose the unit (F) or (C) to convert to: ");
        scanf(" %c", &outunit);

        //Convert the output unit to uppercase for consistency
        outunit = toupper(outunit);

        switch(outunit){
            case 'F':
                //To convert from Kelvin to Fahrenheit
                outtemp = (((intemp - 273.15) * (9.00 / 5.00)) + 32.00);
                printf("\nThe temperature in Fahrenheit is %.2f", outtemp);
                break;
            case 'C':
                //To convert from Kelvin to Celsius
                outtemp = (intemp - 273.15);
                printf("\nThe temperature in Kelvin is %.2f", outtemp);
                break;
            default:
                printf("\nINVALID OPERATION!!!");
        }
    }
    else{
        //For invalid entry
        printf("\nINVALID OPERATION!!!");
    }
    return 0;
}