#include "gamedata/NkmBaseRecordA.h"

extern "C" {

typedef struct Ref {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 group;
} Ref;

typedef struct Group {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 id;
} Group;

Group *dataTable12FindBySortKey(u32 group);
s32 FUN_0023e60c(s32 id);

/* Compares two refs by their group's FUN_0023e60c value (higher first), then record kind, order and id. */
s32 FUN_0034f2e0(Ref *a, Ref *b)
{
    Group *groupA = dataTable12FindBySortKey(a->group);
    Group *groupB = dataTable12FindBySortKey(b->group);
    s32 diff;

    nkmBaseGetRecord(a->id);
    nkmBaseGetRecord(b->id);
    diff = FUN_0023e60c(groupB->id) - FUN_0023e60c(groupA->id);
    if (diff == 0) {
        NkmBaseRecordA *recordA = nkmBaseGetRecord(a->id);
        NkmBaseRecordA *recordB = nkmBaseGetRecord(b->id);

        diff = recordB->race - recordA->race;
        if (diff == 0) {
            diff = recordB->level - recordA->level;
            if (diff == 0) {
                diff = recordA->id - recordB->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
