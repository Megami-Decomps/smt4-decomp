/* NON_MATCHING: retail loads direction[0] before direction[2] for the yaw call, and reuses the scratch slot's address (r0) for the override copy where the build forms it again in ip. */
#include "util/TrigF32.h"
#include "shard/W9_W9Match7_RenderVectorOverride.h"
#include "gfx/VectorScratch.h"

// Copies through pointers: armcc moves such a 16-byte value with VFP vldmia/vstmia.
static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

extern "C" {
void FUN_001b4abc(u32 source, f32 *direction);
f32 mathAtan2Angle256(f32 first, f32 second);
void FUN_001bc2f0(f32 pitch, f32 yaw, f32 roll);
void gfxQuaternionScratchMultiply(void);

void renderVectorOverrideResolve(RenderVectorOverride *override, u32 source, Vector4 *output)
{
    if ((override->flags & 0x60) == 0) {
        *output = override->value;
    } else {
        f32 direction[3];
        FUN_001b4abc(source, direction);
        f32 pitch;
        if (override->flags & 0x40) {
            pitch = 0.0f;
        } else {
            pitch = libm_acosf(-direction[1]);
        }
        f32 yaw = mathAtan2Angle256(direction[0], direction[2]);
        FUN_001bc2f0(pitch, yaw * 0.02454369328916073f, 0.0f);
        if (override->flags & 0x40) {
            vector4Copy(&g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            g_vectorScratch.first.vector = override->value;
            gfxQuaternionScratchMultiply();
        }
        vector4Copy(&g_vectorScratch.first.vector, output);
    }
}
}
