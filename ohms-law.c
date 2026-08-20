// ohms law
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char ("Do you know the current? ");

    if (c == 'n')
    {
        float voltage = get_float ("What's the voltage in volts? ");

        float resistance = get_float("What's the resistance in ohm? ");

        printf("%0.5f\n", voltage / resistance);

        printf("That is the current in amp\n");
    }
    else if (c == 'y')
    {
        char d = get_char ("Do you know the resistance? ");

        if (d == 'n')
        {
        float voltage = get_float ("What's the voltage in volts? ");

        float current = get_float ("What's the current in amps? ");

        printf("%0.5f\n", voltage / current);

        printf("That is the resistance in ohm\n");

        }
        else if (d == 'y')
        {
            float resistance = get_float("What's the resistance in ohm?");

            float current = get_float ("What's the current in amps? ");

            printf("%0.5f\n", resistance * current);

            printf("That is the voltage in volts\n");

        }



    }

}
