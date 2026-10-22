/* NON_MATCHING: vector copies use integer transfers instead of retail VFP transfers; branch layout also differs. */
#include "shard/W9_W9Match7_RenderVectorOverride.h"

extern "C" {
void FUN_002075d0(u32 source, f32 *direction);
f32 FUN_0028836c(f32 value);
f32 FUN_0024c418(f32 first, f32 second);
void FUN_003f6b88(f32 pitch, f32 yaw, f32 roll);
void FUN_002a2c00(void);
extern RenderVectorState DAT_004ea81c;

void FUN_0025c8f0(RenderVectorOverride *override, u32 source, Vector4 *output)
{
    if (override->flags & 0x60) {
        f32 direction[3];
        FUN_002075d0(source, direction);
        f32 pitch = 0.0f;
        if (!(override->flags & 0x40)) {
            pitch = FUN_0028836c(-direction[1]);
        }
        f32 yaw = FUN_0024c418(direction[0], direction[2]);
        FUN_003f6b88(pitch, yaw * 0.02454369328916073f, 0.0f);
        if (override->flags & 0x40) {
            DAT_004ea81c.previous = DAT_004ea81c.current;
            DAT_004ea81c.current = override->value;
            FUN_002a2c00();
        }
        *output = DAT_004ea81c.current;
    } else {
        *output = override->value;
    }
}
}
