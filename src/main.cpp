#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

std::string rand_bin(int lenght, int seed);

int main()
{
	bool program_loop{true};
	int n{}, seed{};
	
	while(program_loop)
	{
		system("clear");
		std::cout << "Welcome to semi-random binary number generator! \nBy: Papyrus219 (T.B)\n\n";
		std::cout << "How long number should be: ";
		std::cin >> n;
		std::cout << "Enter seed: ";
		std::cin >> seed;
		std::cout << "Here your number: " << rand_bin(n,seed);
		std::cout << "\n\nType anything to continue.\n";
		char a{};
		std::cin >> a;
	}
	
	return 0;
}

std::string rand_bin(int lenght,int seed)
{
	std::string result{};
	
	std::srand(seed);
	while(lenght--)
	{
		result += static_cast<char>((std::rand() % 2) + 48);
	}
	
	return result;
}
