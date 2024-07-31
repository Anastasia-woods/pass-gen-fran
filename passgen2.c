// Monday 29th July, 2024.
/* So I am still trying that random password generator but with a different method this time
* I am going to make a 3D array, storing the different catergories (number, letters & special characters)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // variable to collect the user's answer.
    int passlength;
    // creating a 3D array
    // apparently, you can not have a multi array if they are not of the same dimension
    char num[]= {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char schar[] = {'@', '#', '$', '&', '%', '*', '`', '_', '-', '!', '^', '<', '>', '?', '|'};
    // Now, I want to given the user the opportunity to choose the length of the password themselves.
    printf("How long do your password to be, within the range of 8 and 16 characters? ");
    scanf(" %d", &passlength);
    // the if statements to for the length 

    if (passlength == 8)
    {   // for the case, I can sent the number I want each category to have 
        // but the chosen characters are randomised separately.
         int i;
         int j;
         int k;
            time_t t;
            srand((unsigned)time(&t));
            for (j = 0; j < 2; j++){
                printf(" %c", letter[rand()%10]);   
                for (i = 0; i < 1; i++){
                    printf(" %c", num[rand()%10]);
                    for (k = 0; k < 2; k++){
                        printf(" %c", schar[rand()%10]);
                    }
                }
            }
    }
    else if (passlength == 9)
    {   // here I can't choose the number I want each catergory to have but they are randomised together.
        int i;
            time_t t;
            srand((unsigned)time(&t));

            for (i = 0; i < 3; i++){
                printf(" %c", num[rand()%10]);
                printf(" %c", letter[rand()%10]);
                printf(" %c", schar[rand()%10]);
            }
    }
    else if (passlength == 10)
    {   // for the case, I can sent the number I want each category to have 
        // but the chosen characters are randomised separately.
         int i;
         int j;
         int k;
            time_t t;
            srand((unsigned)time(&t));
            for (j = 0; j < 2; j++){
                printf(" %c", letter[rand()%10]);   
                for (i = 0; i < 2; i++){
                    printf(" %c", num[rand()%10]);
                    for (k = 0; k < 1; k++){
                        printf(" %c", schar[rand()%10]);
                    }
                }
            }
    }
    else if (passlength == 11)
    {   // for the case, I can sent the number I want each category to have 
        // but the chosen characters are randomised separately.
         int i;
         int j;
         int k;
            time_t t;
            srand((unsigned)time(&t));
            for (j = 0; j < 1; j++){
                printf(" %c", letter[rand()%10]);   
                for (i = 0; i < 2; i++){
                    printf(" %c", num[rand()%10]);
                    for (k = 0; k < 2; k++){
                        printf(" %c", schar[rand()%10]);
                    }
                }
            }
    }
    else if (passlength == 12)
    {   // here I can't choose the number I want each catergory to have but they are randomised together.
        int i;
            time_t t;
            srand((unsigned)time(&t));

            for (i = 0; i < 4; i++){
                printf(" %c", num[rand()%10]);
                printf(" %c", letter[rand()%10]);
                printf(" %c", schar[rand()%10]);
            }
    }
    else if (passlength == 13)
    {   // for the case, I can sent the number I want each category to have 
        // but the chosen characters are randomised separately.
         int i;
         int j;
         int k;
            time_t t;
            srand((unsigned)time(&t));
            for (j = 0; j < 1; j++){
                printf(" %c", letter[rand()%10]);   
                for (i = 0; i < 3; i++){
                    printf(" %c", num[rand()%10]);
                    for (k = 0; k < 3; k++){
                        printf(" %c", schar[rand()%10]);
                    }
                }
            }
    }
    else if (passlength == 14)
    {   // for the case, I can sent the number I want each category to have 
        // but the chosen characters are randomised separately.
         int i;
         int j;
         int k;
            time_t t;
            srand((unsigned)time(&t));
            for (j = 0; j < 2; j++){
                printf(" %c", letter[rand()%10]);   
                for (i = 0; i < 2; i++){
                    printf(" %c", num[rand()%10]);
                    for (k = 0; k < 2; k++){
                        printf(" %c", schar[rand()%10]);
                    }
                }
            }    
    }
    else if (passlength == 15)
    {   // here I can't choose the number I want each catergory to have but they are randomised together.
        int i;
            time_t t;
            srand((unsigned)time(&t));

            for (i = 0; i < 5; i++){
                printf(" %c", num[rand()%10]);
                printf(" %c", letter[rand()%10]);
                printf(" %c", schar[rand()%10]);
            }
    }
    else{
        printf("Wrong number inputed, try again later.");
    }
    // This works!!! And the characters are random!
    
}
