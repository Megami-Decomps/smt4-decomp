#include "battle/BtlEffectFiles.h"

extern "C" {

u32 keyedRecordRegisterName(const char *name);
u32 FUN_003478dc(u32 index, char *data);

/* Registers and parses loaded marker effect files whose buffers begin with the VER header. */
void nameEntriesRegisterVerNames(void *work)
{
    BtlEffectFiles *owner = static_cast<BtlEffectFiles *>(work);
    s32 i;

    for (i = 0; i < 11; i++) {
        BtlEffectSlot *entry = &owner->markerSlots[i];
        char *data = static_cast<char *>(entry->file);

        if (data[0] == 'V' && data[1] == 'E' && data[2] == 'R') {
            u32 index = keyedRecordRegisterName(entry->name);
            entry->handle = index;
            entry->handle = FUN_003478dc(index, data);
        }
    }
}

} /* extern "C" */
