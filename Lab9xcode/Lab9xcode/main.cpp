//#include <iostream>
//#include <fstream>
//#include <list>
//#include <string>
//#include <algorithm>  // for std::max
//using namespace std;
//
//
//// ex 1 si 2 combinate
//void ordineAlfabetica(list<string> &lines){
//    lines.sort();
//}
//
//void inversOrdineAlfabetica(list<string> &lines){
//    lines.sort(greater<string>());
//}
//
//void marimeRand(list<string> &lines){
//    lines.sort([](string line1, string line2){
//        return line1.length() < line2.length();
//    });
//}
//
//void frameLines(ifstream &inputFile, list<string> &lines) {
//    string line;
//
//    while (getline(inputFile, line)) {
//        lines.push_back(line);
//    }
//    
//    ofstream f1("fisierAlfabetic.txt");
//    ofstream f2("fisierInvers.txt");
//    ofstream f3("fisierLungimeRand.txt");
//    if (!f1.is_open() || !f2.is_open() || !f3.is_open()) {
//        cout << "Unable to open file.\n";
//        return ;
//    }
//    ordineAlfabetica(lines);
//    for(string line:lines){
//        f1<<line<<'\n';
//        
//        
//    }
//    inversOrdineAlfabetica(lines);
//    for(string line:lines){
//        
//        f2<<line<<'\n';
//        
//    }
//    marimeRand(lines);
//  
//    for(string line:lines){
//
//        f3<<line<<'\n';
//    }
//    
//}
//
//void displayFramedLines(list<string> &lines) {
//    if (lines.empty()) {
//        cout << "No lines to display.\n";
//        return;
//    }
//
//    size_t max_length = lines.front().length();
//    for (const auto &line : lines) {
//        max_length = max(max_length, line.length());
//    }
//
//    max_length+=2;
//    const string row2(max_length,'-');
//    
//    size_t shorter = max_length;
//    string row1(shorter,'-');
//    row1[0]='|';
//    row1[row1.length()-1]='|';
//    
//
//    
//    list<string> newlines;
//    lines.push_front(row2);
//    lines.push_back(row2);
//    newlines.push_front(row2);
//
//
//    for (auto it = ++lines.begin(); it != --lines.end(); ++it) {
//        
//        *it = "|" + *it + string(max_length-2 - it->length(), ' ') + "|";
//        newlines.push_back(*it);
//        if(it!=--(--lines.end()))
//            newlines.push_back(row1);
//    }
////    for (auto line : lines) {
////        cout<<line<<'\n';
////    }
//    
//    newlines.push_back(row2);
//    for (auto line : newlines) {
//          cout<<line<<'\n';
//      }
//
//}
//
//
//
//int main() {
//    ifstream inputFile("fisier.txt");
//
//    if (!inputFile.is_open()) {
//        cout << "Unable to open file.\n";
//        return 1;
//    }
//
//    list<string> lines;
//    frameLines(inputFile, lines);
//
//    if (inputFile.bad()) {
//        cout << "Error reading from the file.\n";
//        return 1;
//    }
//
//    inputFile.close();
//
//    cout << "File content:\n";
//    for (const auto &line : lines) {
//        cout << line << "\n";
//    }
//
//    displayFramedLines(lines);
//
//    return 0;
//}





//ex3
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

// Functor
class RandomNumber {
public:
    int operator()(int max) const {
        return rand() % (max + 1);
    }
};

// Template function
template <typename T>
void afisareVector(const vector<T>& v) {
    cout << "Vector: ";
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << "\n";
}

// Template
template <typename T>
void afisareSet(const set<T>& s) {
    cout << "Set: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << "\n";
}

int main() {
    int n = 10;      vector<int> vector1(n);
    vector<int> vector2(n);

    generate(vector1.begin(), vector1.end(), RandomNumber{n/2});
    generate(vector2.begin(), vector2.end(), RandomNumber{n/2});

    // Remove duplicates
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());
    vector1.erase(unique(vector1.begin(), vector1.end()), vector1.end());
    vector2.erase(unique(vector2.begin(), vector2.end()), vector2.end());

    afisareVector(vector1);
    afisareVector(vector2);

    set<int> set1(vector1.begin(), vector1.end());
    set<int> set2(vector2.begin(), vector2.end());

    set<int> intersect;
    set_intersection(set1.begin(), set1.end(),
                         set2.begin(), set2.end(),
                         inserter(intersect, intersect.begin()));

    set<int> unite;
    set_union(set1.begin(), set1.end(),
                  set2.begin(), set2.end(),
                  inserter(unite, unite.begin()));

    set<int> difference;
    set_difference(set1.begin(), set1.end(),
                       set2.begin(), set2.end(),
                       inserter(difference, difference.begin()));

    afisareSet(intersect);
    afisareSet(unite);
    afisareSet(difference);


    return 0;
}
