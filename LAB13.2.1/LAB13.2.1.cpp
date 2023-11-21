#include <iostream>

#define z 4
#define SQR(x) ((x)*(x))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define PRINT_MESSAGE() \
    std::cout << "Calculate the expression" << std::endl; \
    std::cout << "Input three integer numbers x, y, z:" << std::endl
#define PRINTR(w) std::cout << "Result: " << w << std::endl
#define PRINT_REPEAT_PROMPT() std::cout << "Repeat? (y/n):"
#define INPUT_VAR(prompt, var) do { \
    std::cout << prompt << "="; \
    std::cin >> var;                \
} while (0)
#define GET_REPEAT_INPUT(ch) std::cin >> ch

int main() {
    char ch;
    int result, x, y;
    do {
        PRINT_MESSAGE();
        INPUT_VAR("x", x);
        INPUT_VAR("y", y);

        if (z > 3) {
            result = MAX(SQR(x + y), SQR(x - z));
        }
        else {
            result = MIN(x * y + y * z, SQR(z * x + y * z));
        }

        PRINTR(result);
        PRINT_REPEAT_PROMPT();
        GET_REPEAT_INPUT(ch);
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
