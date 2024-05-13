//Importation of necicary utilitys
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <unistd.h>

//Initialization of variables
int servitorsInStock = 7836;
int constructionsUnderway = 0;

//Main start of program
void startConstruction(); // Forward declaration
int main() {
  //While loop to check servitor var
  while (servitorsInStock < 8000) {
    ++servitorsInStock; //Increments of 1 each loop
    std::cout << servitorsInStock << std::endl;
    sleep(1); //Pause for controll
    if (servitorsInStock == 8000){ //If statement to call startConstruction function
      startConstruction();
    }
  }
}

//Resets the servitors value to zero and prints text
void startConstruction() {
  std::cout << "Starting construction...";
  std::cout << constructionsUnderway << std::endl;
  servitorsInStock = 0;
  ++constructionsUnderway;
}
