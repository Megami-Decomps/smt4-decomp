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

typedef struct Group {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 id;
} Group;

Group *FUN_00282b9c(u32 group);
Record *FUN_00184310(u32 id);
s32 FUN_0023e60c(s32 id);

/* Compares two refs by their group's FUN_0023e60c value (higher first), then record kind, order and id. */
s32 FUN_0034f2e0(Ref *a, Ref *b)
{
    Group *groupA = FUN_00282b9c(a->group);
    Group *groupB = FUN_00282b9c(b->group);
    s32 diff;

    FUN_00184310(a->id);
    FUN_00184310(b->id);
    diff = FUN_0023e60c(groupB->id) - FUN_0023e60c(groupA->id);
    if (diff == 0) {
        Record *recordA = FUN_00184310(a->id);
        Record *recordB = FUN_00184310(b->id);

        diff = recordB->kind - recordA->kind;
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
