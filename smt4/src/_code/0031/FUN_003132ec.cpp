/* Compares two ids: by FUN_0028fb40 key (ascending), then by the byte at +0x54 of their dataTable08Sub0GetRecord records (descending). */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 rank;
} Record;

extern s32 FUN_0028fb40(u16 id);
extern Record *dataTable08Sub0GetRecord(u32 id);

s32 FUN_003132ec(u16 *a, u16 *b)
{
    s32 keyA = FUN_0028fb40(*a);
    s32 keyB = FUN_0028fb40(*b);
    s32 diff = keyA - keyB;

    if (diff == 0) {
        Record *recordA = dataTable08Sub0GetRecord(*a);
        Record *recordB = dataTable08Sub0GetRecord(*b);

        diff = recordB->rank - recordA->rank;
    }
    return diff;
}

}
