/* Clears bit 0 of the global flag byte. */
#include "common.h"

extern "C" {

extern u8 *gameDataBlocksGetHalf280C4(void);

void FUN_0040a7b4(void)
{
    *gameDataBlocksGetHalf280C4() &= ~1;
}

}
