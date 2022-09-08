#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //================ĐỌC FILE====================
    // CÚ PHÁP: ifstream <tên biên sfile>
    // BƯỚC 1: khai báo ra biến để đọc file
    ifstream FileIn; // khai báo ra 1 biến FileIn để đọc dữ liệu từ file
    // BƯỚC 2: mở file cần đọc dữ liệu
    // FileIn.open: open(<đường dẫn đến file cần mở ra để đọc - đây là chuỗi>, <chế độ làm việc với file>)
    FileIn.open("D:\\Workspace\\C_C++\\File_C++\\THEORY\\INPUT.txt", ios_base::in);
    if (FileIn.fail() == true)
    {
        cout << "File khong ton tai";
        return 0;
    }
    // BƯỚC 3: Xử lý File - đọc dữ liệu từ file ra chương trình.
    int x; int y;
    // cin >> x
    FileIn >> x; //đọc dữ liệu từ file
    FileIn >> y; //đọc dữ liệu từ file
    cout << x + y;
    // BƯỚC 4: đóng File lại sau khi đã xử lý.
    FileIn.close(); //đóng file sau khi xử lý

    //================GHI FILE====================
    ofstream FileOut;
    FileOut.open("D:\\Workspace\\C_C++\\File_C++\\THEORY\\OUTPUT.txt", ios_base::out);
    FileOut << x + y; // ghi dữ liệu x + y vào file OUTPUT.txt
    FileOut << 20;
    
    FileOut.close(); ///đóng file lại
    return 0;
}