#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 sortKey;
} Record;

extern u32 gameDataFlagTestBit(s32 id);
extern Record *FUN_00186f58(s32 id);

/* Comparison of two ids: an id with flag bits the other lacks sorts first (-1) or last (1); otherwise by the records' sort key. */
s32 FUN_00221a08(s32 *a, s32 *b)
{
    u32 flagsA = gameDataFlagTestBit(*a);
    s32 result = 0;
    u32 flagsB = gameDataFlagTestBit(*b);

    if ((flagsA & ~flagsB) != 0) {
        result = -1;
    }
    if ((flagsB & ~flagsA) != 0) {
        result = 1;
    }
    if (result == 0) {
        Record *recordA = FUN_00186f58(*a);
        Record *recordB = FUN_00186f58(*b);

        result = recordA->sortKey - recordB->sortKey;
    }
    return result;
}

}
