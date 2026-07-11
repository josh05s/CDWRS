#include <map>
#include <string>
using namespace std;

map<char, unsigned> count(const std::string& string) {
  map<char, unsigned> result;
  for (char c : string) {
    result[c]++;
  }
  return result;
}