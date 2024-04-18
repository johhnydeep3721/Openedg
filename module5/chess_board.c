#include <stdio.h>

void initialize(char chess_board[8][8]){
    int i ,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
        chess_board[i][j]=' ';
        }
    }
    
    chess_board[0][0] = chess_board[0][7] = 'R';
    chess_board[7][0] = chess_board[7][7] = 'R';
    
    chess_board[0][1] = chess_board[0][6] = chess_board[7][1] = chess_board[7][6] = 'N';
    chess_board[0][2] = chess_board[0][5] = chess_board[7][2] = chess_board[7][5] = 'B';
    chess_board[0][3] = chess_board[7][3] = 'Q';
    chess_board[0][4] = chess_board[7][4] = 'Q';
    
    for(i=0;i<8;i++){
        chess_board[1][i] = 'P';
        chess_board[6][i] = 'P';
    }
}

void print_board(char chess_board[8][8]){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%c",chess_board[i][j]);
        }
        printf("\n");
    }
}

int main()
{
	/* your code */
	char chess_board[8][8];
	initialize(chess_board);
	print_board(chess_board);
	
	return 0;
}