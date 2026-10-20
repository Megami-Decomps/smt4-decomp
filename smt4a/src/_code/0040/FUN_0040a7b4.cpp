/* Clears bit 0 of the global flag byte. */
#include "common.h"

extern "C" {

extern u8 *FUN_0037d494(void);

void FUN_0040a7b4(void)
{
    *FUN_0037d494() &= ~1;
}

}
