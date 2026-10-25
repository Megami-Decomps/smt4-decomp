#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


/* First active, present, visible unit among units 4-0x35, or NULL. */
BtlEntry *btlFindFirstActiveUnit(BtlMainState *btl)
{
    int i = 4;
    BtlEntry *unit;
    u32 flags;

    while (1) {
        unit = btl->entries + i;
        flags = unit->flags;
        if ((((flags & 1) != 0) && ((flags & 0x40) == 0)) && ((flags & 0x10) != 0)) {
            break;
        }
        i = i + 1;
        if (i >= 0x36) {
            return NULL;
        }
    }
    return unit;
}

} /* extern "C" */
