#include <stdio.h>

struct employee{
	
        int emp_id;
        char *name;
        char *address;
        int contact;
        int day;
        int month;
        int year;
        char *position;
    };

int main(){
	
    struct employee emp[10];

    int i;
    
    	for(i=0;i<10;i++){
    		
   		//Employee Specification
	        printf("\n<< Employee Number %d >> \n",i+1);
	
	        printf("emp_id:- ");
	        scanf("%d", &emp[i].emp_id);
	
	        printf("name:- ");
	        scanf("%s", &emp[i].name);
	
	        printf("address:- ");
	        scanf("%s", &emp[i].address);
	
	        printf("contact:- ");
	        scanf("%d", &emp[i].contact);
	
	        printf("date_of_joined (in dd/mm/yy type):- ");
	        scanf("%d/%d/%d", &emp[i].day, &emp[i].month, &emp[i].year);
	
	        printf("position:- ");
	        scanf("%s", &emp[i].position);
    	}

    return 0;
}