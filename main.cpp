#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <unistd.h>

int servitorsInStock = 7836;
int constructionsUnderway = 0;
void startConstruction(); // Forward declaration
int main() {
  while (servitorsInStock < 8000) {
    ++servitorsInStock;
    std::cout << servitorsInStock << std::endl;
    sleep(1);
    if (servitorsInStock == 8000){
      startConstruction();
    }
  }
}
void startConstruction() {
  std::cout << "Starting construction...";
  std::cout << constructionsUnderway << std::endl;
  servitorsInStock = 0;
  ++constructionsUnderway;
}