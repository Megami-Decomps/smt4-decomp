#include "common.h"

extern "C" {

void FUN_001d1a34(u32 voice, u32 value);

typedef struct Group {
    /* 0x00 */ u32 voices[2];
    /* 0x08 */ s32 count;
    /* 0x0C */ u8 unk0C[0x17];
    /* 0x23 */ u8 value;
} Group;

/* Calls FUN_001d1a34 with `value` for each of the group's voices that exists, then stores `value` at 0x23. */
void FUN_001cbd00(Group *group, u32 value)
{
    s32 i;

    i = 0;
    if (i < group->count) {
        do {
            if (group->voices[i] != 0) {
                FUN_001d1a34(group->voices[i], value);
            }
            i = i + 1;
        } while (i < group->count);
    }
    group->value = (u8)value;
}

} /* extern "C" */
