/* NON_MATCHING: the (short) conversion for the switch is predicated (sxthlt) before the bge in retail; built emits it after the branch */
#include "common.h"

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
void *dataTableGet(s32 table, s32 slot);
NameTable0031a914 *dataTableGetEntries(void *table);

/* The display name of party slot `index` (0..4) from data table 0x36; placeholder texts when the table is not loaded or the index is out of range. */
const char *FUN_0031a914(s32 index)
{
    const char *result;
    s32 row;

    if (loadSlotIsLoaded(0x36) == 0) {
        result = DAT_0052c8f4;
    } else if (index < 5) {
        switch ((s16)index) {
        case 0:
            row = 2;
            break;
        case 1:
            row = 1;
            break;
        case 2:
            row = 3;
            break;
        case 3:
            row = 0;
            break;
        case 4:
            row = 4;
            break;
        default:
            row = -1;
            break;
        }
        result = dataTableGetEntries(dataTableGet(0x36, 0))->rows[row].name;
    } else {
        result = DAT_0052c904;
    }
    return result;
}

} /* extern "C" */
