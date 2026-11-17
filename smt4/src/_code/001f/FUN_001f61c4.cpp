#include "common.h"
#include "gamedata/DevilRecord.h"

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
s32 FUN_00257444(s32 id);

/* Compares two refs by their group's FUN_00257444 value (higher first), then record race, level (higher first) and id. */
s32 FUN_001f61c4(Ref *a, Ref *b)
{
    Group *groupA = dataTable12FindBySortKey(a->group);
    Group *groupB = dataTable12FindBySortKey(b->group);
    s32 diff;

    devilGetRecord(a->id);
    devilGetRecord(b->id);
    diff = FUN_00257444(groupA->id) - FUN_00257444(groupB->id);
    if (diff == 0) {
        DevilRecord *recordA = devilGetRecord(a->id);
        DevilRecord *recordB = devilGetRecord(b->id);

        diff = recordA->race - recordB->race;
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
