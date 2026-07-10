#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
using namespace std;

string rgb_to_hex(int r, int g, int b)
{
  r = min(255, max(0, r));
  g = min(255, max(0, g));
  b = min(255, max(0, b));
  
  stringstream ss;
  ss << hex << uppercase << setfill('0')
    << setw(2) << r 
    << setw(2) << g 
    << setw(2) << b;
    
  return ss.str();
}