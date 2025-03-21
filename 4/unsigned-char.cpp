#include <cstdio>
int main()
{
    unsigned char a, b;
    a = 0X10;
    b = 0Xfb;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

// movzbl, signed에서는 movsbl
// 이 명령어를 제공하는 건 cpu이지만, 컴파일러가 그 실행을 관리하고 수행한다