#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned int x{}; // unsigned int로 출력시에는 unsigned int의 최댓값 -2 의 값이 출력됨
    // cpu는 자료형을 모른다. 그럼 누가 분류하고 인지하는 거지? 바로 나~
    // int x{};
    cout << "Enter a number: ";
    cin >> x;
    if (x>=0){
        cout << "You entered a positive integer!" << endl;
    }
    else{
        cout << "You entered a negative integer!" << endl;
    }
    return 0;
}