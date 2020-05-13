#include <iostream>
#include <string>

bool isPalindrome(const std::string & text);

int main() {
  std::cout << "Witaj w programie PalindromCheck\n"
            << "Podaj tekst, aby sprawdzić czy jest palindromem: ";
  std::string str;
  std::cin >> str;

  if (isPalindrome(str))
    std::cout << str << " jest palindoromem!\n";
  else
    std::cout << str << " nie jest palindoromem!\n";
  return 0;
}

bool isPalindrome(const std::string & text) {
  for(int i=0; i<text.length()/2; i++) {
    if (text[i] != text[text.length() - i - 1])
      return false;
}
return true;
}
