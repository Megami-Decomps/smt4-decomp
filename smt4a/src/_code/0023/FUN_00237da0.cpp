#include "AsdSDK/Source/Gfx/Effect/ParticleCreate.h"

extern "C" ParticleNode *FUN_00237da0(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, u32 index, u32 flags, u32 time, u32 value268)
{
    /* The emitter uses the common particle-node prefix of the allocated effect work. */
    return reinterpret_cast<ParticleNode *>(FUN_00347688(owner, base, extra, hasExtra,
        config, ownerSlot, 0, index, flags, time, value268));
}
