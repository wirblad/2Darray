#include <stdio.h>

#define YEARS 5
#define MONTHS 12

#define YEAR_2018 0
#define YEAR_2019 1
#define YEAR_2020 2
#define YEAR_2021 3
#define YEAR_2022 4

#define JAN 0
#define FEB 1
#define MAR 2
#define APR 3
#define MAY 4
#define JUN 5
#define JUL 6
#define AUG 7
#define SEP 8
#define OKT 9
#define NOV 10
#define DEC 11


int main(){

    float tempReadings[YEARS][MONTHS];

    for(int year = 0; year < YEAR_2019+1; year++){

        printf("THE YEAR IS: %d\n", year);

        for(int month = 0; month < DEC+1 ; month++){

            printf("Enter average temp during month%d: ", month);
            scanf(" %f", &tempReadings[year][month]);

        }
    }

    float averageTotal = 0;
    float coldesEver = tempReadings[0][0];
    float warmesEver = tempReadings[0][0];


    for(int year = 0; year < YEAR_2019+1; year++){

        float averageTempPerYear = 0;
        float coldesTempPerYear = tempReadings[year][0];
        float wamestTempPerYear = tempReadings[year][0];

        for(int month = 0; month < DEC+1 ; month++){

            averageTempPerYear += tempReadings[year][month];
            if(tempReadings[year][month] < coldesTempPerYear)
                coldesTempPerYear = tempReadings[year][month];
            if(tempReadings[year][month] > wamestTempPerYear)
                wamestTempPerYear = tempReadings[year][month];
            

        }

        if(coldesTempPerYear < coldesEver)
            coldesEver = coldesTempPerYear;
        if(wamestTempPerYear > warmesEver)
            warmesEver = wamestTempPerYear;
        averageTotal += averageTempPerYear/MONTHS;

        printf("The average temp for year %d is %f.3\n", year, averageTempPerYear/MONTHS);
        printf("Coldes monthly temp for year %d is: %f\n", year, coldesTempPerYear);
        printf("Warmes monthly temp for year %d is: %f\n", year, wamestTempPerYear);

    }

    printf("Average temp for all years is: %f\n", averageTotal/YEARS);
    printf("Coldes temp ever is: %f\n", coldesEver);
    printf("Warmest temp ever is: %f\n", warmesEver);



    printf("KLART");
}