#include <iostream>
#include <string>

std::string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
std::string teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
std::string tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

std::string convertToWords(int num) {
    if (num == 0) {
        return "zero";
    }

    std::string result;

    if (num >= 1000) {
        result += ones[num / 1000] + " thousand ";
        num %= 1000;
    }

    
    if (num >= 100) {
        result += ones[num / 100] + " hundred ";
        num %= 100;
    }

    
    if (num >= 20) {
        result += tens[num / 10] + " ";
        num %= 10;
    } else if (num >= 11) {
        result += teens[num - 10] + " ";
        num = 0;  
    }

    if (num > 0) {
        result += ones[num] + " ";
    }

    return result;
}

int main() {
    int N;
    std::cout << "Enter an integer: ";
    std::cin >> N;

    std::string result = convertToWords(N);
    std::cout << "In words: " << result << std::endl;

    return 0;
}
