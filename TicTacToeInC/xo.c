#include<stdio.h>

char board[3][3] = { 
				{'1', '2', '3'},
				{'4', '5', '6'},
				{'7', '8', '9'}
	};
int player = 1;
char choice;
int winner;
int over = 0;// o game is not over, 1 game over
int movecount = 0;

void printBoard()
{
printf("- - - - - - - -  \n");

	for(int zeile = 0; zeile < 3; zeile++){
		for(int spalte = 0; spalte < 3; spalte++)
			printf(" | %c ", board[zeile][spalte]);
			
		printf("\n");
		printf("- - - - - - - - \n");
			
	};	

}

void play()
{
printf("Player  %d: choose a cell: \n", player);
	scanf(" %c", &choice);
	char value;
	if(player == 1)
		value = 'X';
	else
		value = 'O';

	switch(choice)
	{

		case '1':
			
			if(board[0][0] != 'O' && board[0][0] != 'X')
				board[0][0] = value;
			break;
			
		case '2':
			if(board[0][1] != 'O' && board[0][1] != 'X')
				board[0][1] = value;
			break;
		case '3':
			if(board[0][2] != 'O' && board[0][2] != 'X')
				board[0][2] = value;
			break;
		case '4':
			if(board[1][0] != 'O' && board[1][0] != 'X')
				board[1][0] = value;
			break;
		case '5':
			if(board[1][1] != 'O' && board[1][1] != 'X')
				board[1][1] = value;
			break;
		case '6':
			if(board[1][2] != 'O' && board[1][2] != 'X')
				board[1][2] = value;
			break;
		case '7':
			if(board[2][0] != 'O' && board[2][0] != 'X')
		
				board[2][0] = value;
			break;
		case '8':
			if(board[2][1] != 'O' && board[2][1] != 'X')
				board[2][1] = value;
			break;
		case '9':
			if(board[2][2] != 'O' && board[2][2] != 'X')
				board[2][2] = value;
			break;
		
	}
	
	movecount++;
	

}

void gameOver()
{
	//rows
	
	for(int zeile = 0; zeile < 3; zeile++)
		if((board[zeile][0] == board[zeile][1]) && (board[zeile][1] == board[zeile][2] ))
		{
			if(board[zeile][0] == 'X')
				winner = 1;
			else 
				winner = 2;
			
			over = 1;
			return;
		
		
		}
		
	//clomns
	for(int spalte = 0; spalte < 3; spalte++)
		if((board[0][spalte] == board[1][spalte]) && (board[1][spalte] == board[2][spalte] ))
		{
			if(board[0][spalte] == 'X')
				winner = 1;
			else 
				winner = 2;
			
			over = 1;
			return;
		
		
		}
		
	//m diognal
	if((board[0][0] == board[1][1]) && (board[1][1] == board[2][2] ))
	{
			if(board[0][0] == 'X')
				winner = 1;
			else 
				winner = 2;
			
			over = 1;
			return;
		
		
	}
	if((board[0][2] == board[1][1]) && (board[1][1] == board[2][0] ))
	{
			if(board[0][2] == 'X')
				winner = 1;
			else 
				winner = 2;
			
			over = 1;
			return;
		
		
	}
	
	if(movecount == 12)
	{
	
		winner = 0;
		over = 1;
	}
	
	

}
	
	

	
int main(void)
{

	printBoard();
	while(over != 1)
	{
	
	
		play();
		printBoard();
		gameOver();
		if(player == 1)
			player = 2;
		else 	
			player = 1;
		
	
	}
	if( winner == 0)
		printf("No winner\n");
	else 
		printf( "Player %d is the winner\n", winner);
	
	
	
	return 0;
	


}
