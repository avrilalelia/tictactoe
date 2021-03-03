#include<iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;

int choice;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void display_board(){
	system("CLS");
	system("color 80");
	cout<<"\n\n\n\t\t\tTIC TAC TOE\n"<<endl;
	cout<<"\tGAME BY AVRIL & VINCENT"<<endl;
	cout<<"\n\n\tPLAYER 1 : [O]"<<endl;
	cout<<"\tPLAYER 2 : [X]"<<endl;
	cout<<"\t\t_____________________________________"<<endl;
	cout<<"\t\t|            |           |           |"<<endl;
	cout<<"\t\t|     "<<board[0][0]<<"      |     "<<board[0][1]<<"     |     "<<board[0][2]<<"     |"<<endl;
	cout<<"\t\t|____________|___________|___________|"<<endl;
	cout<<"\t\t|            |           |           |"<<endl;
	cout<<"\t\t|     "<<board[1][0]<<"      |     "<<board[1][1]<<"     |     "<<board[1][2]<<"     |"<<endl;
	cout<<"\t\t|____________|___________|___________|"<<endl;
	cout<<"\t\t|            |           |           |"<<endl;
	cout<<"\t\t|     "<<board[2][0]<<"      |     "<<board[2][1]<<"     |     "<<board[2][2]<<"     |"<<endl;
	cout<<"\t\t|____________|___________|___________|\n\n"<<endl;
}

void player_1(){
	cout<<"Giliran Player 1!"<<endl;
	int choice;
	cout<<"Masukkan nomor pilihan Anda: ";
	cin>>choice;
	switch(choice){
		case 1:
			if(board[0][0]=='X'||board[0][0]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[0][0] = 'O';
				break;
			}
		case 2:
			if(board[0][1]=='X'||board[0][1]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[0][1] = 'O';
				break;
			}
		case 3:
			if(board[0][2]=='X'||board[0][2]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[0][2] = 'O';
				break;
			}
		case 4:
			if(board[1][0]=='X'||board[1][0]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[1][0] = 'O';
				break;
			}
		case 5:
			if(board[1][1]=='X'||board[1][1]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[1][1] = 'O';
				break;
			}
		case 6:
			if(board[1][2]=='X'||board[1][2]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[1][2] = 'O';
				break;
			}
		case 7:
			if(board[2][0]=='X'||board[2][0]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[2][0] = 'O';
				break;
			}
		case 8:
			if(board[2][1]=='X'||board[2][1]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[2][1] = 'O';
				break;
			}
		case 9:
			if(board[2][2]=='X'||board[2][2]=='O'){
				cout<<"INVALID TRY!";
				player_1();
				break;
			}else{
				board[2][2] = 'O';
				break;
			}
		default:
			cout<<"INVALID CHOICE!";
			player_1();
			break;
	}
}

void player_2(){
	cout<<"Giliran Player 2!"<<endl;
	int choice;
	cout<<"Masukkan nomor pilihan Anda: ";
	cin>>choice;
	switch(choice){
		case 1:
			if(board[0][0]=='X'||board[0][0]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[0][0] = 'X';
				break;
			}
		case 2:
			if(board[0][1]=='X'||board[0][1]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[0][1] = 'X';
				break;
			}
		case 3:
			if(board[0][2]=='X'||board[0][2]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[0][2] = 'X';
				break;
			}
		case 4:
			if(board[1][0]=='X'||board[1][0]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[1][0] = 'X';
				break;
			}
		case 5:
			if(board[1][1]=='X'||board[1][1]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[1][1] = 'X';
				break;
			}
		case 6:
			if(board[1][2]=='X'||board[1][2]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[1][2] = 'X';
				break;
			}
		case 7:
			if(board[2][0]=='X'||board[2][0]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[2][0] = 'X';
				break;
			}
		case 8:
			if(board[2][1]=='X'||board[2][1]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[2][1] = 'X';
				break;
			}
		case 9:
			if(board[2][2]=='X'||board[2][2]=='O'){
				cout<<"INVALID TRY!";
				player_2();
				break;
			}else{
				board[2][2] = 'X';
				break;
			}
		default:
			cout<<"INVALID CHOICE!";
			player_2();
	}
}

bool gameover(){
	for(int i=0;i<3;i++){
		if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]){
			cout<<"=======================GAME OVER======================="<<endl;
			return FALSE;
			break;
		}
	}
	for(int j=0;j<3;j++){
		if(board[j][0]==board[j][1]&&board[j][0]==board[j][2]){
			cout<<"=======================GAME OVER======================="<<endl;
			return FALSE;
			break;
		}
	}
	if((board[0][0]==board[1][1]&&board[0][0]==board[2][2])||(board[0][2]==board[1][1]&&board[0][2]==board[2][0])){
		cout<<"=======================GAME OVER======================="<<endl;
		return FALSE;
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(board[i][j]!='O'||board[i][j]!='X'){
				return TRUE;
			}
		}
	}
}

int tie(){
	int num = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(board[i][j]=='O'||board[i][j]=='X'){
				num++;
			}
		}
	}
	if(num==9){
		return 5;
	}else{
		return 0;
	}
}

int main(){
	while(gameover()){
		display_board();
		if(gameover()==TRUE){
			player_1();
			display_board();
			if(gameover()==FALSE){
				cout<<"=======================PLAYER 1 WINS======================="<<endl;
				break;
			}
		}
		
		int draw = tie();
		if(draw==5){
			cout<<"=======================DRAW======================="<<endl;
			break;
		}
			
		if(gameover()==TRUE){
			player_2();
			display_board();
				if(gameover()==FALSE){
					cout<<"=======================PLAYER 2 WINS======================="<<endl;
					break;
				}
			}
		
		int han = tie();
		if(han==5){
			cout<<"=======================DRAW======================="<<endl;
			break;
		}
	}
}
