#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game=0;
int chessboard [3][3]
{
	{0, 0, 0},
	{0, 0, 0},
	{0, 0, 0},
};

int cfp;//count for player
int cfc;//count for computer

void check1 (int r,int c) {// function1 : check every line                                       
for(r=0;r<3;r++){
	int cfp=0;
	int cfc=0;
    for(c=0;c<3;c++){
	   if(chessboard[r][c]==1)
	{cfp++;}
	
	else if( chessboard[r][c]==2)
	{cfc++;	}
	if (cfp==3)
	{printf("you win");
	game=1;}
            
    else if(cfc==3)
    {printf("you lose");
	game=1;} 
   }
}

}

void check2(int r,int c)//function 2:check every column
{
	for(r=0;r<3;r++){
	cfp=0;
	cfc=0;
    for(c=0;c<3;c++){
	   if(chessboard[r][c]==1)
	{cfp++;}
	
	else if( chessboard[r][c]==2)
	{cfc++;	}
	if (cfp==3)
	{printf("you win");
	game=1;}
            
    else if(cfc==3)
    {printf("you lose");
	game=1;} 
   }
}
}
void check3(){
	if(chessboard[0][0]==1&&chessboard[1][1]==1&&chessboard[2][2]==1){
		printf("you win");game=1;
	}
	else if(chessboard[2][0]==1&&chessboard[1][1]==1&&chessboard[0][2]==1){
		printf("you win");game=1;
	}
		else if(chessboard[2][0]==2&&chessboard[1][1]==2&&chessboard[0][2]==2){
			printf("you lose");game=1;
		}
		
		if(chessboard[0][0]==2&&chessboard[1][1]==2&&chessboard[2][2]==2){
		printf("you lose");game=1;
	}
}







   int main(){
	int a,b;
	int p,s;//numbers enterd by player and system
	int r,c;//indicate the row and column
	for(b=0;b<3;b++){
	
	for(a=0;a<3;a++){
		printf("."); 
	}printf("\n");
}// print the chessboard

	printf("please put down your chess as one number below\n");
	printf("7 8 9\n");
	printf("4 5 6\n");
	printf("1 2 3\n");//print the numbers
	
	
	while(1){
		
		
			scanf("&d",&p);//input a number by user
		chessboard[2 - (int)(p - 1) / 3][(p - 1) % 3] = 1;
					 
					 
			 for(r=0;r<3;r++){
		  		for(c=0;c<3;c++){
		  			if(chessboard[r][c]==0){
		  				printf(".");
					  }
					else if(chessboard[r][c]==1){
						printf("x");
					}
					else if(chessboard[r][c]==2){
						printf("o");
					}
					
				  }
				  printf("\n");
			  }// print the gameboard
			  
			  check1(r,c);
			  if(game){break;
			  }
			  
			  check2(r,c);
			   if(game){break;
			  }
			  check3();
			   if(game){break;
			  }
	
			  
			  

		  			do {
			srand((unsigned)time(NULL));
			s = rand() % 9 + 1;
		   } while (chessboard[2 - (int)(s - 1) / 3][(s - 1) % 3] == 1 || chessboard[2 - (int)(s - 1) / 3][(s - 1) % 3] == 2);//kick out a random number
		chessboard[2 - (int)(s - 1) / 3][(s - 1) % 3] = 2;
		  	
		  	
			  
			 	 for(r=0;r<3;r++){
		  		for(c=0;c<3;c++){
		  			if(chessboard[r][c]==0){
		  				printf(".");
					  }
					else if(chessboard[r][c]==1){
						printf("x");
					}
					else if(chessboard[r][c]==2){
						printf("o");
					}
					
				  }
				  printf("\n");
			  }// print the gameboard
        
		
		check1(r,c);
			  if(game){break;
			  }
			  
			  check2(r,c);
			   if(game){break;
			  }
			  check3();
			   if(game){break;
			  }
	
		
	
	}


	
	
}
