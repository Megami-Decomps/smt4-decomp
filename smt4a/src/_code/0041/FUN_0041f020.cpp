/* NON_MATCHING: retail loads itemCount after the three byte clears and stores the final three region ids with one stm; the build interleaves them. */
#include "common.h"

extern "C" {

typedef struct TouchRegionMenu {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ s32 itemCount;
    /* 0x01C */ u8 unk01C[0x420];
    /* 0x43C */ s16 regions[6];
    /* 0x448 */ s32 regionCount;
    /* 0x44C */ u8 unk44C;
    /* 0x44D */ u8 unk44D;
    /* 0x44E */ u8 unk44E;
    /* 0x44F */ u8 unk44F[0x2CD];
    /* 0x71C */ s32 unk71C;
    /* 0x720 */ s32 unk720;
    /* 0x724 */ s32 unk724;
} TouchRegionMenu;

void ifTouchRegionRemove(void);
void fillThreeWordsWithByte(void *words, s32 value);
s16 FUN_001643b4(s32 group, s32 index);

/* Rebuild the menu's touch regions: one per item, then the three fixed buttons. */
void FUN_0041f020(TouchRegionMenu *menu)
{
    s32 i;

    for (i = 0; i < menu->regionCount; i++) {
        ifTouchRegionRemove();
    }
    menu->regionCount = 0;
    fillThreeWordsWithByte(menu->regions, -1);
    menu->unk44C = 0;
    menu->unk44D = 0;
    menu->unk44E = 0;
    for (i = 0; i < menu->itemCount; i++) {
        menu->regions[i] = FUN_001643b4(0x2b, i + 0x51);
        menu->regionCount++;
    }
    for (i = 0; i < 3; i++) {
        menu->regions[2 + i] = FUN_001643b4(0x2b, i + 0xb);
        menu->regionCount++;
    }
    menu->unk71C = menu->regions[4];
    menu->unk720 = menu->regions[2];
    menu->unk724 = menu->regions[3];
}

} /* extern "C" */
