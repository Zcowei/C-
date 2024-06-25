#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers = {4, 2, 5, 1, 3}; // Inicialização de vector
    
    std::sort(numbers.rbegin(), numbers.rend()); // Ordena os elementos do vector
    // R(reverse) antes do begin e end reverte a contagem.
    
    for (int number :numbers) {
        std::cout << number << " ";
    }
std::cout << std::endl;

    return 0;
}