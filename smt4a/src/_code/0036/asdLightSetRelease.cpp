/* NON_MATCHING: nine lines. The search and compaction match; the build predicates the owner clear directly instead of materializing and retesting the removal result. */
#include "gfx/AsdLightSet.h"
#include <algorithm>
#include "AsdSDK/asdLightSelectActive.h"
#include "util/MemoryHelpers.h"

extern "C" {
extern s32 g_asdLightCount;
void asdMemFree(void *memory);
}

/* Takes `light` out of the vector; true when it was registered. */
static __inline bool lightVectorRemove(AsdLightVector &vector, AsdLight *const &light)
{
    AsdLight **newEnd = std::remove(vector.begin, vector.end, light);
    AsdLight **oldEnd = vector.end;
    vector.end = newEnd;
    return oldEnd != newEnd;
}

/* Releases a light set: unregisters each of its lights from its owner and frees the buffers and the set itself. */
extern "C" void asdLightSetRelease(AsdLightSet *set)
{
    if (set->buffer != NULL) {
        objectBufferFree(set->buffer);
    }
    if (set->active != 0) {
        asdLightSelectActive(1);
        AsdLightSlot *slot = set->slots;
        u32 index = 0;
        while (index < set->buffer->count) {
            AsdLight *light = slot->light;
            AsdLightOwner *owner = light->owner;
            if (lightVectorRemove(owner->lights, light)) {
                light->owner = NULL;
            }
            --g_asdLightCount;
            ++index, ++slot;
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
