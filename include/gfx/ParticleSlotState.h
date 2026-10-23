#ifndef GFX_PARTICLESLOTSTATE_H
#define GFX_PARTICLESLOTSTATE_H
#include "shard/W8_X10_ActiveTextureSlot.h"
#include <stddef.h>
struct ParticleTextureCoordinates { f32 values[8]; };
struct ParticleSlotState {
    ActiveTextureSlot base;
    f32 sizes[64];
    u32 colors[64];
    ParticleTextureCoordinates coordinates[64];
};
struct ParticleSlotGlobals {
    ActiveTextureSlot *slot;
    u32 nextOrientation;
};
typedef char ParticleSlotStateOffsets[
    offsetof(ParticleSlotState, sizes) == 0x404 &&
    offsetof(ParticleSlotState, coordinates) == 0x604 && sizeof(ParticleSlotState) == 0xE04 ? 1 : -1];
#endif
