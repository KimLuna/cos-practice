#include <iostream> // iostream: input&output의 흐름

int main(int argc, char *argv[])
{
	int x{};
	std::cout << "Enter a number: "; // 디폴트인 using namespace std; 라인이 없어 앞서서 호명을 해주어야 함
	// '얘는 어디에 있는 어느 변수야' 라고 명시를 해준다고 생각하면 됨
	std::cin >> x;
	std::cout << "You entered " << x << std::endl;
	return 0;

}
