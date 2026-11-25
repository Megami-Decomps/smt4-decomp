#include "battle/BtlActionFallback.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

void asdSoundSelectSlotB(s32 value);
void asdSndEnsureCurrentSlotData(u32 value);

/* The table row with the given id, or NULL. */
static __inline const BtlActionFallback *findRow(u32 id)
{
    s32 index = 0;
    while (index < BTL_FALLBACK_ACTION_COUNT) {
        const BtlActionFallback *row = &g_jyoucyuRowTable[index];
        if (row->id == id) {
            return row;
        }
        ++index;
    }
    return NULL;
}

/* Looks id up in the three-row table; when the row has a value and entry 1 is clear, passes the value on. */
void jyoucyuRowApply(u32 id)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        const BtlActionFallback *row = findRow(id);
        u32 value;
        if (row != NULL) {
            value = row->sound;
        }
        if (row == NULL || value == 0) {
            return;
        }
        if (jyoucyuGetTableEntry(1) != 0) {
            return;
        }
        asdSoundSelectSlotB(2);
        asdSndEnsureCurrentSlotData(value);
    }
}

} /* extern "C" */
