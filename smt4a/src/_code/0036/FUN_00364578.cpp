/* NON_MATCHING: retail keeps the dead store of y before y + height (x, vadd, y, z, y+h) where armcc coalesces the three stores into one vstmia. */
#include "gfx/ParticleSlotState.h"

extern "C" {
extern ParticleSlotGlobals g_activeTextureSlot;

// Allocate a particle and cycle through the four texture-coordinate orientations.
void FUN_00364578(u32 state, f32 x, f32 y, f32 z, f32 height, f32 size)
{
    ParticleSlotState *slot = reinterpret_cast<ParticleSlotState *>(g_activeTextureSlot.slot);
    for (s32 index = 0; index < 64; ++index) {
        if (slot->base.particleState[index] != 0)
            continue;
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
        return;
    }
}
}
