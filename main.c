#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	
	int ID	;
	char name[10];
	double grade;
};

int main(int argc, char *argv[]) {
	
	struct student s1 = {123456, "SHINYEON", 4.3};
	
	s1.ID = 456123;
	s1.grade = 4.5;
	
	printf("ID : %d, NAME : %s, GRADE : %f\n", s1.ID, s1.name, s1.grade);
	return 0;
}
