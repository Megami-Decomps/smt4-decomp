/* NON_MATCHING: the packets and the hoisted per-case timer addresses now match; retail keeps `set` in r4 and the index in r5 (swapped here) and lays out the timerStart tail merges differently (own call for case 0, shared call in case 1). */
#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct UiEightTimerSet {
    UiResourceParameters resources;
    TimerSlot timers[8];
};

extern "C" {
extern PartyPanelState *g_partyPanel;
void drawParameterBlockClear(UiResourceParameters *resources);

void uiSpriteStateInitFromSource(TimerSlot *timer, s32 kind, s32 count, UiResourceParameters *resources, u16 flags, f32 speed);
void timerStart(TimerSlot *timer, s32 animation, s32 flags);
void spriteStartAnimationByIndex(TimerSlot *timer, s32 animation);
/* The timer set's sprite resource packets, in retail's order (0x54, 0x18 and 0x70 bytes). */
static const u32 sEightTimerPacketA[21] = {
    0x140, 0x0, 0x8, 0x0, 0xfec0, 0x4, 0x172, 0x0,
    0x10040, 0xfec0, 0x0, 0x8, 0x0, 0x140, 0x4, 0xc8,
    0x0, 0x6, 0x0, 0xc8, 0x6,
};
static const u32 sEightTimerPacketB[6] = {
    0x3f800000, 0x3f000000, 0x14, 0x3f000000, 0x3f800000, 0x28,
};
static const u32 sEightTimerPacketC[28] = {
    0x0, 0x0, 0xfffffffd, 0x0, 0x0, 0xfffffffd, 0x0, 0x0,
    0x0, 0xfffffffd, 0x1, 0x0, 0xfffffffd, 0x0, 0xfffffffd, 0x0,
    0xfffffffd, 0xfffffffe, 0x0, 0xfffffffd, 0x0, 0xffffffff, 0x0, 0xffffffff,
    0xffffffff, 0x0, 0xffffffff, 0x0,
};

/* Builds the eight-timer sprite set: its resource packets, then each timer and its start animation. */
void uiInitializeEightTimerSet(UiEightTimerSet *set)
{
    drawParameterBlockClear(&set->resources);
    paramsInit(&set->resources, sEightTimerPacketA, sizeof(sEightTimerPacketA), sEightTimerPacketB, sizeof(sEightTimerPacketB),
        NULL, 0, NULL, 0, sEightTimerPacketC, sizeof(sEightTimerPacketC));
    for (s32 index = 0; index < 8; ++index) {
        uiSpriteStateInitFromSource(&set->timers[index], 0x1c, 1, &set->resources, 0x15, 1.0f);
        switch (index) {
        case 0:
            timerStart(&set->timers[index], 0, 0);
            break;
        case 1:
            timerStart(&set->timers[index], 1, 0);
            break;
        case 2:
            spriteStartAnimationByIndex(&set->timers[index], 0);
            break;
        case 3:
            timerStart(&set->timers[index], 2, 0);
            break;
        case 4:
            timerStart(&set->timers[index], 3, 0);
            break;
        case 5:
            timerStart(&set->timers[index], 4, 0);
            break;
        case 6:
            timerStart(&set->timers[index], 5, 0);
            break;
        case 7:
            timerStart(&set->timers[index], 6, 0);
            break;
        }
    }
}
}
