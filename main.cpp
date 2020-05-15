#include <iostream>


bool isPalindrome(const std::string & text){

  std::string palindrome;
  palindrome.resize(text.length());
  
  int len = text.length();

  for(int i=0; i<len; i++){
    palindrome.at(i)=text.at(len-i-1);
  }

  if(palindrome==text)
    return true;
  else
    return false;

}


int main() {

    std::string input;
    std::cout << "Podaj wyraz: ";

    std::cin>> input;

    if(isPalindrome(input))
      std::cout <<"To jest palindrom" << std::endl;
    else
      std::cout << "To nie jest palindrom" << std::endl; 

}