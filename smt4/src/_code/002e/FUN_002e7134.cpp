/* NON_MATCHING: std::remove's find loop compares against a copy of the end in r0 (retail) and the build keeps the end in place; the build also merges the buffer/slot loads into an ldm and needs two more callee-saved registers. */
#include "gfx/AsdLightSet.h"
#include <algorithm>

extern "C" {
extern s32 g_asdLightCount;
void objectBufferFree(AsdLightBuffer *buffer);
u32 asdLightSelectActive(s32 kind);
void asdMemFree(void *memory);
}

/* Takes `light` out of the vector; true when it was registered. */
static __inline bool lightVectorRemove(AsdLightVector &vector, AsdLight *light)
{
    AsdLight **newEnd = std::remove(vector.begin, vector.end, light);
    bool removed = vector.end != newEnd;
    vector.end = newEnd;
    return removed;
}

/* Releases a light set: unregisters each of its lights from its owner and frees the buffers and the set itself. */
extern "C" void FUN_002e7134(AsdLightSet *set)
{
    if (set->buffer != NULL) {
        objectBufferFree(set->buffer);
    }
    if (set->active != 0) {
        asdLightSelectActive(1);
        AsdLightSlot *slot = set->slots;
        for (u32 index = 0; index < set->buffer->count; ++index, ++slot) {
            AsdLight *light = slot->light;
            AsdLightOwner *owner = light->owner;
            if (lightVectorRemove(owner->lights, light)) {
                light->owner = NULL;
            }
            --g_asdLightCount;
        }
    }
    if (set->extra != NULL) {
        asdMemFree(set->extra);
    }
    if (set->active != 0) {
        set->active = 0;
    }
    asdMemFree(set);
}
