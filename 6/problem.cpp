#include <iostream>
using namespace std;

int check(int a, int b)
{
    return a < b;
}

int add(int a, int b)
{
    int i, c;
    c = 0;
    for (i = 0; i< b; i++) c+= i;
    // return 이 없어서 어쩌고저쩌고~~~
}
int main()
{
    int a, b, result;
    cout << "insert the first number: " << endl;
    cin >> a;
    cout << "insert the second number: " << endl;
    cin >> b;

    if(check == 0) cout << "the result (a >= b): " << add(b, a) << endl;
    // check에 인자를 넣지 않아 check 함수의 주소를 가리키게 됨
    else cout << "the result (a < b): " << add(a, b) << endl;
    return 0;
}
