/* Compares two ids: by FUN_0028fb40 key (descending), then by the byte at +0x6F of their FUN_002b4670 records. */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x6F];
    /* 0x6F */ u8 rank;
} Record;

extern s32 FUN_0028fb40(u16 id);
extern Record *FUN_002b4670(u32 id);

s32 FUN_00207094(u16 *a, u16 *b)
{
    s32 keyA = FUN_0028fb40(*a);
    s32 keyB = FUN_0028fb40(*b);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        Record *recordA = FUN_002b4670(*a);
        Record *recordB = FUN_002b4670(*b);

        diff = recordA->rank - recordB->rank;
    }
    return diff;
}

}
