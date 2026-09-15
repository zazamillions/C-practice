#include <stdio.h>
#include <stdlib.h>

int main(){


    for(int i = 0; i < 3; i++){

        int age;
        char name[50];

        printf("Enter your age: ");
        scanf("%d", &age);

        printf("What is your name: ");
        scanf("%s", name);

            if(age >= 100) {

            printf("Your name is %s, you are %d you are an adult but too old hence eligible for elections.\n", name, age);
            }


            else if(age <= 17) {

            printf("Your name is %s, you are %d you are not an adult hence not eligible for elections.\n", name, age);
            }

            else{

            printf("Your name is %s, you are %d, you are an adult hence eligible for elections\n", name, age);
            }

    }

}
