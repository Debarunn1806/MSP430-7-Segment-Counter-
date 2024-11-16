#include <msp430.h>

/**
 * @brief Entry point for the code
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // Stop Watchdog (Not recommended for code in production and devices working in field)
    
    P1DIR |= 0x7F;              // Set P1.0-P1.6 as output (all segments on)

    while (1)
    {
        volatile unsigned long i;

        // Display 0
        P1OUT |= 0x3F;          // 0 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x3F;         // 0 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 1
        P1OUT |= 0x06;          // 1 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x06;         // 1 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 2
        P1OUT |= 0x5B;          // 2 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x5B;         // 2 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 3
        P1OUT |= 0x4F;          // 3 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x4F;         // 3 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 4
        P1OUT |= 0x66;          // 4 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x66;         // 4 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 5
        P1OUT |= 0x6D;          // 5 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x6D;         // 5 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 6
        P1OUT |= 0x7D;          // 6 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x7D;         // 6 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 7
        P1OUT |= 0x07;          // 7 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x07;         // 7 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 8
        P1OUT |= 0x7F;          // 8 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x7F;         // 8 -> OFF
        for (i = 0; i < 20000; i++);  // Delay

        // Display 9
        P1OUT |= 0x6F;          // 9 -> ON
        for (i = 0; i < 20000; i++);  // Delay
        P1OUT &= ~0x6F;         // 9 -> OFF
        for (i = 0; i < 20000; i++);  // Delay
    }
}
