/*#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("zoom.txt");//create by it own
    fout<<"HELLO WORLD";
    fout.close();
    ifstream fin;
    fin.open("zoom.txt");
    string s;
    getline(fin,s);
     stringstream ss(s);
     string word;
     while(ss>>word){
        cout<<word<<" ";
     }

}*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm> // For std::transform
using namespace std;

int main() {
    // Create a file and write some text into it
    ofstream fout;
    fout.open("zoom.txt"); // Create the file
    fout << "HELLO WORLD\n"
         << "i am this\n"
         << "raj";
    fout.close();

    // Read the file and count words, lines, and characters
    ifstream fin;
    fin.open("zoom.txt");

    string s, word;
    int c = 0; // Word count
    int c2 = 0; // Line count
    int c3 = 0; // Character count

    // Read each line from the file
    while (getline(fin, s)) {
        c2++; // Increment line count
        stringstream ss(s); // Create a stringstream for each line

        // Read each word in the line
        while (ss >> word) {
            cout << word << " "; // Output the word followed by a space
            c3 += word.length(); // Add the length of each word to the character count
            c++; // Increment word count
        }
        cout << endl; // Newline after each line of words
    }
    fin.close(); // Close the file after reading

    // Display the total counts
    cout << "Total words: " << c << endl;
    cout << "Total lines: " << c2 << endl;
    cout << "Total characters: " << c3 << endl;

    // Writing to the new file with flipped case (upper to lower and vice versa)
    fout.open("zoom2.txt"); // Open the output file for writing
    fin.open("zoom.txt"); // Reopen the input file for reading

    char ch;
    while (fin.get(ch)) { // Read one character at a time
        if (islower(ch)) {
            fout << (char)toupper(ch); // Convert to uppercase
        } else if (isupper(ch)) {
            fout << (char)tolower(ch); // Convert to lowercase
        } else {
            fout << ch; // Non-alphabetic characters remain the same
        }
    }

    fin.close(); // Close input file
    fout.close(); // Close output file

    return 0;
}
