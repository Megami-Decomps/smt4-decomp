#include "common.h"

struct GroupItem {
    /* 0x00 */ u8 data[32];
};

struct ItemGroup {
    /* 0x00 */ u8 unk00[16];
    /* 0x10 */ u32 active[12];
    /* 0x40 */ GroupItem items[12];
};

extern "C" {

void FUN_0042227c(GroupItem *item);

/* Updates an active item in the group. */
void FUN_00423a1c(ItemGroup *group, u32 index)
{
    if (group->active[index] != 0)
        FUN_0042227c(&group->items[index]);
}

}
