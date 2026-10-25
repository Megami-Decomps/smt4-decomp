#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 sortKey;
} Record;

extern u32 flagBitIsSet(s32 id);
extern Record *appCostRecordFindById(s32 id);

/* Comparison of two ids: an id with flag bits the other lacks sorts first (-1) or last (1); otherwise by the records' sort key. */
s32 FUN_0019d758(s32 *a, s32 *b)
{
    u32 flagsA = flagBitIsSet(*a);
    s32 result = 0;
    u32 flagsB = flagBitIsSet(*b);

    if ((flagsA & ~flagsB) != 0) {
        result = -1;
    }
    if ((flagsB & ~flagsA) != 0) {
        result = 1;
    }
    if (result == 0) {
        Record *recordA = appCostRecordFindById(*a);
        Record *recordB = appCostRecordFindById(*b);

        result = recordA->sortKey - recordB->sortKey;
    }
    return result;
}

}
