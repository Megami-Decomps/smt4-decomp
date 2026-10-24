/* NON_MATCHING: retail hoists the zero used by the later stores into r6 at function entry (we materialize it before the loop), so registers shift; otherwise the same instructions. */
#include <algorithm>
#include "gfx/LightRegistry.h"
#include "shard/S1Light.h"

/* A batch of registered lights attached to one scene group. */
struct LightBatchOwner {
    /* 0x00 */ LightRegistry *root;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 secondary; /* nonzero: lives in the second (group 4/5) scene */
};

struct LightBatch {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 group;
    /* 0x10 */ s32 lastGroup;
    /* 0x14 */ LightBatchOwner *owner;
    /* 0x18 */ LightBatchOwner *lastOwner;
    /* 0x1C */ u8 unk1C[8];
    /* 0x24 */ LightRegistration **lights;
    /* 0x28 */ s32 lightCount;
};

/* Drops the light from the registry's list; true when it was listed. */
static inline bool unregisterLight(LightRegistry *registry, LightRegistration *light)
{
    LightRegistration **newEnd = std::remove(registry->begin, registry->end, light);
    bool removed = registry->end != newEnd;

    registry->end = newEnd;
    return removed;
}

extern "C" {
extern LightRegistry *DAT_005b3c90[2];
extern LightRegistry *DAT_005b3c98[2];
extern void *g_asdModelTransformBuilder[2];
extern void *g_effAsdLightHandle[2];
extern LightCount g_asdLightCount[2];
void asdLightActivate(s32 index);
void FUN_0018e9d8(void *parent, LightRegistry *child);
void sceneTraverserVisit(void *traverser, void *root);

/* Removes every light of the batch from its registry, then leaves the scene group it was in. */
void FUN_00280d40(LightBatch *batch)
{
    LightRegistry *selected;

    if (batch->owner == NULL) {
        switch (batch->group) {
        case 1: selected = DAT_005b3c90[0]; break;
        case 2: selected = DAT_005b3c98[0]; asdLightActivate(0); break;
        case 4: selected = DAT_005b3c90[1]; break;
        case 5: selected = DAT_005b3c98[1]; asdLightActivate(1); break;
        default: return;
        }
    } else {
        selected = batch->owner->root;
    }
    if (selected == NULL)
        return;
    LightRegistry *registry = batch->lights[0]->registry;
    s32 index = -1;
    if (registry == DAT_005b3c98[0])
        index = 0;
    else if (registry == DAT_005b3c98[1])
        index = 1;
    for (s32 i = 0; i < batch->lightCount; i++) {
        LightRegistration *light = batch->lights[i];
        LightRegistry *owner = light->registry;
        if (owner != NULL && unregisterLight(owner, light))
            light->registry = NULL;
    }
    if (index >= 0 && registry->begin == registry->end) {
        g_asdLightCount[index].render.active = 0;
        g_asdLightCount[index].render.dirty = 0;
        FUN_0018e9d8(g_asdModelTransformBuilder[index], DAT_005b3c98[index]);
        sceneTraverserVisit(g_effAsdLightHandle[index], g_asdModelTransformBuilder[index]);
    }
    if (batch->owner != NULL) {
        if (batch->owner->secondary == 0) {
            sceneTraverserVisit(g_effAsdLightHandle[0], g_asdModelTransformBuilder[0]);
            --g_asdLightCount[0].count;
        } else {
            sceneTraverserVisit(g_effAsdLightHandle[1], g_asdModelTransformBuilder[1]);
            --g_asdLightCount[1].count;
        }
    } else if (batch->group < 3) {
        sceneTraverserVisit(g_effAsdLightHandle[0], g_asdModelTransformBuilder[0]);
        --g_asdLightCount[0].count;
    } else {
        sceneTraverserVisit(g_effAsdLightHandle[1], g_asdModelTransformBuilder[1]);
        --g_asdLightCount[1].count;
    }
    if (batch->owner != NULL) {
        batch->lastGroup = -1;
        batch->lastOwner = batch->owner;
        batch->owner = NULL;
        batch->group = -1;
    } else {
        s32 group = batch->group;
        batch->lastOwner = NULL;
        batch->group = -1;
        batch->lastGroup = group;
    }
}

} /* extern "C" */
