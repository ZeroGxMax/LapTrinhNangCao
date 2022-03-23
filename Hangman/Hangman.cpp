#include <stdio.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>

using namespace std;
const string WORD_LIST[] = {"cat", "dog", "human", "note", "gmail", "google", "facebook"};
const int WORD_COUNT = sizeof(WORD_LIST)/sizeof(string);
const int Max_Bad_Guesses = 7;
const string FIGURE[] = {
 " ------------- \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | /| \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | /|\\ \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | /|\\ \n"
 " | / \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | /|\\ \n"
 " | / \\ \n"
 " | \n"
 " ----- \n",
};

string chooseWord();
void renderGame(string &guessWord, int badGuessCount, string guessChars);
char readAGuess();
void update(string &guessWord, const string secretWord, char guess);
bool contains(const string &secretWord, char ch);
void clearScreen();

int main()
{
    srand((int)time(0));
    string secretWord = chooseWord();
    string guessWord = string(secretWord.length(), '-');
    int badGuessCount = 0;
    string guessChars = "";

    do
    {
        renderGame(guessWord, badGuessCount, guessChars);
        char guess = readAGuess();
        guessChars = guessChars + guess + " ";
        if (contains(secretWord, guess))
        {
            update(guessWord, secretWord, guess);
        }
        else badGuessCount++;
    } while (badGuessCount < Max_Bad_Guesses && guessWord != secretWord);

    renderGame(guessWord, badGuessCount, guessChars);
    if (badGuessCount < Max_Bad_Guesses) cout << "Congratulation! You win!";
    else cout << "You lost. The correct word is " << secretWord;
}

string chooseWord()
{
    int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}

void renderGame(string &guessWord, int badGuessCount, string guessChars)
{
    cout << FIGURE[badGuessCount] << endl;
    cout << guessWord << endl;
    cout << "Guessed characters: " << guessChars << endl;
    cout << "Number of wrong guess: " << badGuessCount << endl;
}

char readAGuess()
{
    char symbol;
    cout << "Your guess: ";
    cin >> symbol;
    symbol = tolower(symbol);
    return symbol;
}

void update(string& guessWord, const string secretWord, char guess)
{
    for (int i = secretWord.length()-1; i >= 0; i--)
    {
        if (secretWord[i] == guess)
        {
            guessWord[i] = secretWord[i];
        }
    }
}

bool contains(const string &secretWord, char ch)
{
    size_t found = secretWord.find(ch);
    if (found != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void clearScreen()
{
    // for (int i = 0; i < 50; i++)
    // {
    //     cout << endl;
    // }
    // WINDOWS
    // LINUX

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}