/* NON_MATCHING: compiler omits retail's separate zero-result register, shortening the early-return path. */
#include "common.h"
extern "C" {
struct SlotTable { u8 unk00[0x20]; void *slots[16]; };
extern struct { u8 unk00[0x318]; SlotTable *table; } g_asdSoundHandleState;
void asdSoundObjectStop(void *work);
/* Updates a populated slot when its table and index are valid. */
s32 FUN_002e10ac(u32 slot)
{
    SlotTable *table = g_asdSoundHandleState.table;
    s32 result = 0;
    if (slot < 16 && table != NULL) {
        if (table->slots[slot] != NULL)
            asdSoundObjectStop(table->slots[slot]);
        result = 1;
    }
    return result;
}
}
