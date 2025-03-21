#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int a, b, sum;

    if(argc != 3)
    {
        printf("Invalid number arguments\n");
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    if (a < b)
    {
        sum = 0;
        while (a <= b){
            sum += a;
            a++;
        }
        printf("Sum: %d\n", sum);
    }
    else
    {
        printf("Invalid arguments: the second number should be bigger that the first number.");
    }
}