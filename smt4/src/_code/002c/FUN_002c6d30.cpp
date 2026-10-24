/* NON_MATCHING: Retail movne r1, #0 differs from recovered movne r0, #0. */
#include "common.h"

struct EntryRecordView {
    u8 unk00[0x2c]; // 0x00
    u16 unk2C;      // 0x2c
};

extern "C" {
s32 idIsAbove400(s32 id);
s32 FUN_0024c52c(s32 id);
EntryRecordView *dataTable40FindById(s32 id);
s32 FUN_00257568(s32 *left, s32 *right);

// Compare classification and descending record fields, delegating ties.
s32 FUN_002c6d30(s32 *left, s32 *right)
{
    s32 leftClass;
    u16 leftField;
    if (idIsAbove400(*left) != 0) {
        leftClass = 99;
        leftField = 0;
    } else {
        leftClass = FUN_0024c52c(*left);
        leftField = dataTable40FindById(*left)->unk2C;
    }

    s32 rightClass;
    u16 rightField;
    if (idIsAbove400(*right) != 0) {
        rightClass = 99;
        rightField = 0;
    } else {
        rightClass = FUN_0024c52c(*right);
        rightField = dataTable40FindById(*right)->unk2C;
    }

    s32 difference = leftClass - rightClass;
    if (difference != 0)
        return difference;

    difference = rightField - leftField;
    if (difference != 0)
        return difference;

    return FUN_00257568(left, right);
}
}
