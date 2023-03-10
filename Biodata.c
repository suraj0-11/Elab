/*

A person needs to enter his details like
Name,Age,Gender using structure concept 
and print the given input;
Name must be more than 3 characters
Age mustn't be less than 0
Gender must be entered as M or F only
it can be either capital or small character

*/






#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Define the structure for a person
struct person {
    char name[50];
    int age;
    char gender;
};

int main() {
    // Declare a variable of type person
    struct person p;

    // Ask the user to enter their information
    printf("name:");
    scanf("%s", p.name);

    // Validate that the person's name does not contain any digits and is at least 3 characters long
    int contains_digits = 0;
    while (strlen(p.name) < 3 || contains_digits) {
        printf("invalid");
        scanf("%s", p.name);
        contains_digits = 0;
        for (int i = 0; p.name[i] != '\0'; i++) {
            if (isdigit(p.name[i])) {
                contains_digits = 1;
                break;
            }
        }
    }

    // Ask the user to enter their age
    printf("age:");
    scanf("%d", &p.age);

    // Validate that the person's age is greater than or equal to 0
    while (p.age < 0) {
        printf("invalid");
        scanf("%d", &p.age);
    }

    // Ask the user to enter their gender
    printf("gender:");
    scanf(" %c", &p.gender);

    // Validate that the person's gender is either 'M' or 'F'
    while (p.gender != 'M' && p.gender != 'F' && p.gender != 'm' && p.gender != 'f') {
        printf("invalid");
        scanf(" %c", &p.gender);
    }

    // Display the person's information
    printf("%s\n", p.name);
    printf("%d\n", p.age);
    printf("%c\n", p.gender);

    return 0;
}

/* 
------sample input-------
name:suraj
age:19
gender:m
------sample output--------
suraj
19
m


------------------------------------
test case 1:
-------Input ----------
name:suraj
age:-12
-------output---------
invalid




test case 2:
-------input---------
name:kevin
age:19
gender:u
-------output--------
invalid
----------------------------------
*/
