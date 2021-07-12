#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char** argv) {
    
    //read file
    ifstream file("textfile.txt");
    
    //iterate over line by line
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            // using printf() in all tests for consistency
            string str = line.c_str();
            regex regex("/d+");
            cout << regex_match(str, regex) << endl;
        }
        file.close();
    }
    
    return 0;
}
