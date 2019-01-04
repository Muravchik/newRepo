#include <iostream> 
#include <vector>


void square(double x) {
	double epicilon = 0.001;
	long int numGuesses = 0;
	double ans = 0.0;
	while (abs(pow(ans, 2) - x) >= epicilon)
	{
		ans += 0.0001;
		numGuesses++;
	}
	if (abs(pow(ans, 2) - x) >= epicilon)
		std::cout << "failed..." << numGuesses << std::endl;
	else
		std::cout << ans << " close to square root of " << x << ". Guesses:" << numGuesses << std::endl;
}
void bSquare(double x)
{
	double epicilon = 0.01;
	double low = 0.0;
	double high = x;
	double guess = 0.0;
	int guesses = 0;
	while (abs(pow(guess, 2) - x) >= epicilon)
	{
		if (pow(guess, 2) > x)
			high = guess;
		else
			low = guess;
		guess = (high + low) / 2;
		guesses++;
	}
	std::cout << guess << " is close enough to square root of " << x << ". Guesses: " << guesses << std::endl;
}
int binarySearch(std::vector<int> nums, int val)
{
	int size = nums.size();
	int low = 0;
	int high = size;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (nums[mid] == val)
		{
			std::cout << mid << std::endl;
			return 0;
		}
		else if (val > nums[mid])
		{
			low = mid + 1;

		}
		else high = mid - 1;
	}
	return 1;
}
int factFor(int x)
{
	int y = x;
	for (int i = 1; i < x; i++)
	{
		y = y * i;
	}
	return y;
}
unsigned long long int fact(int x)
{
	if (x == 2) return 2;
	return x * fact(x - 1);
}
unsigned long long int fibonacciNum(int n)
{
	if (n == 0) return 0;
	if (n == 1 || n == 2)
	{
		return n;
	}
	return fibonacciNum(n - 1) + fibonacciNum(n - 2);
}


int main()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Hello World! (" << i << ")" << std::endl;
	}
	/*
	for (int i= 1; i <= 50; i++)
	{

	std::cout << i << " " << fibonacciNum(i) << std::endl;
	}
	*/

	// std::cout << "For:" << factFor(10) << std::endl;

	// std::vector<int> arr = { 1,4,7,8,9,16 };
	// std::cout << binarySearch(arr, 5);

	// square(5);
	// std::cout << std::endl << "with binary search:" << std::endl;
	// bSquare(20);

	// fibonacciNums(5);

	system("PAUSE");
	return 0;
}
