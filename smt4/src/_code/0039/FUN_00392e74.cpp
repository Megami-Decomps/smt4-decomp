/* NON_MATCHING: readable rebuild of the add-on content menu update; retail evaluates the % 20 / % 30 counters with the smull magic multiplies in a different order and dispatches the state's member function with the pointer-to-member adjustment folded into a tail `bx`. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"


extern "C" {
extern struct AocMainBlock *g_aocMain;
extern u32 g_aocSystem;
}

struct AocMainBlock {
    /* 0x000 */ u8 unk000[0x754];
    /* 0x754 */ u32 flags;
};

extern "C" {
void FUN_0023392c(AocMenu *menu, s32 a, s32 b);
void jobOwnerFreeSlotAndStop(void *owner);
void jobStopAndClearFlags(AocMenu *menu);
s32 jobIsValid(u32 job);
void ifTouchRegionRemove(void);
void jobStop(u32 job, s32 arg);
void FUN_002bf818(void *effect);
void FUN_00126fb8(void *block);
void aocClearDisplayFlag(u32 system);
void aocReleasePackageOwner(u32 system);
}


extern "C" void FUN_00392e74(AocMenu *menu)
{
    u8 *raw = (u8 *)menu;
    if ((u32)(menu->step - 4) < 11 && FUN_002ad1e0((u8 *)g_aocMain + 0x98)) {
        g_aocMain->flags &= ~0x10000u;
        FUN_0023392c(menu, -1, 0);
        jobOwnerFreeSlotAndStop(menu->jobOwner);
        jobStopAndClearFlags(menu);
        u32 *job = (u32 *)(raw + 0x1780);
        if (jobIsValid(*job)) {
            s32 *region = (s32 *)(raw + 0x14AC);
            if (*region != -1) {
                *region = -1;
                ifTouchRegionRemove();
            }
            menu->flags &= ~0x3000u;
            jobStop(*job, 0);
        }
        raw[0x210] = 1;
        *(u32 *)(raw + 0x21C) = 0;
        u32 *result = (u32 *)(raw + 0x214);
        result[0] = 0;
        result[1] = 0;
        FUN_00126fb8((u8 *)g_aocMain + 0x80);
        g_aocMain->flags &= ~0x10000u;
        if (menu->step == 10) {
            aocClearDisplayFlag(g_aocSystem);
            aocReleasePackageOwner(g_aocSystem);
        }
        menu->step = 17;
        menu->substep = 0;
        if (menu->window != NULL) {
            delete menu->window;
            menu->window = NULL;
        }
        return;
    }
    for (s32 i = 0; i < 25; i++)
        FUN_002bf818(menu->animated.effects[i]);
    u32 *counterA = (u32 *)(raw + 0x1128);
    u32 *counterB = (u32 *)(raw + 0x112C);
    *counterA = (*counterA + 1) % 20;
    *counterB = (*counterB + 1) % 30;
    (menu->*menu->callbacks.update[menu->step])();
}
