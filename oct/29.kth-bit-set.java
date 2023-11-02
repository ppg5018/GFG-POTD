package oct;
//User function Template for Java


class CheckBit
{
    static boolean checkKthBit(int n, int k)
    {
        return ((n & (1 << k)) != 0);
    }
}