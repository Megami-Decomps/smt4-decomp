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

/* Compares two record ids by kind (higher first), then by order (lower first), then by id (higher first). */
s32 FUN_003603a0(u16 *a, u16 *b)
{
    Record *recordA = FUN_00184310(*a);
    Record *recordB = FUN_00184310(*b);
    s32 diff = recordB->kind - recordA->kind;

    if (diff == 0) {
        diff = recordA->order - recordB->order;
        if (diff == 0) {
            diff = recordB->id - recordA->id;
        }
    }
    return diff;
}

} /* extern "C" */
