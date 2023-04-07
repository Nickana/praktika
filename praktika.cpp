#include <iostream>

bool isPolindrom(std::string word)
{
	std::cout << "how fo you want to check for a polindrome, 1 - with other variable or 2 - with comprasion alghorithm: ";
	std::string inverseWord;
	int choose;
	std::cin >> choose;
	switch (choose) 
	{
	case 1:
		for (int i = word.size() - 1; i >= 0; i--)
		{
			inverseWord += word[i];
		}

		std::cout << inverseWord;

		if (inverseWord == word) {
			return(true);
		}
		else
		{
			return(false);
		}
		break;
	case 2:
		for (int i = 0; i < (word.size() / 2) - 1; i++)
		{
			if (!(word[i] == word[(word.size() - 1) - i]))//блок будет выполнит только тогда когда найдется несовпадение, вернется false, а 
			{											  // ! - инвертирует false в true что даст if выполнить блок кода. 
				return(false);
			}
		}
		return(true);
	}
}

int main()
{
	std::string word;
	std::cout << "type some word: ";
	std::cin >> word;

	std::cout << std::endl << isPolindrom(word);

}

