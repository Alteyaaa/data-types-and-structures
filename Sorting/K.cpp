#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> nums;

// Добавляем нечетные числа по возрастанию
    for (int i = 1; i <N+1; i+=2) {
        nums.push_back(i);
    }

// Добавляем четные числа по убыванию
// N-(N%2)  формула нахождения максимального четного числа <=N
    for (int i = N-(N%2); i > 0; i-=2) {
        nums.push_back(i);
    }
    for (int i = 0; i < N; i++) {
        std::cout << nums[i] << " ";
    }
}