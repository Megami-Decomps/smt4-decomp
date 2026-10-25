#include "common.h"
#include "quest_center/qcMain.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 unk08[8];
} Entry;                        /* 0x10 */
extern Entry g_dataTableSlots[];

/* Returns the value of entry `index` of the 0x50-entry table at 0x5E2214 (0 when out of range). */
u32 dataTableValueOrZero(u32 index)
{
    u32 value;

    if (index < 0x50) {
        value = g_dataTableSlots[index].value;
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
