#include "common.h"

extern "C" {

extern u8 *FUN_002c2950(void);

u8 FUN_002df80c(int index)
{
    u8 *work = FUN_002c2950();

    return work[index + 0xc18];
}

} /* extern "C" */
