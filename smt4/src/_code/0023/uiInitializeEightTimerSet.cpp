/* NON_MATCHING: retail hoists nested timer-base addresses and derives contiguous asset pointers; flat timer layout gives different switch/register scheduling. */
#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct UiEightTimerSet {
    UiResourceParameters resources;
    TimerSlot timers[8];
};

extern "C" {
extern PartyPanelState *g_partyPanel;
void drawParameterBlockClear(UiResourceParameters *resources);

void FUN_002bd954(TimerSlot *timer, s32 kind, s32 count, UiResourceParameters *resources, u16 flags, f32 speed);
void timerStart(TimerSlot *timer, s32 animation, s32 flags);
void spriteStartAnimationByIndex(TimerSlot *timer, s32 animation);
extern const u8 DAT_004073c8[];
extern const u8 DAT_0040741c[];
extern const u8 DAT_00407434[];

void uiInitializeEightTimerSet(UiEightTimerSet *set)
{
    drawParameterBlockClear(&set->resources);
    paramsInit(&set->resources, DAT_004073c8, 0x54, DAT_0040741c, 0x18,
        NULL, 0, NULL, 0, DAT_00407434, 0x70);
    for (s32 index = 0; index < 8; ++index) {
        FUN_002bd954(&set->timers[index], 0x1c, 1, &set->resources, 0x15, 1.0f);
        switch (index) {
        case 0:
            timerStart(&set->timers[0], 0, 0);
            break;
        case 1:
            timerStart(&set->timers[1], 1, 0);
            break;
        case 2:
            spriteStartAnimationByIndex(&set->timers[2], 0);
            break;
        case 3:
            timerStart(&set->timers[3], 2, 0);
            break;
        case 4:
            timerStart(&set->timers[4], 3, 0);
            break;
        case 5:
            timerStart(&set->timers[5], 4, 0);
            break;
        case 6:
            timerStart(&set->timers[6], 5, 0);
            break;
        case 7:
            timerStart(&set->timers[7], 6, 0);
            break;
        }
    }
}
}
