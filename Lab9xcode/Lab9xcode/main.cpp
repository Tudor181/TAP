#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <algorithm>  // for std::max
using namespace std;

void frameLines(ifstream &inputFile, list<string> &lines) {
    string line;

    while (getline(inputFile, line)) {
        lines.push_back(line);
    }
}

void displayFramedLines(list<string> &lines) {
    if (lines.empty()) {
        cout << "No lines to display.\n";
        return;
    }

    size_t max_length = lines.front().length();
    for (const auto &line : lines) {
        max_length = max(max_length, line.length());
    }

    max_length+=2;
    const string row2(max_length,'-');
    
    size_t shorter = max_length;
    string row1(shorter,'-');
    row1[0]='|';
    row1[row1.length()-1]='|';
    

    
    list<string> newlines;
    lines.push_front(row2);
    lines.push_back(row2);
    newlines.push_front(row2);


    for (auto it = ++lines.begin(); it != --lines.end(); ++it) {
        
        *it = "|" + *it + string(max_length-2 - it->length(), ' ') + "|";
        newlines.push_back(*it);
        if(it!=--(--lines.end()))
            newlines.push_back(row1);
    }
//    for (auto line : lines) {
//        cout<<line<<'\n';
//    }
    
    newlines.push_back(row2);
    for (auto line : newlines) {
          cout<<line<<'\n';
      }

}

int main() {
    ifstream inputFile("fisier.txt");

    if (!inputFile.is_open()) {
        cout << "Unable to open file.\n";
        return 1;
    }

    list<string> lines;
    frameLines(inputFile, lines);

    if (inputFile.bad()) {
        cout << "Error reading from the file.\n";
        return 1;
    }

    inputFile.close();

    cout << "File content:\n";
    for (const auto &line : lines) {
        cout << line << "\n";
    }

    displayFramedLines(lines);

    return 0;
}
