#include <unistd.h>

int main(void) {
    // Write the desired string to the standard error
    char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, sizeof(msg) - 1);

    // Return 1 as required
    return 1;
}
