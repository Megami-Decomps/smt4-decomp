/* NON_MATCHING: the timer mode/visibility setters are the linker-inlined spriteSetLayer/spriteSetVisible and now match retail; remaining differences are the schedule of paramsInit's stack arguments and that retail's pool word names DAT_004018b4 (g_uiFourTimerAssets+0x90 here; a DAT_004018b4 extern with chained stream pointers schedules differently). */
#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct UiFourTimerSet {
    UiResourceParameters resources;
    TimerSlot timers[4];
    u32 unk250;
    u32 unk254;
};
struct UiTimerSettings {
    u8 unk00[0x3a];
    u16 mode;
    u8 enabled;
};
struct UiFourTimerAssets {
    u8 first[0x30];
    u8 second[0x30];
    u8 third[0x30];
    u8 fourth[0x118];
};

extern "C" {
extern PartyPanelState *g_partyPanel;
extern const UiFourTimerAssets g_uiFourTimerAssets;
void drawParameterBlockClear(UiResourceParameters *resources);

void FUN_002bd954(TimerSlot *timer, s32 kind, s32 count, UiResourceParameters *resources, u16 flags, f32 speed);
void uiSpriteInitializeState(TimerSlot *timer, s32 kind, s32 count, s32 animation, UiResourceParameters *resources, u16 flags, f32 speed);
void FUN_00295eb0(TimerSlot *timer, s32 kind, s32 count);
void pairSetHalves(TimerSlot *timer, s32 x, s32 y);
void spriteStartAnimationByIndex(TimerSlot *timer, s32 animation);
void timerStart(TimerSlot *timer, s32 animation, s32 flags);
void spriteSetLayer(TimerSlot *sprite, u16 layer);
void spriteSetVisible(TimerSlot *sprite, u8 visible);
}

extern "C" void uiInitializeFourTimerSet(UiFourTimerSet *set)
{
    set->unk254 = 0;
    set->unk250 = 0;
    drawParameterBlockClear(&set->resources);
    paramsInit(&set->resources, g_uiFourTimerAssets.first, 0x30, g_uiFourTimerAssets.second, 0x30,
        g_uiFourTimerAssets.third, 0x30, NULL, 0, g_uiFourTimerAssets.fourth, 0x118);
    FUN_002bd954(&set->timers[0], 0x14, 0x29, &set->resources, 0x33, 1.0f);
    spriteSetLayer(&set->timers[0], 2);
    FUN_00295eb0(&set->timers[0], 0x14, 0x29);
    spriteSetVisible(&set->timers[0], 1);
    spriteStartAnimationByIndex(&set->timers[0], 0);
    uiSpriteInitializeState(&set->timers[2], 0x14, -1, 2, &set->resources, 0x3d, 1.0f);
    spriteSetLayer(&set->timers[2], 1);
    spriteSetVisible(&set->timers[2], 1);
    pairSetHalves(&set->timers[2], 200, 120);
    spriteStartAnimationByIndex(&set->timers[2], 2);
    uiSpriteInitializeState(&set->timers[1], 0x14, -1, 0, &set->resources, 0x47, 1.0f);
    spriteSetLayer(&set->timers[1], 2);
    FUN_00295eb0(&set->timers[1], 0x14, 0x2b);
    spriteSetVisible(&set->timers[1], 1);
    spriteStartAnimationByIndex(&set->timers[1], 1);
    FUN_002bd954(&set->timers[3], 0x14, 9, &set->resources, 0xb, 1.0f);
    timerStart(&set->timers[3], 2, 0);
}
