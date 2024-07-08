#include <avr/io.h>

void setup()
{
    // Set pin 13 (PORTB5) as an output
    DDRB |= (1 << DDB5);
}

void loop()
{
    // Set pin 13 (PORTB5) high
    PORTB |= (1 << PORTB5);

    // Uncomment these lines if you need the delay functionality
    // _delay_ms(1000);
    // PORTB &= ~(1 << PORTB5);
    // _delay_ms(1000);
}

int main(void)
{
    setup();

    while (1)
    {
        loop();
    }

    return 0;
}
