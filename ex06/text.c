#include <unistd.h>

void ft_print_comb2(void) {
    int i;
    int j;

    i = 0;
    while (i <= 99) 
    {
        j = i + 1;
        while (j <= 99) 
	{
            // convert i and j to characters and print them
            char c1 = '0' + i / 10;
            char c2 = '0' + i % 10;
            char c3 = '0' + i / 10;
            char c4 = '0' + j % 10;

            write(1, &c1, 1);
            write(1, &c2, 1);
            write(1, " ", 1);
            write(1, &c3, 1);
            write(1, &c4, 1);

            // if not the last combination, print a comma and a space
            if (i != 98 || j != 99) {
                write(1, ", ", 2);
            }

            j++;
        }
        i++;
    }

    // print a newline character at the end
    write(1, "\n", 1);
}
