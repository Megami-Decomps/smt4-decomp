#include "common.h"
extern "C" {
struct SlotTable { u8 unk00[0x20]; void *slots[16]; };
extern struct { u8 unk00[0x318]; SlotTable *table; } g_asdSoundHandleState;
void nw_snd_internal_BasicSound_Stop(void *work, s32 frames); // declcheck: local (the shared declaration does not compile here or changes this unit)
/* Updates a populated slot when its table and index are valid. */
s32 asdSoundStopSlot(u32 slot, s32 frames)
{
    SlotTable *table = g_asdSoundHandleState.table;
    s32 result = 0;
    if (slot >= 16 || table == NULL) {
        return result;
    }
    if (table->slots[slot] != NULL) {
        nw_snd_internal_BasicSound_Stop(table->slots[slot], frames);
    }
    return 1;
}
}
