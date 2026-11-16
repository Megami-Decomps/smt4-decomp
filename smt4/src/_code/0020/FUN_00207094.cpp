/* Compares two ids: by flagValueRead key (descending), then by the byte at +0x6F of their dataTable08Sub1GetRecord records. */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x6F];
    /* 0x6F */ u8 rank;
} Record;

extern s32 flagValueRead(u16 id);
extern Record *dataTable08Sub1GetRecord(u32 id);

s32 FUN_00207094(u16 *a, u16 *b)
{
    s32 keyA = flagValueRead(*a);
    s32 keyB = flagValueRead(*b);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        Record *recordA = dataTable08Sub1GetRecord(*a);
        Record *recordB = dataTable08Sub1GetRecord(*b);

        diff = recordA->rank - recordB->rank;
    }
    return diff;
}

}
