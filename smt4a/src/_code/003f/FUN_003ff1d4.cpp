/* Stores `value` (0/1) into bit 1 of the global flag byte. */
#include "common.h"

extern "C" {

extern u8 *FUN_002840e0(void);

void FUN_003ff1d4(u32 unused, s8 value)
{
    u8 *flags = FUN_002840e0();

    *flags = (*flags & ~2) | (value << 1);
}

}
