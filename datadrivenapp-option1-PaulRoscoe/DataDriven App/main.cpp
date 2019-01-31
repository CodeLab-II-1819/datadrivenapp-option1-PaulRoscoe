//
//  main.cpp
//  CodeLab Assignment
//
//  Created by Paul Roscoe on 31/01/2019.
//  Copyright © 2019 Paul Roscoe. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void wordSelect();
void choice1();
void choice2();
void choice3();
void choice4();
void choice5();
void choice6();
void choice7();
void choice8();
void choice9();
void choice10();
// Identifying the functions.

int main() {
    
    
    
    cout << "Welcome to the Twitter Sieve" << endl;
    cout << "This is your personal guide to finding tweets." << endl;
    cout << "Looking for a certain tweet?, this program is here to do that." << endl;
    cout << "Press 1 to continue or 2 to quit." << endl;
    //introduction then input to progress.
    int begin;
    cin >> begin;
    
    if ( begin == 1) {
        wordSelect();
        //if number 1 is pressed then the function wordSelect is called.
    }
    if ( begin == 2) {
        return 0;
    }
    
}

    void wordSelect(){
        cout << "Pick a word to search tweets by and we will find all of them for you." << endl;
        cout << "Pick choice 1 by entering '1' to search for tweets that contain 'Paris'." << endl;
        cout << "Pick choice 2 by entering '2' to search for tweets that contain 'Uber'." << endl;
        cout << "Pick choice 3 by entering '3' to search for tweets that contain 'DreamWorks'." << endl;
        cout << "Pick choice 4 by entering '4' to search for tweets that contain 'Love'." << endl;
        cout << "Pick choice 5 by entering '5' to search for tweets that contain 'TheGrammys'." << endl;
        cout << "Pick choice 6 by entering '6' to search for tweets that contain 'Pop'." << endl;
        cout << "Pick choice 7 by entering '7' to search for tweets that contain 'RHYTHM'." << endl;
        cout << "Pick choice 8 by entering '8' to count tweets that describe 'Politics'." << endl;
        cout << "Pick choice 9 by entering '9' to count tweets that describe 'Money'." << endl;
        cout << "Pick choice 10 by entering '10' to count all tweets." << endl;
        //Menu function instructing user to input choice.
     
        
        int choice;
        cin >> choice;
        //If statements to initiate specific functions for he users choice on the previous menu.
        if (choice == 1){
            choice1();
            
    };
        if (choice == 2){
            choice2();
            
        };
        if (choice == 3){
            choice3();
            
        };
        if (choice == 4){
            choice4();
            
        };
        if (choice == 5){
            choice5();
            
        };
        if (choice == 6){
            choice6();
            
        };
        if (choice == 7){
            choice7();
            
        };
        if (choice == 8){
            choice8();
            
        };
        if (choice == 9){
            choice9();
            
        };
        if (choice == 10){
            choice10();
            
        };
    };


void choice1() {
    
        string tweet;//creating the variable.
        ifstream infile; //gets information from file to be used.
        infile.open("sampleTweets.csv");//specifying the file to be used.
        
        if (infile.good()) {//if file is open.
            while (!infile.eof()) {//if file hasn't closed.
                getline(infile,tweet); //retrieve lines from file and classify them as tweet.
                if (tweet.find("Paris") != string::npos) {// if the word can be found then print below.
                    cout << "Found it right here: " << tweet << endl;
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                }
                
            }
        }
    //exit option
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}
//these comments are repeated for the other choice functions below.
void choice2() {
    
    string tweet;
    ifstream infile;
    infile.open("sampleTweets.csv");
    
    if (infile.good()) {
        while (!infile.eof()) {
            getline(infile,tweet);
            if (tweet.find("Uber") != string::npos) {
                cout << "Found it right here: " << tweet << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }
        }
    }
    
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}

void choice3() {
    
    string tweet;
    ifstream infile;
    infile.open("sampleTweets.csv");
    
    if (infile.good()) {
        while (!infile.eof()) {
            getline(infile,tweet);
            if (tweet.find("Dreamworks") != string::npos) {
                cout << "Found it right here: " << tweet << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }
        }
    }
    
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}

void choice4() {
    
    string tweet;
    ifstream infile;
    infile.open("sampleTweets.csv");
    
    if (infile.good()) {
        while (!infile.eof()) {
            getline(infile,tweet);
            if (tweet.find("Love") != string::npos) {
                cout << "Found it right here: " << tweet << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }
        }
    }
    
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}
void choice5() {
    
    string tweet;
    ifstream infile;
    infile.open("sampleTweets.csv");
    
    if (infile.good()) {
        while (!infile.eof()) {
            getline(infile,tweet);
            if (tweet.find("TheGrammys") != string::npos) {
                cout << "Found it right here: " << tweet << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }
        }
    }
    
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}

void choice6() {
    
    string tweet;
    ifstream infile;
    infile.open("sampleTweets.csv");
    
    if (infile.good()) {
        while (!infile.eof()) {
            getline(infile,tweet);
            if (tweet.find("Pop") != string::npos) {
                cout << "Found it right here: " << tweet << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }
        }
    }
    
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}

void choice7() {
    
    string tweet;
    ifstream infile;
    infile.open("sampleTweets.csv");
    
    if (infile.good()) {
        while (!infile.eof()) {
            getline(infile,tweet);
            if (tweet.find("RHYTHM") != string::npos) {
                cout << "Found it right here: " << tweet << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }
        }
    }
   
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}

void choice8() {
    int counter = 0;
    string tweet;
    ifstream infile;
    infile.open("sampleTweets.csv");
    
    if (infile.good()) {
        while (!infile.eof()) {
            getline(infile,tweet);
            if (tweet.find("Politics") != string::npos) {
                counter++; // counter incriment for each tweet.
                
                
            }
            
        }
        cout << "Total number of tweets: " << counter << endl;//printed outside the while loop so it doesn't get printed multiple times.
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;//seperation of tweets or functions.
    }
    
    cout << " Press '1' to go back to the main screen." << endl;
    
    int exit;
    cin >> exit;
    if ( exit == 1 ) {
        wordSelect();
    }
}
    void choice9() {
        int counter = 0;
        string tweet;
        ifstream infile;
        infile.open("sampleTweets.csv");
        
        if (infile.good()) {
            while (!infile.eof()) {
                getline(infile,tweet);
                if (tweet.find("Money") != string::npos) {
                    counter++;
                }
                
            }
            cout << "Total number of tweets: " << counter << endl;
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        }
        
        cout << " Press '1' to go back to the main screen." << endl;
        
        int exit;
        cin >> exit;
        if ( exit == 1 ) {
            wordSelect();
        }
    }
        void choice10() {
            int counter = 0;
            string tweet;
            ifstream infile;
            infile.open("sampleTweets.csv");
            
            if (infile.good()) {
                while (getline(infile,tweet)) {
                    ++counter;
                    
                    }
                cout << "Total number of tweets = " << counter << endl;
                    
                }
            
            cout << " Press '1' to go back to the main screen." << endl;
            
            int exit;
            cin >> exit;
            if ( exit == 1 ) {
                wordSelect();
                    
                }
            }





