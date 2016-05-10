#include <numeric>
#include <cmath>

int solution(vector<int> &A) 
{
    auto head = A.at(0);
    auto tail = accumulate(A.begin()+1, A.end(), 0);
    auto diff = abs(head - tail);
    
    for (unsigned int index=1; index<A.size()-1; index++)
    {
        head += A.at(index);
        tail -= A.at(index);
        if (abs(head -tail) < diff) diff = abs(head - tail);
    }
    
    return diff;
}
