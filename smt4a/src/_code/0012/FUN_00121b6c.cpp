#include "common.h"

extern "C" {

typedef struct KindInfo {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u32 value;
} KindInfo;

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x31C];
    /* 0x31C */ u32 primary;
    /* 0x320 */ u32 fallback;
} Owner;

typedef struct FlagBlockView {
    /* 0x00 */ u8 unk00[0x19];
    /* 0x19 */ s8 setPrimary;
    /* 0x1A */ s8 setFallbacks;
} FlagBlockView;
extern FlagBlockView g_flagBlock;
extern u8 DAT_00594e7c[];

KindInfo *FUN_002eac34(s32 kind);
void FUN_002f6c32(u32 value, u8 *table, s32 size);
void FUN_00121c68(Owner *owner);

/* Registers the owner's values in the kind table: kind 10 gets the primary value, and kinds 9, 1 and 8 get the fallback value if they have none yet. */
void FUN_00121b6c(Owner *owner)
{
    KindInfo *info;

    FUN_002f6c32(owner->primary, DAT_00594e7c, 0x10);
    FUN_00121c68(owner);
    if (g_flagBlock.setPrimary != 0) {
        info = FUN_002eac34(10);
        info->value = owner->primary;
    }
    if (g_flagBlock.setFallbacks != 0) {
        info = FUN_002eac34(9);
        if (info->value == 0) {
            info = FUN_002eac34(9);
            info->value = owner->fallback;
        }
        info = FUN_002eac34(1);
        if (info->value == 0) {
            info = FUN_002eac34(1);
            info->value = owner->fallback;
        }
        info = FUN_002eac34(8);
        if (info->value == 0) {
            info = FUN_002eac34(8);
            info->value = owner->fallback;
        }
    }
}

} /* extern "C" */
