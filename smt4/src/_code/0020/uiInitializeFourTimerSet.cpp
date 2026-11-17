#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct UiFourTimerSet {
    UiResourceParameters resources;
    UiSpriteState timers[4];
    u32 unk250;
    u32 unk254;
};
struct UiTimerSettings {
    u8 unk00[0x3a];
    u16 mode;
    u8 enabled;
};

extern "C" {
/* The timer set's sprite resource packets, in retail's order (three 0x30-byte packets and a 0x118-byte one). */
static const u32 sFourTimerPacketA[12] = {
    0x190, 0x0, 0x4, 0xfe70, 0x190, 0x10, 0xffc00040, 0x0,
    0x5, 0xc8, 0x0, 0x4,
};
static const u32 sFourTimerPacketB[12] = {
    0x0, 0x3f800000, 0x8, 0x0, 0x3f800000, 0x4, 0x3f800000, 0x3f800000,
    0xa, 0x3f800000, 0x0, 0x8,
};
static const u32 sFourTimerPacketC[12] = {
    0x0, 0x3f800000, 0x8, 0x0, 0x3f800000, 0x4, 0x0, 0x40400000,
    0x8, 0x40400000, 0x0, 0x8,
};
static const u32 sFourTimerPacketD[70] = {
    0xfffffffd, 0x0, 0xfffffffd, 0x0, 0x0, 0x0, 0x0, 0xffffffff,
    0x0, 0xffffffff, 0xffffffff, 0x0, 0xffffffff, 0x0, 0x0, 0x0,
    0xfffffffd, 0x1, 0x0, 0x1, 0x0, 0xffffffff, 0x0, 0xffffffff,
    0xffffffff, 0x0, 0xffffffff, 0x0, 0x1, 0x0, 0xfffffffd, 0x0,
    0x0, 0x2, 0x0, 0xfffffffd, 0x0, 0xfffffffd, 0xfffffffd, 0x0,
    0x3, 0x0, 0xffffffff, 0x0, 0xffffffff, 0xffffffff, 0x0, 0xffffffff,
    0x0, 0xfffffffd, 0x0, 0xfffffffd, 0x2, 0x0, 0xfffffffd, 0x0,
    0xfffffffd, 0x0, 0xfffffffd, 0x3, 0x0, 0xfffffffd, 0x0, 0xffffffff,
    0x0, 0xffffffff, 0xffffffff, 0x0, 0xffffffff, 0x0,
};
void drawParameterBlockClear(UiResourceParameters *resources);

void uiStoreTextureEntryCenter(UiSpriteState *timer, s32 kind, s32 count);
void pairSetHalves(UiSpriteState *timer, s32 x, s32 y);
void spriteSetVisible(UiSpriteState *sprite, u8 visible);
}

/* Builds the four-timer sprite set: its resource packets, then the four timers' layers, positions and start animations. */
extern "C" void uiInitializeFourTimerSet(UiFourTimerSet *set)
{
    set->unk254 = 0;
    set->unk250 = 0;
    drawParameterBlockClear(&set->resources);
    paramsInit(&set->resources, sFourTimerPacketA, sizeof(sFourTimerPacketA), sFourTimerPacketB, sizeof(sFourTimerPacketB),
        sFourTimerPacketC, sizeof(sFourTimerPacketC), NULL, 0, sFourTimerPacketD, sizeof(sFourTimerPacketD));
    uiSpriteStateInitFromSource(&set->timers[0], 0x14, 0x29, &set->resources, 0x33, 1.0f);
    spriteSetLayer(&set->timers[0], 2);
    uiStoreTextureEntryCenter(&set->timers[0], 0x14, 0x29);
    spriteSetVisible(&set->timers[0], 1);
    spriteStartAnimationByIndex(&set->timers[0], 0);
    uiSpriteInitializeState(&set->timers[2], 0x14, -1, 2, &set->resources, 0x3d, 1.0f);
    spriteSetLayer(&set->timers[2], 1);
    spriteSetVisible(&set->timers[2], 1);
    pairSetHalves(&set->timers[2], 200, 120);
    spriteStartAnimationByIndex(&set->timers[2], 2);
    uiSpriteInitializeState(&set->timers[1], 0x14, -1, 0, &set->resources, 0x47, 1.0f);
    spriteSetLayer(&set->timers[1], 2);
    uiStoreTextureEntryCenter(&set->timers[1], 0x14, 0x2b);
    spriteSetVisible(&set->timers[1], 1);
    spriteStartAnimationByIndex(&set->timers[1], 1);
    uiSpriteStateInitFromSource(&set->timers[3], 0x14, 9, &set->resources, 0xb, 1.0f);
    timerStart(&set->timers[3], 2, 0);
}
