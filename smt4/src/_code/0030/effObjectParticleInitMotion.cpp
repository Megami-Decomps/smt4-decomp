/* NON_MATCHING: direction length is reused instead of recomputed for normalization; workspace vector grouping and face-mode exit placement also differ. */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "gfx/QuaternionWorkspace.h"
#include <math.h>
#include "code/Code0024_Smt4.h"
#include "gfx/VectorScratch.h"

extern "C" {

void effObjectParticleInitMotion(EffObjectParticle *emitter, EffObjectParticleState *particle)
{
    Vec3f direction;
    if (emitter->initialMotion.randomDirection) {
        direction.x = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        direction.y = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        direction.z = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
    } else {
        direction = emitter->initialMotion.direction;
    }
    g_vectorScratch.first.direction = direction;
    g_vectorScratch.first.rotation.w = 0.0f;
    f32 length = sqrtf(direction.x * direction.x + direction.y * direction.y + direction.z * direction.z);
    if (length != 0.0f) {
        if (length > 0.0f) {
            g_vectorScratch.first.direction.x /= length;
            g_vectorScratch.first.direction.y /= length;
            g_vectorScratch.first.direction.z /= length;
        }
        particle->motion.direction = g_vectorScratch.first.direction;
    } else {
        particle->motion.direction.x = 0.0f;
        particle->motion.direction.y = 1.0f;
        particle->motion.direction.z = 0.0f;
    }
    f32 speed = shiftRandomNextFraction(0);
    particle->motion.speed = ((1.0f - emitter->initialMotion.variance) + speed * emitter->initialMotion.variance) * emitter->initialMotion.speed;
    particle->motion.angle = shiftRandomNextFraction(0) * 6.2831855f;
    if (emitter->initialMotion.faceMode == 1) {
        particle->motion.face = (s8)(randomAdvanceShiftRegister(0) % 6);
    } else if (emitter->initialMotion.faceMode == 2) {
        u32 byteOffset = (u8 *)particle - (u8 *)emitter->states;
        u32 index = byteOffset / sizeof(*particle);
        particle->motion.face = (s8)(index % 6);
    } else {
        particle->motion.face = -1;
    }
}
}
