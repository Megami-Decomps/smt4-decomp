/* Compares two ids: by FUN_001ba3d4 key (ascending), then by the byte at +0x24 of their FUN_00192690 records (descending). */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 rank;
} Record;

extern s32 FUN_001ba3d4(u16 id);
extern Record *FUN_00192690(u32 id);

s32 FUN_003aa108(u16 *a, u16 *b)
{
    s32 keyA = FUN_001ba3d4(*a);
    s32 keyB = FUN_001ba3d4(*b);
    s32 diff = keyA - keyB;

    if (diff == 0) {
        Record *recordA = FUN_00192690(*a);
        Record *recordB = FUN_00192690(*b);

        diff = recordB->rank - recordA->rank;
    }
    return diff;
}

}
