vector<int> solution(int N, vector<int> &A) 
{
    vector<int> ret(N);
    int current_max = 0;
    int last_increase = 0;
 
    for (unsigned int i=0; i<A.size();i++)
    {
        if (A[i] > N) 
        {
            last_increase = current_max;
        } 
        else 
        {
            ret[A[i]-1] = max(ret[A[i]-1], last_increase);
            ret[A[i]-1]++;
            current_max = max(current_max, ret[A[i]-1]);
        }
    }
 
    for(int i=0; i<N;i++) ret[i] = max(ret[i], last_increase);
 
    return ret;
}
