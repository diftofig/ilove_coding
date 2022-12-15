#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// Random number generation

int main()
{


 int best_score=100;
 while (1)
 {
 int count = 0;
 srand(time(NULL));
 int correct_answer = rand()%32+1;//kick out a random number
 while(1){

 printf("guess a number from 1 - 32:\t");
 int i;
 scanf("%d", &i); // enters the value to be guessed
 if (i == correct_answer)
 {
 count++;
 printf("correct\n");
 printf("you win\n");// win £¡start a new game 
 printf("in %d tries\n",count);
 if (count<=best_score){
    best_score=count;
 }
 printf("the best score is %d\n",best_score);
 break;
 }
 else if (i < correct_answer)
 {
 printf("too low\n");
 count++;
 continue;
 }
 else
 {
 printf("too high\n");
 count++;
 continue;
 }
}
 }
 return 0;
}

