#include <algorithm>

vector<int> solution(vector<int> &A, int K) 
{
    if (A.empty()) return A;
    
    int len = A.size();
    K %= len;
    rotate(A.begin(), A.begin() + len - K, A.end());
    
    return A;
}
