/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  *
  * Return: the natural square root
  */
int _sqrt(int n)
{
    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0; 
    }
    int i;
    for (i = 1; i <= n / 2; i++) {
        int sqrt = i * i;
        if (sqrt == n) {
            return i; 
        }
        if (sqrt > n) {
            return -1; 
        }
    }
    return -1; 
}

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
    return _sqrt(n);
}

