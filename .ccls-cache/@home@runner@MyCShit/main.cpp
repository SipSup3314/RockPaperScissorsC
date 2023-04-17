#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main() {
  srand((unsigned)time(NULL));
  string pchoice;
  cout << "Welcome to Rock Paper Scissors, the fun game";
  cout << "\nYou can choose r, p, or s: ";
  getline(cin, pchoice);
  int randnum = rand() % 3;
  if (randnum == 0 && pchoice == "r") {
    cout << "CPU chose rock. It\'s a tie!";
  } else if (randnum == 0 && pchoice == "p") {
    cout << "CPU chose rock. You win!";
  } else if (randnum == 0 && pchoice == "s") {
    cout << "CPU chose rock. You lose!";
  } else if (randnum == 1 && pchoice == "r") {
    cout << "CPU chose paper. You lose!";
  } else if (randnum == 1 && pchoice == "p") {
    cout << "CPU chose paper. It\'s a tie!";
  } else if (randnum == 1 && pchoice == "s") {
    cout << "CPU chose paper. You win!";
  } else if (randnum == 2 && pchoice == "r") {
    cout << "CPU chose scissors. You win!";
  } else if (randnum == 2 && pchoice == "p") {
    cout << "CPU chose scissors. You lose!";
  } else if (randnum == 2 && pchoice == "s") {
    cout << "CPU chose scissors. It\'s a tie!";
  }
  cout << "\n";
  return 0;
}