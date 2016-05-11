int solution(int A, int B, int K) 
{
    int diffs = (B/K) - (A/K);
    if (A % K == 0) ++diffs;
    return diffs;
}
