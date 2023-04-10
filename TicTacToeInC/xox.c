#include<stdio.h>
#include<stdbool.h>


	char board[3][3] = { 
				{'1', '2', '3'},
				{'4', '5', '6'},
				{'7', '8', '9'}
	};
bool checks()
{
	if((board[0][0] == board[0][1]) && (board[0][1] == board[0][2]))
		return true;
}


int main(void)
{	
	int choices = 5;


	int player = 1;
	char choice;
	checks();	

	while(!(checks()))
	{

	printf("%d\n", sizeof(board));
	printf("- - - - - - - -  \n");

	for(int zeile = 0; zeile < 3; zeile++){
		for(int spalte = 0; spalte < 3; spalte++)
			printf(" | %c ", board[zeile][spalte]);
			
		printf("\n");
		printf("- - - - - - - - \n");
			
	};	

	printf("Player  %d: choose a cell: \n", player);
	scanf("%c", &choice);
	choices--;

	switch(choice)
	{

		case '1':
			board[0][0] = 'X';
			break;
		case '2':
			board[0][1] = 'X';
			break;
		case '3':
			board[0][2] = 'X';
			break;
		case '4':
			board[1][0] = 'X';
			break;
		case '5':
			board[1][1] = 'X';
			break;
		case '6':
			board[1][2] = 'X';
			break;
		case '7':
			board[2][0] = 'X';
			break;
		case '8':
			board[2][1] = 'X';
			break;
		case '9':
			board[2][1] = 'X';
			break;
	}
	for(int zeile = 0; zeile < 3; zeile++){
		for(int spalte = 0; spalte < 3; spalte++)
			printf(" | %c ", board[zeile][spalte]);
			
		printf("\n");
		printf("- - - - - - - - \n");
			
	};	

	player = 2;
	printf("Player  %d: choose a cell: \n", player);
	scanf(" %c", &choice);
	switch(choice)
	{

		case '1':
			board[0][0] = 'O';
			break;
		case '2':
			board[0][1] = 'O';
			break;
		case '3':
			board[0][2] = 'O';
			break;
		case '4':
			board[1][0] = 'O';
			break;
		case '5':
			board[1][1] = 'O';
			break;
		case '6':
			board[1][2] = 'O';
			break;
		case '7':
			board[2][0] = 'O';
			break;
		case '8':
			board[2][1] = 'O';
			break;
		case '9':
			board[2][1] = 'O';
			break;

	}
	for(int zeile = 0; zeile < 3; zeile++){
		for(int spalte = 0; spalte < 3; spalte++)
			printf(" | %c ", board[zeile][spalte]);
			
		printf("\n");
		printf("- - - - - - - - \n");
			
	};	

	}	
	return 0;

}
