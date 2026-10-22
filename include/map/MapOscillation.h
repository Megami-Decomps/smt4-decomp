#ifndef MAP_MAPOSCILLATION_H
#define MAP_MAPOSCILLATION_H
#include "common.h"
#include <stddef.h>

struct MapOscillationState {
    u8 unk00[0xC]; // 0x00
    u32 mode; // 0x0C
    f32 phase; // 0x10
    s32 displacement; // 0x14
};
typedef char MapOscillationStateLayoutCheck[sizeof(MapOscillationState) == 0x18 &&
    offsetof(MapOscillationState, phase) == 0x10 ? 1 : -1];
#endif
