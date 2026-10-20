#include "common.h"

extern "C" {

typedef struct Target0034008c {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ f32 progress;
    /* 0x78 */ f32 limit;
} Target0034008c;

typedef struct Item0034008c {
    /* 0x00 */ u32 flags;        /* bit 2: already started */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ Target0034008c *target;
} Item0034008c;

typedef struct Group0034008c {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Item0034008c *items[3];
} Group0034008c;

void FUN_0029bb14(f32 limit);

/* Starts every item of the group that has not started yet: resets its target's progress and passes the target's limit on. */
void groupStartItems(Group0034008c *group)
{
    s32 i;

    for (i = 0; i < 3; i++) {
        Item0034008c *item = group->items[i];

        if (item != NULL && (item->flags & 4) == 0) {
            item->flags |= 4;
            item->target->progress = 0.0f;
            FUN_0029bb14(item->target->limit);
        }
    }
}

} /* extern "C" */
