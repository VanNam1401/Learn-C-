#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    //tạo đối tượng input để đọc dữ liệu đầu vào tư file input.txt
    ifstream input("D:\\bandicam\\input.txt");
    fstream output; //tạo biến output để ghi dữ liệu vào file output.txt
    output.open("D:\\bandicam\\output.txt", ios::out);
    string str;
    getline(input,str);
    cout << str;
    output << "Hello World";
    input.close();
    output.close();
    return 0;
}