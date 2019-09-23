// Name:Juan Medina
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
  //Variable needed to hold the information from the user
  std::string location;
  int days;
  float hotel_expenses, meal_expenses, total_expenses;
  std::string hotel_expenses_string;
  std::string meal_expenses_string;
  std::string total_expenses_string;

  //Welcome message
  std::cout << "Welcome to the Buisness Trip Tracker!\n";

  //Blank line showed in the example to seperate lines
  std::cout << std::endl;

  //Ask the user for the location an allow multiple words
  std::cout << "what is the buisness trip location? ";
  getline(std::cin, location);

  //Ask the user for the number of days
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  //Ask the user for the hotel expenses and turn the reponse into a string
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel_expenses;
  hotel_expenses_string = std::to_string(hotel_expenses);
  hotel_expenses_string = "$" + hotel_expenses_string.substr(0, hotel_expenses_string.find('.') + 3);

  //Ask the user for the meal expenses and turn the reponse into a string
  std::cout << "What is the total meal expense? $";
  std::cin >> meal_expenses;
  meal_expenses_string = std::to_string(meal_expenses);
  meal_expenses_string = "$" + meal_expenses_string.substr(0, meal_expenses_string.find('.') + 3);

  //Gather total expenses from the trip
  total_expenses = hotel_expenses + meal_expenses;
  total_expenses_string = std::to_string(total_expenses);
  total_expenses_string = "$" + total_expenses_string.substr(0, total_expenses_string.find('.') +3);

  //additional extra line from needed to look like example
  std::cout << std::endl;

  //print the header with the data from the user
  std::cout << std::left << std::setw(20) << "Location"
  << std::right << std::setw(10) << "Days"
  << std::setw(10) << "Hotel"
  << std::setw(10) << "Meal"
  << std::setw(10) << "Total" << std::endl;

  //Insert data into the table 
  std::cout << std::left << std::setw(20) << location.substr(0,19)
  << std::right << std::setw(10) << days
  << std::setw(10) << hotel_expenses_string
  << std::setw(10) << meal_expenses_string
  << std::setw(10) << total_expenses_string << std::endl;

  return 0;


}
