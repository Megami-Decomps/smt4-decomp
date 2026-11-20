#include "AsdSDK/Source/Gfx/Effect/ParticleCreate.h"

/* Creates a quad effect task without a destroy callback; the caller sees the particle-node prefix
 * of its work. */
extern "C" ParticleNode *quadEffectCreate(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, u32 index, u32 flags, u32 time, u32 value268)
{
    return (ParticleNode *)quadEffectTaskCreate(owner, base, extra, hasExtra,
        config, ownerSlot, NULL, index, flags, time, value268);
}
