#include "common.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {

extern int flagBitIsSet(u32 button);

/* Counts the held buttons 0x7C-0x7E on top of 4 (5 when 0x7B is held), capped at 8. */
u32 flagCountUnlockedSlots(void)
{
    int count = 4;

    if (flagBitIsSet(0x7b) != 0) {
        count = 5;
    }
    if (flagBitIsSet(0x7c) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x7d) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x7e) != 0) {
        count = count + 1;
    }
    if (count > 8) {
        count = 8;
    }
    return count;
}

} /* extern "C" */
