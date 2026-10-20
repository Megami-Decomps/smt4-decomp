#include "common.h"

extern "C" {

#define FLAG_ENABLED_SHIFT 1
#define FLAG_ENABLED_MASK (1 << FLAG_ENABLED_SHIFT)

u8 *gameDataBlocksGetHalf280C4(void);

/* Sets bit 1 (`enabled`) of the flag byte returned by gameDataBlocksGetHalf280C4 to `enabled` (0 or 1). */
void FUN_0040a864(u32 unused, u8 enabled)
{
    u8 *flags = gameDataBlocksGetHalf280C4();

    *flags = (*flags & ~FLAG_ENABLED_MASK) | (enabled << FLAG_ENABLED_SHIFT);
}

} /* extern "C" */
