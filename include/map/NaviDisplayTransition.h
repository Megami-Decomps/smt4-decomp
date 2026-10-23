#ifndef MAP_NAVIDISPLAYTRANSITION_H
#define MAP_NAVIDISPLAYTRANSITION_H
#include "ui/UiSpriteState.h"
#include <stddef.h>

struct MapNaviDisplay;
struct NaviDisplayTransitionView {
    u8 unk000[0xC];
    u8 mapVisible;
    u8 unk00D[3];
    u32 flags;
    u8 unk014[4];
    u32 counter;
    u8 unk01C[0x3F];
    s8 phase;
    s32 map;
    u8 unk060[0x102];
    u16 mapState;
    f32 origin[2];
    u8 unk16C[0x2C];
    UiSpriteState outgoing;
    UiSpriteState incoming;
    u8 unk2B0[0x624];
    UiSpriteState indicator;
    UiSpriteState overlay;
    u8 unk9EC[0x50A0];
    u8 mapDirty;
    u8 overlayDirty;
};
typedef char NaviDisplayTransitionOffsets[
    offsetof(NaviDisplayTransitionView, phase) == 0x5B &&
    offsetof(NaviDisplayTransitionView, map) == 0x5C &&
    offsetof(NaviDisplayTransitionView, mapState) == 0x162 &&
    offsetof(NaviDisplayTransitionView, origin) == 0x164 &&
    offsetof(NaviDisplayTransitionView, outgoing) == 0x198 &&
    offsetof(NaviDisplayTransitionView, incoming) == 0x224 &&
    offsetof(NaviDisplayTransitionView, indicator) == 0x8D4 &&
    offsetof(NaviDisplayTransitionView, overlay) == 0x960 &&
    offsetof(NaviDisplayTransitionView, mapDirty) == 0x5A8C &&
    offsetof(NaviDisplayTransitionView, overlayDirty) == 0x5A8D ? 1 : -1];
#endif
