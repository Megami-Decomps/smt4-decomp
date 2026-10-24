#include "common.h"

extern "C" {

struct StateInfo {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0c */ s32 sub;
    /* 0x10 */ u8 unk10[0x48 - 0x10];
    /* 0x48 */ s32 state;
};

struct StateOwner {
    StateInfo *info;
};

void FUN_002dd40c(void);

/* Per-state hook: states 5 and 6 (unless sub-state 3) and 14 trigger FUN_002dd40c. */
u32 FUN_00329d68(StateOwner *owner)
{
    StateInfo *info = owner->info;

    if (info->state >= 2) {
      if (info->state < 18) {
        switch (info->state) {
        case 5:
        case 6:
            if (info->sub != 3) {
                FUN_002dd40c();
            }
            break;
        case 10:
        case 11:
            break;
        case 14:
            FUN_002dd40c();
            break;
        }
      }
    }
    return 0;
}

} /* extern "C" */
