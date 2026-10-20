#include "common.h"

extern "C" {

#define FLAG_ENABLED_SHIFT 1
#define FLAG_ENABLED_MASK (1 << FLAG_ENABLED_SHIFT)

u8 *FUN_0037d494(void);

/* Sets bit 1 (`enabled`) of the flag byte returned by FUN_0037d494 to `enabled` (0 or 1). */
void FUN_0040a864(u32 unused, u8 enabled)
{
    u8 *flags = FUN_0037d494();

    *flags = (*flags & ~FLAG_ENABLED_MASK) | (enabled << FLAG_ENABLED_SHIFT);
}

} /* extern "C" */
