#include "shard/S1Mover.h"
#include "shard/mapProbePositionDownward.h"

extern "C" s32 FUN_0025ef68(Vec3f *position, const Vec3f *previous, u32 flags);

// Probe slightly above the position, then step downward until a surface is found.
extern "C" void mapProbePositionDownward(Vec3f *position)
{
    Vec3f candidate = *position;
    Vec3f previous = *position;
    for (s32 attempt = 0; attempt < 6; ++attempt) {
        if (attempt == 0)
            candidate.y += 1.0f;
        else
            candidate.y -= 15.0f;
        if (FUN_0025ef68(&candidate, &previous, 0))
            break;
        previous = candidate;
    }
    *position = candidate;
}
