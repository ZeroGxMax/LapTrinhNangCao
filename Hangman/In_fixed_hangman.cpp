#include <stdio.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <vector>
#include "draw.cpp"

using namespace std;
const string WORD_LIST[] = {"cat", "dog", "human", "note", "gmail", "google", "facebook"};
const int WORD_COUNT = sizeof(WORD_LIST)/sizeof(string);
const int Max_Bad_Guesses = 7;
const char DATA_FILE[] = "Word.txt";

string chooseWord(const char* fileName);
char readAGuess();
void update(string &guessWord, const string secretWord, char guess);
bool contains(const string &secretWord, char ch);
void clearScreen();
string normalize(string &str);

int main()
{
    srand((int)time(0));
    string secretWord = chooseWord("Data.txt");
    if (secretWord.length() < 1)
    {
        cout << "ERROR OPEN FILE!";
        return 0;
    }
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
    displayFinalResult(badGuessCount < Max_Bad_Guesses, secretWord);
}

string chooseWord(const char* fileName)
{
    vector <string> vocabulary;
    ifstream file(fileName);
    if (!file.is_open()) return "";
    while (!file.eof())
    {
        string line;
        getline(file, line, '\n');
        if (file && !line.empty())
        {
            vocabulary.push_back(normalize(line));
        }
    }

    int n = vocabulary.size();
    cout << "Vocabulary size: " << n << endl;
    return n > 0 ? vocabulary[rand() % n] : "";
    // int randomIndex = rand() % WORD_COUNT;
    // return WORD_LIST[randomIndex];
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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

string normalize(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}