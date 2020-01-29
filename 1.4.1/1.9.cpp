#include <iostream>

int main(){
	int i = 50;
	int sum = 0;

	while (i<=100){
		sum += i++;
	}

	std::cout << "sum of all numbes 50-100 is " << sum << std::endl;
	return 0;
}
