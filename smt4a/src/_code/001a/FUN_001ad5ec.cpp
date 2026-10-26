/* NON_MATCHING: vector copies use integer transfers instead of retail VFP transfers; branch layout also differs. */
#include "shard/W9_W9Match7_RenderVectorOverride.h"

extern "C" {
void FUN_001b4abc(u32 source, f32 *direction);
f32 FUN_001bbde0(f32 value);
f32 FUN_001b640c(f32 first, f32 second);
void FUN_001bc2f0(f32 pitch, f32 yaw, f32 roll);
void FUN_001bc3e4(void);
extern RenderVectorState DAT_006471dc;

void FUN_001ad5ec(RenderVectorOverride *override, u32 source, Vector4 *output)
{
    if (override->flags & 0x60) {
        f32 direction[3];
        FUN_001b4abc(source, direction);
        f32 pitch;
        if (override->flags & 0x40) {
            pitch = 0.0f;
        } else {
            pitch = FUN_001bbde0(-direction[1]);
        }
        f32 yaw = FUN_001b640c(direction[0], direction[2]);
        FUN_001bc2f0(pitch, yaw * 0.02454369328916073f, 0.0f);
        if (override->flags & 0x40) {
            DAT_006471dc.previous = DAT_006471dc.current;
            DAT_006471dc.current = override->value;
            FUN_001bc3e4();
        }
        *output = DAT_006471dc.current;
    } else {
        *output = override->value;
    }
}
}
