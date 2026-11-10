#include <cs50.h>
#include <stdio.h>

int madrid = 9;
int jarandilla = 14;
int guijo = 19;
int talavera = 2;
int chiclana = 1;

int main (void) {
    printf("Hello, welcome to Guess the year.\n Ready for the challenge!\n");
    string name = get_string("What's your name? ");
    printf("Welcome, %s.\n Time to play!\n", name);

    printf("First question: In which century was the city of Madrid founded?\n You have 10 chances to guess.\n");
    int counter = 10;
    int q1 = 0;
    while (counter > 0){
        q1 = get_int("Guess: ");
        counter --;
        if (q1 < madrid){
            printf("Sorry, the city is younger.\n" "Try again. You have %i tries.\n", counter);
        }
            else if (q1 > madrid){
                printf("Sorry, the city is older.\n" "Try again. You have %i tries. \n", counter);
            }
            else {
                printf("Correct, great job. Madrid was founded in the neinth century, more specificly in  865.");
                break;
            }
        
    
    }
    if (counter == 0 && q1 != madrid ){
        printf("Game over.\n");
        return 0;
    }

     printf("Second question: In which century did Jarandilla de la Vera gain independence?\n You have 10 chances to guess.\n");
    counter = 10;
    int q2 = 0;
     while (counter > 0){
        q2 = get_int("Guess: ");
        counter --;
        if (q2 < jarandilla){
            printf("Sorry, the town is younger.\n" "Try again. You have %i tries.\n", counter);
        }
            else if (q2 > jarandilla){
                printf("Sorry, the town is older.\n" "Try again. You have %i tries. \n", counter);
            }
            else {
                printf("Correct, great job. Jarandilla gained independence 1369.");
                break;
            }
        
    
    }
    if (counter == 0 && q2 != jarandilla){
        printf("Game over.\n");
        return 0;
    }

     printf("Third question: In which century did Guijo de Santa Bárbara gain independence?\n You have 10 chances to guess.\n");
    counter = 10;
    int q3 = 0;
     while (counter > 0){
        q3 = get_int("Guess: ");
        counter --;
        if (q3 < guijo){
            printf("Sorry, the village is younger.\n" "Try again. You have %i tries.\n", counter);
        }
            else if (q3 > guijo){
                printf("Sorry, the village is older.\n" "Try again. You have %i tries. \n", counter);
            }
            else {
                printf("Correct, great job. Guijo de Santa Bárbara gained independence in 1816.");
                break;
            }
        
    
    }
    if (counter == 0 && q3 != guijo){
        printf("Game over.\n");
        return 0;
    }

     printf("Fourth question: In which century was Talavera de la Reina founded?\n You have 10 chances to guess.\n");
    counter = 10;
    int q4 = 0;
     while (counter > 0){
        q4 = get_int("Guess: ");
        counter --;
        if (q4 < talavera){
            printf("Sorry, the city is younger.\n" "Try again. You have %i tries.\n", counter);
        }
            else if (q4 > talavera){
                printf("Sorry, the city is older.\n" "Try again. You have %i tries. \n", counter);
            }
            else {
                printf("Correct, great job. Talavera de la Reina was founded in 181 b.C.");
                break;
            }
        
    
    }
    if (counter == 0 && q4 != talavera){
        printf("Game over.\n");
        return 0;
    }

     printf("Last question: In which century was Chiclana de la Frontera founded?\n You have 10 chances to guess.\n");
    counter = 10;
    int q5 = 0;
     while (counter > 0){
        q5 = get_int("Guess: ");
        counter --;
        if (q5 < chiclana){
            printf("Sorry, the town is younger.\n" "Try again. You have %i tries.\n", counter);
        }
            else if (q5 > chiclana){
                printf("Sorry, the town is older.\n" "Try again. You have %i tries. \n", counter);
            }
            else {
                printf("Correct, great job. Chicana de la Frontera was founded in 49 b.C.\n");
                break;
            }
        
    
    }
    if (counter == 0 && q5 != chiclana){
        printf("Game over.\n");
        return 0;
    }

    printf("Congratulations! You've won Guess the Year!\n");
}
