/* Stores `value` (0/1) into bit 1 of the global flag byte. */
#include "common.h"

extern "C" {

extern u8 *flagsBGetPtr(void);

void gameFlagsSetAlternateMode(u32 unused, s8 value)
{
    u8 *flags = flagsBGetPtr();

    *flags = (*flags & ~2) | (value << 1);
}

}
