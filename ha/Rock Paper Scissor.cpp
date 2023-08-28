#include <iostream>

void main()
{
    int choise;
    std::cout << "Pick 1 for Rock, 2 for Paper and 3 for Scissors\n";
    std::cin >> choise;
    srand(time(NULL));
    int CPUChoise = rand() % 3 + 1;

    if (choise > 3 || choise == 0)
    {
        std::cout << "Not a correct choise.";
    }
    else {
        std::cout << CPUChoise;
        if (choise == 1 && CPUChoise == 3) {
            std::cout << "You won, Rock beat Scissors";
        }
        if (choise == 1 && CPUChoise == 2) {
            std::cout << "You lost, Paper beat rock";
        }
        if (choise == 1 && CPUChoise == 1) {
            std::cout << "You Tied";
        }
        if (choise == 2 && CPUChoise == 3) {
            std::cout << "You Lose, Scissors beat paper";
        }
        if (choise == 2 && CPUChoise == 1) {
            std::cout << "You Win, Paper beat rock";
        }
        if (choise == 2 && CPUChoise == 2) {
            std::cout << "You Tied";
        }
        if (choise == 3 && CPUChoise == 1) {
            std::cout << "You Lost, Rock beat Scissors";
        }
        if (choise == 3 && CPUChoise == 2) {
            std::cout << "You Win, Scissors beat paper";
        }
        if (choise == 3 && CPUChoise == 3) {
            std::cout << "You Tied";
        }
    }
    std::cout << "\n";
    system("pause");
}
