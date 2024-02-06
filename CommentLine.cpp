#include <iostream>
using namespace std;

void isComment(string line)
{
    if (line.size()>=2 && line[0] == '/' && line[1] == '/') {

        cout << "//single-line comment";
        return;
    }

    if (line.size()>=4 && line[line.size() - 2] == '*'
        && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*') {

        cout << "/*multiple line comment*/";
        return;
    }

    cout << "It is not a comment";
}

int main()
{
    string line ;

   cout << "Enter a string: ";
   cin >> line;
    isComment(line);

    return 0;
}
