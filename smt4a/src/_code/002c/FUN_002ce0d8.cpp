#include "common.h"

extern "C" {

typedef struct Ref {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 group;
} Ref;

typedef struct Record {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 kind;
    /* 0x3 */ u8 unk3;
    /* 0x4 */ u8 unk4[2];
    /* 0x6 */ u16 order;
} Record;

Record *FUN_00184310(u32 id);

/* Compares two refs: refs without a group sort last, then by group, record kind, order (higher first) and id. */
u32 FUN_002ce0d8(Ref *a, Ref *b)
{
    u32 groupB = b->group;
    u32 result;

    if (a->group == 0) {
        return groupB != 0;
    }
    if (groupB == 0) {
        result = 0xFFFFFFFF;
    } else {
        result = a->group - groupB;
        if (result == 0) {
            Record *recordA = FUN_00184310(a->id);
            Record *recordB = FUN_00184310(b->id);

            result = recordA->kind - recordB->kind;
            if (result == 0) {
                result = recordB->order - recordA->order;
                if (result == 0) {
                    result = recordA->id - recordB->id;
                }
            }
        }
    }
    return result;
}

} /* extern "C" */
