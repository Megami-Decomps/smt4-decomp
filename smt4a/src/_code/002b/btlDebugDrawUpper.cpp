/* NON_MATCHING: using IV's four draw modes matches the bodies; retail delays saving the work pointer and branches to modes 12 and 14 differently. */
#include "common.h"
#include "shard/JobWork.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"

struct BattleDebugMenu {
    s32 state;
    u8 unk04[12];
    u32 list;
    u8 unk14[8];
    s32 subject;
};
struct BattleDebugMenuGlobals {
    u32 unk00;
    u32 resource;
    BattleDebugMenu *menu;
};
struct BattleDebugDrawWork {
    u8 prefix[0x4CD4];
    u32 enemySkill;
};
extern "C" {
u32 asdListBoxGetSelectedItemId(u32);
u32 FUN_003e83b4(BattleDebugDrawWork *, s32, s32);
void FUN_004d0f48(BattleDebugMenu *, u32);
void uiDrawFlagLabels(BattleDebugMenu *, u32);
extern BattleDebugMenuGlobals g_btlDebugGlobals;
}

/* Draws the upper screen for the battle debug menu. */
extern "C" s32 btlDebugDrawUpper(u32 job)
{
    BattleDebugDrawWork *work = (BattleDebugDrawWork *)jobGetWork(job);
    BattleDebugMenu *menu = g_btlDebugGlobals.menu;

    if (menu == NULL) {
        return 0;
    }
    if (menu->state == 1) {
        FUN_004d0f48(menu, g_btlDebugGlobals.resource);
    } else if (menu->state == 10) {
        if (asdListBoxGetSelectedItemId(menu->list) == 12) {
            textDrawDefaultString((const char *)aocIndexValueOrDefault(work->enemySkill), 256.0f, 42.0f);
        }
    } else if (menu->state == 14) {
        if (asdListBoxGetSelectedItemId(menu->list) == 0) {
            uiDrawFlagLabels(menu, FUN_003e83b4(work, menu->subject, 1));
        }
    } else if (menu->state == 12) {
        if (asdListBoxGetSelectedItemId(menu->list) == 0) {
            uiDrawFlagLabels(menu, FUN_003e83b4(work, menu->subject, 1));
        }
    }
    return 0;
}
