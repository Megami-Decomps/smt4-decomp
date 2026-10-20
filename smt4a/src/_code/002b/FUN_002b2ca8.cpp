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

/* Compares two record ids by their table value (lower first), then kind, order (higher first) and id. */
s32 FUN_002b2ca8(u16 *a, u16 *b)
{
    Record *recordA = FUN_00184310(*a);
    Record *recordB = FUN_00184310(*b);
    s32 diff = dataTableGetEntry0102Value(recordA->id) - dataTableGetEntry0102Value(recordB->id);

    if (diff == 0) {
        recordA = FUN_00184310(*a);
        recordB = FUN_00184310(*b);
        diff = recordA->kind - recordB->kind;
        if (diff == 0) {
            diff = recordB->order - recordA->order;
            if (diff == 0) {
                diff = recordA->id - recordB->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
