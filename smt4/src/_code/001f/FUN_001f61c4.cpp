#include "common.h"

extern "C" {

typedef struct Ref {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 group;
} Ref;

typedef struct Record {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 kind;
    /* 0x3 */ u8 grade;
} Record;

typedef struct Group {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 id;
} Group;

Group *FUN_00257510(u32 group);
Record *devilGetRecord(u32 id);
s32 FUN_00257444(s32 id);

/* Compares two refs by their group's FUN_00257444 value (higher first), then record kind, grade (higher first) and id. */
s32 FUN_001f61c4(Ref *a, Ref *b)
{
    Group *groupA = FUN_00257510(a->group);
    Group *groupB = FUN_00257510(b->group);
    s32 diff;

    devilGetRecord(a->id);
    devilGetRecord(b->id);
    diff = FUN_00257444(groupA->id) - FUN_00257444(groupB->id);
    if (diff == 0) {
        Record *recordA = devilGetRecord(a->id);
        Record *recordB = devilGetRecord(b->id);

        diff = recordA->kind - recordB->kind;
        if (diff == 0) {
            diff = recordB->grade - recordA->grade;
            if (diff == 0) {
                diff = recordA->id - recordB->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
