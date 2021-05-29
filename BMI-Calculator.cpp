#include <iostream>

int main() {
  
  double height, weight, bmi;
  
  // Ask user for their height
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;

  // Calculate bmi
  bmi = weight / (height * height);

  std::cout << "Your BMI is: " << bmi << "\n";
  std::cout << "Thank you for using the program";

}