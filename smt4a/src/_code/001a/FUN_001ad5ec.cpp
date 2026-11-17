/* NON_MATCHING: the previous/current copy now uses retail's VFP transfer; retail copies the final vector as a three-word block plus a separate w (so the two arms do not merge their stores) and lays the two arms out differently. */
#include "shard/W9_W9Match7_RenderVectorOverride.h"

// Copies through pointers: armcc moves such a 16-byte value with VFP vldmia/vstmia.
static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

extern "C" {
void FUN_001b4abc(u32 source, f32 *direction);
f32 mathRemPio2f(f32 value);
f32 FUN_001b640c(f32 first, f32 second);
void FUN_001bc2f0(f32 pitch, f32 yaw, f32 roll);
void FUN_001bc3e4(void);
extern RenderVectorState g_vectorScratch;

void FUN_001ad5ec(RenderVectorOverride *override, u32 source, Vector4 *output)
{
    if (override->flags & 0x60) {
        f32 direction[3];
        FUN_001b4abc(source, direction);
        f32 pitch;
        if (override->flags & 0x40) {
            pitch = 0.0f;
        } else {
            pitch = mathRemPio2f(-direction[1]);
        }
        f32 yaw = FUN_001b640c(direction[0], direction[2]);
        FUN_001bc2f0(pitch, yaw * 0.02454369328916073f, 0.0f);
        if (override->flags & 0x40) {
            vector4Copy(&g_vectorScratch.current, &g_vectorScratch.previous);
            g_vectorScratch.current = override->value;
            FUN_001bc3e4();
        }
        *output = g_vectorScratch.current;
    } else {
        *output = override->value;
    }
}
}
