#include <iostream>

int main() {
  std::string userQuote;
  std::string userAuthor;

  std::cout << "What is the quote? ";
  std::cin >> userQuote;
  std::cout << "Who said it? ";
  std::cin >> userAuthor;

  std::cout<< "\n"<< userAuthor<<" says: \"" << userQuote<<"\"\n";
}
