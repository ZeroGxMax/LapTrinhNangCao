#include <stdio.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;

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

void renderGame(string &guessWord, int badGuessCount, string guessChars);
void displayFinalResult(bool won, const string &word);
const string &getNextHangman();
const string &getNextDancingman();
void clearScreen();

void renderGame(string &guessWord, int badGuessCount, string guessChars)
{
    cout << FIGURE[badGuessCount] << endl;
    cout << guessWord << endl;
    cout << "Guessed characters: " << guessChars << endl;
    cout << "Number of wrong guess: " << badGuessCount << endl;
}

void displayFinalResult(bool won, const string &word)
{
    while (true)
    {
        clearScreen();
        if (won) cout << "Congratulations! You win!";
        else cout << "You lost. The correct word is " << word << endl;
        cout << (won ? getNextDancingman() : getNextHangman());
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

const string &getNextHangman()
{
    const static string figure[] = {
        " ------------+ \n"
        " | / \n"
        " | O \n"
        " | /|\\ \n"
        " | / \\ \n"
        " | \n"
        " ----- \n" ,
        " ------------+ \n"
        " | | \n"
        " | O \n"
        " | /|\\ \n"
        " | / \\ \n"
        " | \n"
        " ----- \n",
        " ------------+ \n"
        " | \\ \n"
        " | O \n"
        " | /|\\ \n"
        " | / \\ \n"
        " | \n"
        " ----- \n",
        " ------------+ \n"
        " | | \n"
        " | O \n"
        " | /|\\ \n"
        " | / \\ \n"
        " | \n"
        " ----- \n",
    };
    const int NUMBER_OF_FIGURES = sizeof(figure)/sizeof(string);
    static int currentFigure = 0;
    return figure[(currentFigure++) % NUMBER_OF_FIGURES];
}

const string &getNextDancingman()
{
    const static string figure[] = {
        " O \n"
        " /|\\ \n"
        " | | \n",
        " O \n"
        " /|\\ \n"
        " / \\ \n",
        " __O__ \n"
        " | \n"
        " / \\ \n",
        " \\O/ \n"
        " | \n"
        " / \\ \n",
        " __O__ \n"
        " | \n"
        " / \\ \n",
        " O \n"
        " /|\\ \n"
        " / \\ \n" ,
        " O \n"
        " /|\\ \n"
        " / \\ \n" ,
        " O \n"
        " /|\\ \n"
        " / \\ \n" ,
        " O \n"
        " /|\\ \n"
        " / \\ \n" ,
        " O \n"
        " /|\\ \n"
        " / \\ \n" ,
    };
    const int NUMBER_OF_FIGURES = sizeof(figure)/sizeof(string);
    static int currentFigure = 0;
    return figure[(currentFigure++) % NUMBER_OF_FIGURES];
}

void clearScreen()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}