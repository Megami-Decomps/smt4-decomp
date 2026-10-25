/* NON_MATCHING: direction length is reused instead of recomputed for normalization; workspace vector grouping and face-mode exit placement also differ. */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "gfx/QuaternionWorkspace.h"
#include <math.h>

extern "C" {
extern QuaternionWorkspace DAT_004ea81c;
f32 shiftRandomNextFraction(u32 stream);

void FUN_003024d0(EffObjectParticle *emitter, EffObjectParticleState *particle)
{
    Vec3f direction;
    if (emitter->initialMotion.randomDirection) {
        direction.x = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        direction.y = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        direction.z = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
    } else {
        direction = emitter->initialMotion.direction;
    }
    DAT_004ea81c.direction = direction;
    DAT_004ea81c.rotation.w = 0.0f;
    f32 length = sqrtf(direction.x * direction.x + direction.y * direction.y + direction.z * direction.z);
    if (length != 0.0f) {
        if (length > 0.0f) {
            DAT_004ea81c.direction.x /= length;
            DAT_004ea81c.direction.y /= length;
            DAT_004ea81c.direction.z /= length;
        }
        particle->motion.direction = DAT_004ea81c.direction;
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
