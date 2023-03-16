//Bryan Bravo
//Date:2/23/2022
//Assignment 4
#include <stdio.h>

//STD 2 , EXM 3 used in HW Problem while HW says assume STD is 5 and EXM is 4.

#define STD 2
#define EXM 3

//Function for input of student grades of exams.
void input(float (*x)[EXM]) {

    for(int i = 0; i < STD; i++) {
    
    for(int j = 0; j < EXM; j++) {
        printf("\nEnter grades for Exam %d of Student %d: ",j+1,i+1); 
        scanf("%f",*(x+i)+j);
        //printf("\nStudent: %d, grades for Exam %d is:",i+1,j+1); 
        //scanf("\n%f",*(x+i)+j);
    }
    
    }
}
//Function for Student Average Below contains calculations for Student Average
void calculate_stdavg(float (*x)[EXM],float *stdavg) {
    //For loops going through every iteration.
    for(int i = 0; i < STD; i++) {
        
          *(stdavg+i) = 0.0; 
    for(int j = 0; j < EXM; j++) {
       
        *(stdavg+i) += *(*(x+i)+j);
        
        }
        
        *(stdavg+i) = *(stdavg+i)/EXM;        
    }

}
//Function for Exam Average Below contains calculations for Exam Average
void calculate_exmavg(float (*x)[EXM], float *exmavg) {
    for(int i = 0; i < EXM; i++) {
        *(exmavg+i) = 0.0;
    for(int j = 0; j < STD; j++) {
        
    *(exmavg + i) += *(*(x + j) + i);
        
    }
    *(exmavg+i) = *(exmavg + i)/STD;
    }
}

//Function for display contains printf statements about average scores
void display(float (*x)[EXM],float *stdavg, float *exmavg) {
    for(int i = 0; i < STD; i++) {
    
    for(int j = 0; j < EXM; j++) {
        printf("\nStudent: %d, grades for Exam %d is: ",i+1,j+1); 
        scanf("\n%f",*(x+i)+j);
        
    
}
printf("Student %d Average grades are: %.2f \n",i+1,*(stdavg + i));
}
    for(int i = 0; i < EXM; i++) {
    printf("\nAverage of Exam %d is %.2f\n",i+1,exmavg[i]);

}
}

void main() {
        float grades[STD][EXM];
        float stdavg[STD], exmavg[EXM];
        input(grades);
        calculate_stdavg(grades,stdavg);
        calculate_exmavg(grades,exmavg);
        display(grades,stdavg,exmavg);
        
    
    
}


