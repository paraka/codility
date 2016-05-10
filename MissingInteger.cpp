int solution(vector<int> &A) 
{
    auto size = A.size();
    vector<bool>visited(size);
    
    for (unsigned int i=0; i<size; ++i)
        if (A[i] > 0 && static_cast<unsigned>(A[i]) <= size) visited[A[i]-1] = true;
 
    for (unsigned int i=0; i<visited.size(); ++i)
        if (!visited[i]) return i + 1;
 
    return size +1;
}
