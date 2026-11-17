#include "common.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {

typedef struct BitFlagSet {
    /* 0x00 */ u8 unk00[0x55];
    /* 0x55 */ u8 bits[1];
} BitFlagSet;


/* Returns 0 when bit `index` of the bit set at 0x55 is set, 1 when it is clear. */
u8 bitTableIndexIsClear(u32 index)
{
    BitFlagSet *table;

    table = reinterpret_cast<BitFlagSet *>(saveGetUserSettingsBlock());
    if (((u32)table->bits[index >> 3] & (1 << (index & 7))) != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
