#include <iostream>
using namespace std;
 

void result(int N)
{     
    
    for (int num = 0; num < N; num++)
    {
        if (num % 3 == 0 && num % 5 == 0)
            cout << num << " ";
    }
}
 

int main()
{     
    
    int N = 100;
     
    
    result(N);
}  