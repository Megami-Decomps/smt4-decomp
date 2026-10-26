/* NON_MATCHING: texture-array addressing, paired loads, and release-loop registers differ. */
#include "event/2dEvent/EventEffectIV.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern EventEffectGlobalsIV g_eventEffect;
void asdTMTexTableReleaseNode(u32 table, u32 node);
void *textureGetIndexedResource(u32 table);
void jobStop(u32 job, s32 flags);
void asdMemFree(void *memory);

// Release both node-level and table-level texture references before stopping the effect.
void eventEffectFreeTextures(void)
{
    EventEffectGlobalsIV *eventEffectPtr = &g_eventEffect;
    EventEffectWorkIV *effect = eventEffectPtr->effect;
    for (s32 index = 0; index < 2; ++index) {
        EventFilterTexture *texture = &eventEffectPtr->textures[index];
        if (texture->requested) {
            if (asdTMTexTableNodeIsLoaded(texture->table, texture->node)) {
                asdTMTexTableReleaseNode(texture->table, texture->node);
            }
            texture->requested = 0;
        }
    }
    for (s32 index = 0; index < 2; ++index) {
        EventFilterTexture *texture = &eventEffectPtr->textures[index];
        // The byte following node ownership tracks the table entry's reference.
        if (texture->unk09[0]) {
            if (textureGetIndexedResource(texture->table) != NULL) {
                asdTMTexTableFreeEntry(texture->table);
            }
            texture->unk09[0] = 0;
        }
    }
    jobStop(effect->job, 0);
    asdMemFree(effect);
    eventEffectPtr->effect = NULL;
}
}
