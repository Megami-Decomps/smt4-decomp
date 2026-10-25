/* NON_MATCHING: std::remove omits retail's copied end pointer in its find loop, and adjacent buffer/slot loads merge into ldm. */
#include "gfx/AsdLightSet.h"
#include <algorithm>
#include "AsdSDK/asdLightSelectActive.h"

extern "C" {
extern s32 g_asdLightCount;
void objectBufferFree(AsdLightBuffer *buffer);
void asdMemFree(void *memory);
}

/* Takes `light` out of the vector; true when it was registered. */
static __inline bool lightVectorRemove(AsdLightVector &vector, AsdLight *const &light)
{
    AsdLight **newEnd = std::remove(vector.begin, vector.end, light);
    bool removed = vector.end != newEnd;
    vector.end = newEnd;
    return removed;
}

/* Releases a light set: unregisters each of its lights from its owner and frees the buffers and the set itself. */
extern "C" void FUN_003627bc(AsdLightSet *set)
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
