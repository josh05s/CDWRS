#include <vector>
using namespace std;

int findOdd(const vector<int>& numbers){
  int s = numbers.size();
  
  for (int i = 0; i < s; i++) {
    int count = 0;
    for (int j = 0; j < s; j++) {
      if (numbers[i] == numbers[j]) {
        count++;
      }
    }
    if (count % 2 != 0) {
      return numbers[i];
    }
  }
  return -1;
}