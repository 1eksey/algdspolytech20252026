#include "func.h"

char operations[] = {'+', '-', '*', '/'};

int main() {
    char num1_str[102];
    long long num2;
    read_input_from_file("input.txt", num1_str, &num2);
    int digits[MAX_DIGITS];
    int n = digits_split(num1_str, digits);
    char result_oper[MAX_DIGITS] = {0};
    char current_oper[MAX_DIGITS] = {0};
    int found = find_equation(digits, n, 0, result_oper, current_oper, operations, num2);
    write_output_to_file("output.txt", digits, n, result_oper, num2, found);
    
    return 0;
}