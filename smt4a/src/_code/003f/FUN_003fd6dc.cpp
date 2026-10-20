#include "common.h"

extern "C" {

u8 *FUN_002840c4(u32 index);

/* Clears the low two flag bits of each of the 52 entries. */
void FUN_003fd6dc(void)
{
    u32 i = 0;

    do {
        u8 *flags = FUN_002840c4(i & 0xffff);

        i++;
        *flags = *flags & ~3;
    } while ((int)i < 52);
}

} /* extern "C" */
