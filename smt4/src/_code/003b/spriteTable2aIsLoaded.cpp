#include "common.h"

extern "C" {

extern int asdTMTexTableNodeIsLoaded(u32 table, u32 index);

u8 spriteTable2aIsLoaded(void)
{
    return asdTMTexTableNodeIsLoaded(0x2a, 0) != 0;
}

} /* extern "C" */
