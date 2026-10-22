#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 kind;
    /* 0x3 */ u8 unk3;
    /* 0x4 */ u8 unk4[2];
    /* 0x6 */ u16 order;
} Record;

Record *FUN_00184310(u32 id);
s32 dataTableGetEntry0102Value(u16 id);

/* Compares two record ids by their table value (higher first), then kind (higher first), order and id. */
s32 btlDevilCompareValueKindAndOrder(u16 *a, u16 *b)
{
    Record *recordA = FUN_00184310(*a);
    Record *recordB = FUN_00184310(*b);
    s32 valueA = dataTableGetEntry0102Value(recordA->id);
    s32 valueB = dataTableGetEntry0102Value(recordB->id);
    s32 diff = valueB - valueA;

    if (diff == 0) {
        recordA = FUN_00184310(*a);
        recordB = FUN_00184310(*b);
        diff = recordB->kind - recordA->kind;
        if (diff == 0) {
            diff = recordA->order - recordB->order;
            if (diff == 0) {
                diff = recordB->id - recordA->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
