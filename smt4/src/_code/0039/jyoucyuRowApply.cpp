#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

typedef struct Row00394750 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 unk08[8];
} Row00394750;

void asdSoundSelectSlotB(s32 value);
void asdSndEnsureCurrentSlotData(u32 value);

extern Row00394750 DAT_0043988c[3]; /* 0x43988c */

/* The table row with the given id, or NULL. */
static __inline Row00394750 *findRow(u32 id)
{
    s32 index = 0;
    while (index < 3) {
        Row00394750 *row = &DAT_0043988c[index];
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
        Row00394750 *row = findRow(id);
        u32 value;
        if (row != NULL) {
            value = row->value;
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
