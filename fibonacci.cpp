#include <iostream>
#include <vector>

int main() {
  std::vector<int> x = {0, 1};
  std::cout << "0, 1";
  for (int i = 0; i <= 18; i++) {
    x.push_back(x[i] + x[i+1]);
    std::cout << ", " <<  x[i+2];
  }
  std::cout << "\n";
}
