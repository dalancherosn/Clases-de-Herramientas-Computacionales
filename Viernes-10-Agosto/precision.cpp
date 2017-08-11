#include <iostream>

int main(void)
{
  float Under = 1.0;
  float Over = 1.0;
  int N = 200;

  for(int n = 0; n < N; n++)
    {
      Under = Under/2;
      Over = Over*2;

      std::cout << "loop number: " << n << "  " << "Under: " << Under << "  " << "Over: " << Over << std::endl;        
    }
  
  
  return 0;
}
