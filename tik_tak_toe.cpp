#include <iostream>

int main();
int result();
void board();

char grid[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(){

    int player = 1;
    int i = -1;
    int e = 0;
    char move;
    char mark;

    while(i == -1){
        board();
        
        if(player == 1){
            mark = 'X';
        }else{
            mark = 'O';
        }
          
        std::cout << "Player " << player << " Please Enter a Number to Mark: ";
        std::cin >> move;

        e = 1;
        while(e == 1){  
            if(move == '1' && grid[0] == '1'){
                grid[0] = mark;
                e = 0;
            }else if(move == '2' && grid[1] == '2'){
                grid[1] = mark;
                e = 0;
            }else if(move == '3' && grid[2] == '3'){
                grid[2] = mark;
                e = 0;
            }else if(move == '4' && grid[3] == '4'){
                grid[3] = mark;
                e = 0;
            }else if(move == '5' && grid[4] == '5'){
                grid[4] = mark;
                e = 0;
            }else if(move == '6' && grid[5] == '6'){
                grid[5] = mark;
                e = 0;
            }else if(move == '7' && grid[6] == '7'){
                grid[6] = mark;
                e = 0;
            }else if(move == '8' && grid[7] == '8'){
                grid[7] = mark;
                e = 0;
            }else if(move == '9' && grid[8] == '9'){
                grid[8] = mark;
                e = 0;
            }else{
                std::cout << "That is an Invalid Input, Please Re-Enter a Number to Mark: ";
                std::cin >> move;
            }
        }

        i=result();

        if(i == 1){
            board();
            std::cout << "Player " << player << " Won!" << std::endl;
        }else if(i == 0){
            board();
            std::cout << "The Game Ended in a Draw!" << std::endl;
        }else{
            if(player == 1){
                player = 2;
            }else{
                player = 1;
            }
        }
    }

    return 0;

}

void board(){
    std::cout << std::endl;
    std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl;
    std::cout << std::endl;

    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "     |     |     " << std::endl;
    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << std::endl;

    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "_____|_____|_____" << std::endl;
    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "     |     |     " << std::endl;

    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << std::endl;

    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "_____|_____|_____" << std::endl;
    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "     |     |     " << std::endl;

    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << std::endl;

    std::cout << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << "     |     |     " << std::endl;
    std::cout << std::endl;
}

int result(){
    if(grid[0] == grid[1] && grid[1] == grid[2]){
        return 1;
    }else if(grid[3] == grid[4] && grid[4] == grid[5]){
        return 1;
    }else if(grid[6] == grid[7] && grid[7] == grid[8]){
        return 1;
    }else if(grid[0] == grid[4] && grid[4] == grid[8]){
        return 1;
    }else if(grid[2] == grid[4] && grid[4] == grid[6]){
        return 1;
    }else if(grid[0] == grid[3] && grid[3] == grid[6]){
        return 1;
    }else if(grid[1] == grid[4] && grid[4] == grid[7]){
        return 1;
    }else if(grid[2] == grid[5] && grid[5] == grid[8]){
        return 1;
    }else if(grid[0] != '1' && grid[1] != '2' && grid[2] != '3' && grid[3] != '4' && grid[4] != '5' && grid[5] != '6' && grid[6] != '7' && grid[7] != '8' && grid[8] != '9'){
        return 0;
    }else{
        return -1;
    }
}