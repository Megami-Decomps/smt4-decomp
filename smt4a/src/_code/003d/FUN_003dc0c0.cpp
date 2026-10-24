/* NON_MATCHING: retail keeps the menu pointer in r5 and the id in r4 (swapped here) and merges the three forced-choice/default paths of mode 2 into one shared entry-append block, reading forceSecond through an r5+0x200 base; this build emits each path's append separately. */
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {
void ifTouchRegionRemove(void);
void uiSpriteSelectAnim(GauntletSprite *sprite, s32 anim);
void uiSpriteSetKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void uiSpriteSetImageKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void FUN_00202400(void);
void FUN_00203b40(void *controller, u32 count, u32 visibleRows, u32 enabled, u32 wrap, u32 reset);
void FUN_00212724(void);
s32 FUN_002a4894(void *controller);
void FUN_00387240(GauntletSprite *sprite, s32 owner, s32 id);
void FUN_003d1aa0(GauntletAppMenuWork *menu);
s32 FUN_003e4230(u32 id);
s32 gameDataFlagTestBit(u32 id);

/* Switches the Gauntlet app menu to `mode` and sets up what that mode shows; returns 0 when the mode was skipped. */
u32 FUN_003dc0c0(GauntletAppMenuWork *menu, u32 mode)
{
    switch (mode) {
    case 0:
        uiSpriteSetKeyframe(&menu->list.sprites[0], 3, 0);
        uiSpriteSetImageKeyframe(&menu->list.sprites[0], 6, 0);
        FUN_00202400();
        FUN_003d1aa0(menu);
        break;
    case 1:
        menu->list.count = 0;
        for (u32 id = 1; id < 0x8D; id++) {
            if (gameDataFlagTestBit(id) != 0) {
                menu->list.entries[menu->list.count] = id;
                menu->list.count++;
            }
        }
        FUN_00203b40(menu->list.controller, menu->list.count, 10, 1, 1, 1);
        break;
    case 2:
        menu->list.count = 0;
        if (menu->list.forceFirst != 0) {
            u32 id = 0x2E;
            if (gameDataFlagTestBit(id) == 0 && FUN_003e4230(id) == 0) {
                menu->list.entries[menu->list.count] = id;
                menu->list.count++;
            }
        } else if (menu->list.forceSecond == 0) {
            for (u32 id = 1; id < 0x8D; id++) {
                if (gameDataFlagTestBit(id) == 0 && FUN_003e4230(id) == 0) {
                    menu->list.entries[menu->list.count] = id;
                    menu->list.count++;
                }
            }
        } else {
            u32 id = 0x18;
            if (gameDataFlagTestBit(id) == 0 && FUN_003e4230(id) == 0) {
                menu->list.entries[menu->list.count] = id;
                menu->list.count++;
            }
        }
        FUN_00203b40(menu->list.controller, menu->list.count, 10, 1, 1, 1);
        if (menu->list.count == 0) {
            FUN_003dc0c0(menu, menu->list.mode);
            return 0;
        }
        break;
    case 5:
        uiSpriteSelectAnim(&menu->list.sprites[3], 1);
        FUN_00387240(&menu->list.sprites[3], 0x14, FUN_002a4894(menu->list.controller) + 0x40E);
        menu->list.sprites[3].unk18 = 0xA0;
        break;
    case 7:
        uiSpriteSetKeyframe(&menu->list.sprites[0], 4, 0);
        uiSpriteSetImageKeyframe(&menu->list.sprites[0], 7, 0);
        FUN_00212724();
        for (s32 i = 0; i < menu->touch.touchRegionCount; i++) {
            ifTouchRegionRemove();
        }
        menu->touch.touchRegionCount = 0;
        break;
    }
    menu->list.mode = mode;
    return 1;
}
}
