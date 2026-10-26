/* NON_MATCHING: the (short) conversion for the switch is predicated (sxthlt) before the bge in retail; built emits it after the branch */
#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct NameRow0031a914 {
    /* 0x00 */ char name[0xc];
} NameRow0031a914;

typedef struct NameTable0031a914 {
    /* 0x00 */ u8 unk00[0x1e];
    /* 0x1e */ NameRow0031a914 rows[1];
} NameTable0031a914;

extern char DAT_0052c8f4[];   /* "NoTableLoaded" */
extern char DAT_0052c904[];   /* "NoName" */

s32 loadSlotIsLoaded(u32 slot);


/* Row of the name table for party slot `slot`; -1 when out of range. */
static __inline s32 partySlotRow(s16 slot)
{
    switch (slot) {
    case 0:
        return 2;
    case 1:
        return 1;
    case 2:
        return 3;
    case 3:
        return 0;
    case 4:
        return 4;
    default:
        return -1;
    }
}

/* The display name of party slot `index` (0..4) from data table 0x36; placeholder texts when the table is not loaded or the index is out of range. */
const char *FUN_0031a914(s32 index)
{
    const char *result;

    if (loadSlotIsLoaded(0x36) == 0) {
        result = DAT_0052c8f4;
    } else if (index >= 5) {
        result = DAT_0052c904;
    } else {
        s32 row = partySlotRow(index);
        result = static_cast<NameTable0031a914 *>(dataTableGetEntries(dataTableGet(0x36, 0)))->rows[row].name;
    }
    return result;
}

} /* extern "C" */
