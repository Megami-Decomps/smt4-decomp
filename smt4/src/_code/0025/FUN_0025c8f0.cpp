/* NON_MATCHING: the previous/current copy now uses retail's VFP transfer; retail copies the final vector as a three-word block plus a separate w (so the two arms do not merge their stores) and lays the two arms out differently. */
#include "shard/W9_W9Match7_RenderVectorOverride.h"

// Copies through pointers: armcc moves such a 16-byte value with VFP vldmia/vstmia.
static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

extern "C" {
void FUN_002075d0(u32 source, f32 *direction);
f32 libm_sinf(f32 value);
f32 FUN_0024c418(f32 first, f32 second);
void FUN_003f6b88(f32 pitch, f32 yaw, f32 roll);
void FUN_002a2c00(void);
extern RenderVectorState g_vectorScratch;

void FUN_0025c8f0(RenderVectorOverride *override, u32 source, Vector4 *output)
{
    if (override->flags & 0x60) {
        f32 direction[3];
        FUN_002075d0(source, direction);
        f32 pitch;
        if (override->flags & 0x40) {
            pitch = 0.0f;
        } else {
            pitch = libm_sinf(-direction[1]);
        }
        f32 yaw = FUN_0024c418(direction[0], direction[2]);
        FUN_003f6b88(pitch, yaw * 0.02454369328916073f, 0.0f);
        if (override->flags & 0x40) {
            vector4Copy(&g_vectorScratch.current, &g_vectorScratch.previous);
            g_vectorScratch.current = override->value;
            FUN_002a2c00();
        }
        *output = g_vectorScratch.current;
    } else {
        *output = override->value;
    }
}
}
