#include <iostream>
#define BUFLEN 10
using namespace std;
int main(int argc, char *argv[]){
    char str1[6] = {'h', 'e', 'l', 'l', 'o', 0};
    char str2[6] = {'w', 'o', 'r', 'l', 'd', 0};
    char *p;
    int i;

    p = str1 + 1;

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    for (i=-10; i<10; i++)
        cout << "p[" << i << "] = " << p[i] << endl;

    return 0;
} // p 에는 str1만 입력했는데 str2까지 출력됨. 주소를 잘 조정하면 어디든지 접근이 가능하다.