int solution(vector<int> &A) 
{
    auto size = A.size();
    vector<bool> visited(size);
    
    for (unsigned int i=0; i < size; ++i)
    {
         if (!(0 < A[i] && A[i] <= A.size() && !visited[A[i]-1])) return 0;
         else visited[A[i]-1] = true;
    }
    
    return 1;
}
