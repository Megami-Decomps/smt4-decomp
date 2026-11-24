/* NON_MATCHING: the yaw call loads the direction's x and z components in reverse retail order. */
#include "gfx/CameraDirection.h"
#include "util/TrigF32.h"
#include "shard/W9_W9Match7_RenderVectorOverride.h"
#include "gfx/VectorScratch.h"

/* Copies a vector between scratch slots or to the output. */
static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

extern "C" {
f32 mathAtan2Angle256(f32 first, f32 second);
void FUN_003f6b88(f32 pitch, f32 yaw, f32 roll);
void gfxQuaternionScratchMultiply(void);

/* Resolves the override rotation, optionally facing the camera. */
void renderVectorOverrideResolve(RenderVectorOverride *override, const Vector4 *source, Vector4 *output)
{
    if ((override->flags & 0x60) == 0) {
        *output = override->value;
    } else {
        Vector4 direction;
        renderGetDirectionToTarget(source, &direction);
        f32 pitch;
        if (override->flags & 0x40) {
            pitch = 0.0f;
        } else {
            pitch = libm_acosf(-direction.y);
        }
        f32 yaw = mathAtan2Angle256(direction.x, direction.z);
        FUN_003f6b88(pitch, yaw * 0.02454369328916073f, 0.0f);
        if (override->flags & 0x40) {
            Vector4 *first = &g_vectorScratch.first.vector;
            vector4Copy(first, &g_vectorScratch.second.vector);
            *first = override->value;
            gfxQuaternionScratchMultiply();
        }
        vector4Copy(&g_vectorScratch.first.vector, output);
    }
}

} /* extern "C" */
