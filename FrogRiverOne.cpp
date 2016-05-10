#include <cassert>

int solution(int X, vector<int> &A) 
{
    assert(X > 0); 
    assert(!A.empty());
    
    vector<bool> visited(X-1);
    
    auto total = 0;  
    for(unsigned int i=0; i<A.size(); ++i)
    {
        if (!visited[A[i]-1])
        {
            visited[A[i]-1] = true;
            total++;
            if (total == X) return i;
        }
    }
    
    return -1;
}
