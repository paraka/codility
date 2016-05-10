#include <cmath>

int solution(int X, int Y, int D) 
{
    double distance = Y - X;
    long jumps = static_cast<long>(ceil(distance / D));
    return jumps;
}
