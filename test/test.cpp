#include <iostream>
#include <vector>

using namespace std;

class Calculator {
 public:
  int add(int a, int b) { return a + b; }
};

int main() {
  Calculator calc;
  int result = calc.add(15, 25);

  vector<int> numbers = {1, 2, 3, 4, 5};
  for (int n : numbers) {
    cout << "Number: " << n << endl;
  }

  cout << "Total Result: " << result << endl;
  return 0;
}