/* NON_MATCHING: particle position copy is coalesced and orientation branch ordering differs. */
#include "gfx/ParticleSlotState.h"

extern "C" {
extern ParticleSlotGlobals g_activeTextureSlot;

// Allocate a particle and cycle through the four texture-coordinate orientations.
void FUN_002566b4(u32 state, f32 x, f32 y, f32 z, f32 height, f32 size)
{
    ParticleSlotState *slot = reinterpret_cast<ParticleSlotState *>(g_activeTextureSlot.slot);
    s32 index = 0;
    while (slot->base.particleState[index] != 0) {
        if (++index >= 64)
            return;
    }
    slot->base.particlePosition[index][0] = x;
    slot->base.particlePosition[index][1] = y;
    slot->base.particlePosition[index][2] = z;
    slot->base.particlePosition[index][1] += height;
    slot->base.particleState[index] = state;
    slot->sizes[index] = size;
    slot->colors[index] = 0xFFFFFF00;
    switch (g_activeTextureSlot.nextOrientation & 3) {
    case 0:
        slot->coordinates[index].values[0] = 0.0f;
        slot->coordinates[index].values[1] = 0.0f;
        slot->coordinates[index].values[2] = 0.0f;
        slot->coordinates[index].values[3] = 1.0f;
        slot->coordinates[index].values[4] = 1.0f;
        slot->coordinates[index].values[5] = 0.0f;
        slot->coordinates[index].values[6] = 1.0f;
        slot->coordinates[index].values[7] = 1.0f;
        break;
    case 1:
        slot->coordinates[index].values[0] = 1.0f;
        slot->coordinates[index].values[1] = 0.0f;
        slot->coordinates[index].values[2] = 1.0f;
        slot->coordinates[index].values[3] = 1.0f;
        slot->coordinates[index].values[4] = 0.0f;
        slot->coordinates[index].values[5] = 0.0f;
        slot->coordinates[index].values[6] = 0.0f;
        slot->coordinates[index].values[7] = 1.0f;
        break;
    case 2:
        slot->coordinates[index].values[0] = 0.0f;
        slot->coordinates[index].values[1] = 1.0f;
        slot->coordinates[index].values[2] = 0.0f;
        slot->coordinates[index].values[3] = 0.0f;
        slot->coordinates[index].values[4] = 1.0f;
        slot->coordinates[index].values[5] = 1.0f;
        slot->coordinates[index].values[6] = 1.0f;
        slot->coordinates[index].values[7] = 0.0f;
        break;
    case 3:
        slot->coordinates[index].values[0] = 1.0f;
        slot->coordinates[index].values[1] = 1.0f;
        slot->coordinates[index].values[2] = 1.0f;
        slot->coordinates[index].values[3] = 0.0f;
        slot->coordinates[index].values[4] = 0.0f;
        slot->coordinates[index].values[5] = 1.0f;
        slot->coordinates[index].values[6] = 0.0f;
        slot->coordinates[index].values[7] = 0.0f;
        break;
    }
    ++g_activeTextureSlot.nextOrientation;
}
}
