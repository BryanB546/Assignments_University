//I Certify that the code below was created by me (Bryan Bravo) 
//Panther ID: 6059483
//On the date of January 22 2022.
//Assignment 1 : Control Structures
#include <stdio.h>
void main() {

	char code;
	//Salary Numbers.
	int s1 = 5000;
	int s2 = 4800;
	int s3 = 3950;
	int s4 = 3100;
	int s5 = 2800;
	int s6 = 1450;
	int s7 = 1770;
	//Below is calculations for House Rent.
	float house1 = s1*0.25;
	float house2 = s2*0.25;
	float house3 = s3*0.25;
	float house4 = s4*0.25;
	float house5 = s5*0.25;
	float house6 = s6*0.25;
	float house7 = s7*0.25;
	
	//Below are calculations for Medical.
	float Med1 = s1 *0.085;
	float Med2 = s2 *0.085;
	float Med3 = s3 *0.085;
	float Med4 = s4 *0.085;
	float Med5 = s5 *0.085;
	float Med6 = s6 *0.085;
	float Med7 = s7 *0.085;
	//Below are calculations for Monthly Milage.
	float Mil1 = s1 * 0.037;
	float Mil2 = s2 * 0.037;
	float Mil3 = s3 * 0.037;
	float Mil4 = s4 * 0.037;
	float Mil5 = s5 * 0.037;
	float Mil6 = s6 * 0.037;
	float Mil7 = s7 * 0.037;
	
	//Below are calculations for Utilities.
	float Utils1 = s1 * 0.072;
	float Utils2 = s2 * 0.072;
	float Utils3 = s3 * 0.072;
	float Utils4 = s4 * 0.072;
	float Utils5 = s5 * 0.072;
	float Utils6 = s6 * 0.072;
	float Utils7 = s7 * 0.072;
	
	//Calculations for Gross.
	float Gross1 = s1 + house1 + Med1 + Mil1 + Utils1;
	float Gross2 = s2 + house2 + Med2 + Mil2 + Utils2;
	float Gross3 = s3 + house3 + Med3 + Mil3 + Utils3;
	float Gross4 = s4 + house4 + Med4 + Mil4 + Utils4;
	float Gross5 = s5 + house5 + Med5 + Mil5 + Utils5;
	float Gross6 = s6 + house6 + Med6 + Mil6 + Utils6;
	float Gross7 = s7 + house7 + Med7 + Mil7 + Utils7;
	
	//Calculation for Tax.
	float Tresult = 0;
	
	printf("Enter a Code (C,D,M,S,T,R,B): ");
	scanf("%c", &code);
	
	printf("\nSALARY INFORMATION\n");
	printf("\n==================\n");
	switch(code) {
	
	//Case C
	case 'C':
		printf("\nDesignation: Chief Executive Officer\n");
		printf("\nBasic Salary:\t\t\t\t%d\n",s1);
		printf("\nHouse Rent Allowance:\t\t\t%.2f \n",house1);
		printf("\nMedical Allowance:\t\t\t%.2f\n",Med1);
		printf("\nMonthly Milage Allowance:\t\t%.2f\n",Mil1);
		printf("\nUtilities Allowance:\t\t\t%.2f\n",Utils1);
		printf("\nGross Salary:\t\t\t\t%.2f\n",Gross1);
		
			//Calculations for Income Tax Below using if and else statements:
		if(Gross1>5500) {
		    Tresult = Gross1 * 0.14;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		    printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross1 - Tresult);
		}
		else if(Gross1>5000) {
		        Tresult = Gross1 * 0.12;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross1 - Tresult);
		    }
		    else if (Gross1>4500) {
		        Tresult = Gross1 * 0.10;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross1 - Tresult);
		    }
		    else if (Gross1>4000) {
		        Tresult = Gross1 * 0.08;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross1 - Tresult);
		    }
		    else if (Gross1<4000) {
		        Tresult = Gross1 * 0.06;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross1 - Tresult);
		    }
		break;
		
		
	case 'D':
		printf("\nDesignation: Chief Data Officer\n");
		printf("\nBasic Salary:\t\t\t\t%d\n",s2);
		printf("\nHouse Rent Allowance:\t\t\t%.2f \n",house2);
		printf("\nMedical Allowance:\t\t\t%.2f\n",Med2);
		printf("\nMonthly Milage Allowance:\t\t%.2f\n",Mil2);
		printf("\nUtilities Allowance:\t\t\t%.2f\n",Utils2);
		printf("\nGross Salary:\t\t\t\t%.2f\n",Gross2);
		
			//Calculations for Income Tax Below using if and else statements:
		if(Gross2 >5500) {
		    Tresult = Gross2 * 0.14;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		    printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross2 - Tresult);
		}
		else if(Gross2>5000) {
		        Tresult = Gross2 * 0.12;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross2 - Tresult);
		    }
		    else if (Gross2>4500) {
		        Tresult = Gross2 * 0.10;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross2 - Tresult);
		    }
		    else if (Gross2>4000) {
		        Tresult = Gross4 * 0.08;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross2 - Tresult);
		    }
		    else if (Gross2<4000) {
		        Tresult = Gross2 * 0.06;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross2 - Tresult);
		    }
		break;
		
		
	case 'M':
		printf("\nDesignation: General Manager\n");
		printf("\nBasic Salary:\t\t\t\t%d\n",s3);
		printf("\nHouse Rent Allowance:\t\t\t%.2f \n",house3);
		printf("\nMedical Allowance:\t\t\t%.2f\n",Med3);
		printf("\nMonthly Milage Allowance:\t\t%.2f\n",Mil3);
		printf("\nUtilities Allowance:\t\t\t%.2f\n",Utils3);
		printf("\nGross Salary:\t\t\t\t%.2f\n",Gross3);
		
	//Calculations for Income Tax Below using if and else statements:
		if(Gross3>5500) {
		    Tresult = Gross3 * 0.14;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		    printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross3 - Tresult);
		}
		else if(Gross3>5000) {
		        Tresult = Gross3 * 0.12;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross3 - Tresult);
		    }
		    else if (Gross3>4500) {
		        Tresult = Gross3 * 0.10;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross3 - Tresult);
		    }
		    else if (Gross3>4000) {
		        Tresult = Gross3 * 0.08;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross3 - Tresult);
		    }
		    else if (Gross3<4000) {
		        Tresult = Gross3 * 0.06;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross3 - Tresult);
		    }
		break;
		
		
	case 'S':
		printf("\nDesignation: Security Manager\n");
		printf("\nBasic Salary:\t\t\t\t%d\n",s4);
		printf("\nHouse Rent Allowance:\t\t\t%.2f \n",house4);
		printf("\nMedical Allowance:\t\t\t%.2f\n",Med4);
		printf("\nMonthly Milage Allowance:\t\t%.2f\n",Mil4);
		printf("\nUtilities Allowance:\t\t\t%.2f\n",Utils4);
		printf("\nGross Salary:\t\t\t\t%.2f\n",Gross4);
		
		//Calculations for Income Tax Below using if and else statements:
		if(Gross4>5500) {
		    Tresult = Gross4 * 0.14;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		    printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross4 - Tresult);
		}
		else if(Gross4>5000) {
		        Tresult = Gross4 * 0.12;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross4 - Tresult);
		    }
		    else if (Gross4>4500) {
		        Tresult = Gross4 * 0.10;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross4 - Tresult);
		    }
		    else if (Gross4>4000) {
		        Tresult = Gross4 * 0.08;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross4 - Tresult);
		    }
		    else if (Gross4<4000) {
		        Tresult = Gross4 * 0.06;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross4 - Tresult);
		    }
		break;
		
		
	case 'T':
		printf("\nDesignation: Technician\n");
		printf("\nBasic Salary:\t\t\t\t%d\n",s5);
		printf("\nHouse Rent Allowance:\t\t\t%.2f \n",house5);
		printf("\nMedical Allowance:\t\t\t%.2f\n",Med5);
		printf("\nMonthly Milage Allowance:\t\t%.2f\n",Mil5);
		printf("\nUtilities Allowance:\t\t\t%.2f\n",Utils5);
		printf("\nGross Salary:\t\t\t\t%.2f\n",Gross5);
		
		//Calculations for Income Tax Below using if and else statements:
		if(Gross5>5500) {
		    Tresult = Gross5 * 0.14;
		    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		    printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross5 - Tresult);
		}
		else if(Gross5>5000) {
		        Tresult = Gross5 * 0.12;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross5 - Tresult);
		    }
		    else if (Gross5>4500) {
		        Tresult = Gross5 * 0.10;
		        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross5 - Tresult);
		    }
		    else if (Gross5>4000) {
		        Tresult = Gross5 * 0.08;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross5 - Tresult);
		    }
		    else if (Gross5<4000) {
		        Tresult = Gross5 * 0.06;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross5 - Tresult);
		    }
		break;
		
		
	case 'R':
		printf("\nDesignation: Receptionist\n");
		printf("\nBasic Salary:\t\t\t\t%d\n",s6);
		printf("\nHouse Rent Allowance:\t\t\t%.2f \n",house6);
		printf("\nMedical Allowance:\t\t\t%.2f\n",Med6);
		printf("\nMonthly Milage Allowance:\t\t%.2f\n",Mil6);
		printf("\nUtilities Allowance:\t\t\t%.2f\n",Utils6);
		printf("\nGross Salary:\t\t\t\t%.2f\n",Gross6);
		
		//Calculations for Income Tax Below using if and else statements:
		if(Gross6>5500) {
		    Tresult = Gross6 * 0.14;
			printf("Income Tax:\t\t\t\t%.2f",Tresult);
		    printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross6 - Tresult);
		}
		else if(Gross6>5000) {
		        Tresult = Gross6 * 0.12;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross6 - Tresult);
		    }
		    else if (Gross6>4500) {
		        Tresult = Gross6 * 0.10;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross6 - Tresult);
		    }
		    else if (Gross6>4000) {
		        Tresult = Gross6 * 0.08;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross6 - Tresult);
		    }
		    else if (Gross6<4000) {
		        Tresult = Gross6 * 0.06;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross6 - Tresult);
		    }
		break;
		
	case 'B':
		printf("\nDesignation: Buisness Relations Manager\n");
		printf("\nBasic Salary:\t\t\t\t%d\n",s7);
		printf("\nHouse Rent Allowance:\t\t\t%.2f \n",house7);
		printf("\nMedical Allowance:\t\t\t%.2f\n",Med7);
		printf("\nMonthly Milage Allowance:\t\t%.2f\n",Mil7);
		printf("\nUtilities Allowance:\t\t\t%.2f\n",Utils7);
		printf("\nGross Salary:\t\t\t\t%.2f\n",Gross7);
		
		//Calculations for Income Tax Below using if and else statements:
		if(Gross7>5500) {
		    Tresult = Gross7 * 0.14;
	        printf("Income Tax:\t\t\t\t%.2f",Tresult);
		    printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross7 - Tresult);
		}
		else if(Gross7>5000) {
		        Tresult = Gross7 * 0.12;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross7 - Tresult);
		    }
		    else if (Gross7>4500) {
		        Tresult = Gross7 * 0.10;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross7 - Tresult);
		    }
		    else if (Gross7>4000) {
		        Tresult = Gross7 * 0.08;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross7 - Tresult);
		    }
		    else if (Gross7<4000) {
		        Tresult = Gross7 * 0.06;
			    printf("Income Tax:\t\t\t\t%.2f",Tresult);
		        printf("\nNet Payable Salary:\t\t\t%.2f\n",Gross7 - Tresult);
		    }
		
		break;
	default:
	printf("\nCode was not executed correctly please check that the correct character is inserted.\n");
}
	return;
}
