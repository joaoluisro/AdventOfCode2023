#include <bits/stdc++.h>

#define ASCII_NUMBER_OFFSET 48
#define MAX_NUMBERS 2

const inline int sum(const std::string &p)
{
  auto foundFirst = false, foundLast = false;
  int i = 0;
  int j = p.length() - 1;
  int cSum = 0;
  while(!foundFirst)
  {
    const auto converted = (int)p[i] - ASCII_NUMBER_OFFSET;
    foundFirst = converted < 10;
    cSum += converted * foundFirst * 10;
    i++;
  }
  while(!foundLast)
  {
    const auto converted = (int)p[j] - ASCII_NUMBER_OFFSET;
    foundLast = converted < 10;
    cSum += converted * foundLast;
    j--;
  }
  return cSum;
}

int main(int argc, char* argv[])
{
  int finalSum = 0;
  std::string input;
  while(std::cin >> input)
    finalSum += sum(input);
  std::cout << "finalSum : " << finalSum << "\n";
  return 0;
}