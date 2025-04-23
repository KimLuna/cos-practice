#include <iostream>
using namespace std;

short test(short x, short y, short z)
{
    __asm__(
        "leaq (%rdx, %rsi), %rax\n"
        "subq %rdi, %rax\n"
        "cmpq $5, %rdx\n"
        "jle .L2\n"
        "cmpq $2, %rsi\n"
        "jle .L3\n"
        "movq %rdi,%rax\n"
        "idivq %rdx,%rax\n"
        "jmp .L4\n"
        ".L3:\n"
        "movq %rdi, %rax\n"
        "idivq %rsi, %rax\n"
        "jmp .L4\n"
        ".L2:\n"
        "cmqp $3, %rdx\n"
        "jge .L4\n"
        "movq %rsi, %rax\n"
        "idivq %rsi, %rax\n"
        ".L4:\n"
        "rep"
    );
}
int run()
{
    __asm__(
        "movq $100, %rax"
    );
}

int main(int argc, char *argv[]){
    // cout << "The skeleton code for the assembly language" << endl;
    // cout << "return value: " << run() << endl;
    // return 0;
    short x, y, z;
    if (argc != 4)
    {
        cout << "Error: please try again with 3 numbers" << endl;
        return 1;
    }

    x = atoi(argv[1]); y = atoi(argv[2]); z = atoi(argv[3]);
    cout << "result: " << test(x, y, z) << endl;
    return 0;
}
