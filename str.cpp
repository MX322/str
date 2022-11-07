#include <iostream>
using namespace std;

void ChekWords(char* str, int wordsCount);
void ChekGlasLetter(char* str, char* ptr_glasLetter, int glasLetterCount);
void ChekSoglasLetter(char* str, char* ptr_soglasLetter, int soglasLetterCount);
void ChekNumbers(char* str, char* ptr_numbers, int numbersCount);
void CheckPunctuations(char* str, char* ptr_punct, int punctCount);
void ChekSymbols(char* str, char* ptr_symbols, int symbolsCount);

int main()
{
	int wordsCount = 0;
	int glasLetterCount = 0;
	int soglasLetterCount = 0;
    int numbersCount = 0;
	int punctCount = 0;
	int symbolsCount = 0;

	char* str = new char [100];
	cout << "Enter text: ";
	gets_s(str, 20);

	char glasLetter[] = "aeiouy";                       //гласные
	char* ptr_glasLetter = glasLetter;

	char soglasLetter[] = "bcdfghjklmnqprstvwxyz";    //согласные
	char* ptr_soglasLetter = soglasLetter;

	char numbers[] = "0123456789";                  //цифры
	char* ptr_numbers = numbers;

	char punct[] = "!?,.:-\"\'";             //знаки пункутации
	char* ptr_punct = punct;

	char symbols[] = "~`@#№$;%^&*()_=+{}[]/\\<>";   //спец символы
	char* ptr_symbols = symbols;

    cout << str << endl;

    ChekWords(str, wordsCount);
    ChekGlasLetter(str, ptr_glasLetter, glasLetterCount);
    ChekSoglasLetter(str, ptr_soglasLetter, soglasLetterCount);
    ChekNumbers(str, ptr_numbers, numbersCount);
    CheckPunctuations(str, ptr_punct, punctCount);
    ChekSymbols(str, ptr_symbols, symbolsCount);
}

void ChekWords(char* str, int wordsCount)
{
	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			wordsCount++;
		}
	}

    cout << "Words: " << ++wordsCount << endl;
}

void ChekGlasLetter(char* str, char* ptr_glasLetter, int glasLetterCount)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_glasLetter); j++)
        {
            if (str[i] == ptr_glasLetter[j])
            {
                glasLetterCount++;
            }
        }
    }
    cout << "glasLetters: " << glasLetterCount - 1 << endl;
}

void ChekSoglasLetter(char* str, char* ptr_soglasLetter, int soglasLetterCount)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_soglasLetter); j++)
        {
            if (str[i] == ptr_soglasLetter[j])
            {
                soglasLetterCount++;
            }
        }
    }
    cout << "soglasLetters: " << soglasLetterCount - 1 << endl;
}

void ChekNumbers(char* str, char* ptr_numbers, int numbersCount)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_numbers); j++)
        {
            if (str[i] == ptr_numbers[j])
            {
                numbersCount++;
            }
        }
    }
    cout << "Numbers: " << numbersCount - 1 << endl;
}

void CheckPunctuations(char* str, char* ptr_punct, int punctCount)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_punct); j++)
        {
            if (str[i] == ptr_punct[j])
            {
                punctCount++;
            }
        }
    }
    cout << "Punctuations: " << punctCount - 1 << endl;
}

void ChekSymbols(char* str, char* ptr_symbols, int symbolsCount)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_symbols); j++)
        {
            if (str[i] == ptr_symbols[j])
            {
                symbolsCount++;
            }
        }
    }
    cout << "Symbols: " << symbolsCount - 1 << endl;
}