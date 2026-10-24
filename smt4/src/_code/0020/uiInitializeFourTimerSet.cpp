/* NON_MATCHING: O3 hoists mode/enabled constants and folds timer-base stores, changing saved registers and the stack frame; candidate -Ospace. The asset literal uses equivalent g_uiFourTimerAssets+0x90 rather than DAT_004018b4. */
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
void paramsInit(UiResourceParameters *resources, const void *chunk0, u16 count0,
    const void *chunk1, u16 count1, const void *chunk2, u16 count2,
    const void *chunk3, u16 count3, const void *chunk4, u16 count4);
void FUN_002bd954(TimerSlot *timer, s32 kind, s32 count, UiResourceParameters *resources, u16 flags, f32 speed);
void uiSpriteInitializeState(TimerSlot *timer, s32 kind, s32 count, s32 animation, UiResourceParameters *resources, u16 flags, f32 speed);
void FUN_00295eb0(TimerSlot *timer, s32 kind, s32 count);
void pairSetHalves(TimerSlot *timer, s32 x, s32 y);
void spriteStartAnimationByIndex(TimerSlot *timer, s32 animation);
void timerStart(TimerSlot *timer, s32 animation, s32 flags);
}

static __inline void uiTimerSetMode(TimerSlot *timer, u16 mode)
{
    reinterpret_cast<UiTimerSettings *>(timer)->mode = mode;
}

static __inline void uiTimerSetEnabled(TimerSlot *timer, u8 enabled)
{
    reinterpret_cast<UiTimerSettings *>(timer)->enabled = enabled;
}

extern "C" void uiInitializeFourTimerSet(UiFourTimerSet *set)
{
    set->unk254 = 0;
    set->unk250 = 0;
    drawParameterBlockClear(&set->resources);
    paramsInit(&set->resources, g_uiFourTimerAssets.first, 0x30, g_uiFourTimerAssets.second, 0x30,
        g_uiFourTimerAssets.third, 0x30, NULL, 0, g_uiFourTimerAssets.fourth, 0x118);
    FUN_002bd954(&set->timers[0], 0x14, 0x29, &set->resources, 0x33, 1.0f);
    uiTimerSetMode(&set->timers[0], 2);
    FUN_00295eb0(&set->timers[0], 0x14, 0x29);
    uiTimerSetEnabled(&set->timers[0], 1);
    spriteStartAnimationByIndex(&set->timers[0], 0);
    uiSpriteInitializeState(&set->timers[2], 0x14, -1, 2, &set->resources, 0x3d, 1.0f);
    uiTimerSetMode(&set->timers[2], 1);
    uiTimerSetEnabled(&set->timers[2], 1);
    pairSetHalves(&set->timers[2], 200, 120);
    spriteStartAnimationByIndex(&set->timers[2], 2);
    uiSpriteInitializeState(&set->timers[1], 0x14, -1, 0, &set->resources, 0x47, 1.0f);
    uiTimerSetMode(&set->timers[1], 2);
    FUN_00295eb0(&set->timers[1], 0x14, 0x2b);
    uiTimerSetEnabled(&set->timers[1], 1);
    spriteStartAnimationByIndex(&set->timers[1], 1);
    FUN_002bd954(&set->timers[3], 0x14, 9, &set->resources, 0xb, 1.0f);
    timerStart(&set->timers[3], 2, 0);
}
