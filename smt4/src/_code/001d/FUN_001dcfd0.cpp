#include "common.h"

extern "C" {

int FUN_00291414(u32 item);
int FUN_002916ac(void *obj);

typedef struct Group {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ u32 unk024;
    /* 0x028 */ u32 unk028;
    /* 0x02C */ u32 unk02C;
    /* 0x030 */ u32 unk030;
    /* 0x034 */ u8 unk034[0x1F4];
    /* 0x228 */ u32 *unk228;
    /* 0x22C */ u8 unk22C[0xC];
    /* 0x238 */ u32 items[0x32];
} Group;

void FUN_001dcfd0(Group *group)
{
    s32 i = 0;

    if (group != NULL) {
        do {
            FUN_00291414(group->items[i]);
            i++;
        } while (i < 0x32);
        group->unk024 = 0;
        group->unk028 = 0;
        group->unk02C = 0;
        group->unk030 = 0;
        if (group->unk228 != NULL) {
            *group->unk228 = 0;
        }
        FUN_002916ac(group);
    }
}

} /* extern "C" */
