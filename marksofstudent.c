/*

A student needs to enter his marks of all subjects, each subject carries 100 marks he needs to calculate his percentage and total marks and need to know his grading according to his percentage 


*/
#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;
    
    //printf("Enter marks of 5 subjects:\n");
    
    // read marks for each subject from the user
    for(int i=0; i<5; i++) {
        //printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        
        // add marks to total
        total += marks[i];
    }
    
    // calculate percentage
    percentage = (float)total/500 * 100;
    
    printf("Total marks %d\n", total);
    printf("Percentage %.2f%%\n", percentage);
    
    // print message based on percentage obtained
    if(percentage >= 90) {
        printf("Excellent\n");
    } else if(percentage >= 80) {
        printf("Good\n");
    } else if(percentage >= 50) {
        printf("Average\n");
    } else {
        printf("Fail\n");
    }
    
    return 0;
}


/*

---------constraints---------
percentage >= 90 gives Excellent
percentage >= 80 gives Good
percentage >= 50 gives Average
else it gives Fail if less than 50

*/


/*
-------sample input---------
76
56
81
97
76
-------sample output---------
Total marks: 386
Percentage: 77.20%
Average

*/


/*
test case 1 :
-------input-----
89
78
23
65
34
-------output-------
Total marks: 219
Percentage: 43.80%
Fail
-------------------------------------
test case 2 : 
--------input------
78
98
83
88
--------ouput----------
91
Total marks: 422
Percentage: 84.40%
Good
--------------------------------------