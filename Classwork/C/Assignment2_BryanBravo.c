//Bryan Bravo
//PantherID: 6059483
//Date:2/1/2022
//Assignment 2 :Functions

#include <stdio.h>

//Function to calculate the age of individual through the present date and birthdate.
void calculate_age (int present_day, int present_month, int present_year, int birth_day, int birth_month, int birth_year) {
    //Array below displaying the days each month holds for 2022
    int  months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
//Printf and scanf lines which should display when running asking the user for the input.
//Current date: 2 1 2022
//Birth date: 12 22 1998
        printf("\nEnter Current Date (MM DD YY): \n");
            scanf("%d %d %d", &present_month, &present_day, &present_year);
        printf("\nEnter Your Birth Date (MM DD YY): \n");
            scanf("%d %d %d", &birth_month, &birth_day, &birth_year);

        if (birth_day > present_day) {
            present_day = present_day + months[birth_month - 1];
            present_month = present_month - 1;
        }
       
        if (birth_month > present_month) {
            present_year = present_year - 1;
            present_month = present_month + 12;
        }
//Simple Caclculations and printf statement for what the individuals age is in years, months, and days.
    int result_day = present_day - birth_day;
    int result_month = present_month - birth_month;
    int result_year = present_year - birth_year;
        printf("\nYour age is %d years %d months %d days!\n",result_year,result_month,result_day);
       
}

//Main function.
void main () {
    int present_day = 0;
    int present_month = 0;
    int present_year = 0;
    int birth_day = 0;
    int birth_month= 0;
    int birth_year = 0;
    calculate_age(present_day,present_month,present_year,birth_day,birth_month,birth_year);
   
        return;
}


