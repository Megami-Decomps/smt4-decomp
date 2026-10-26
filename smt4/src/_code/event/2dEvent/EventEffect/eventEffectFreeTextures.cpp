/* NON_MATCHING: addressing, loads and call shapes now match retail; only callee-saved register numbering differs (retail: effect r7, textures r9, per-loop pointers r5/r6). */
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
    EventFilterTexture *textures = eventEffectPtr->textures;
    for (s32 index = 0; index < 2; ++index) {
        if (textures[index].requested) {
            if (asdTMTexTableNodeIsLoaded(textures[index].table, textures[index].node)) {
                asdTMTexTableReleaseNode(textures[index].table, textures[index].node);
            }
            textures[index].requested = 0;
        }
    }
    for (s32 index = 0; index < 2; ++index) {
        // The byte following node ownership tracks the table entry's reference.
        if (textures[index].unk09[0]) {
            if (textureGetIndexedResource(textures[index].table) != NULL) {
                asdTMTexTableFreeEntry(textures[index].table);
            }
            textures[index].unk09[0] = 0;
        }
    }
    jobStop(effect->job, 0);
    asdMemFree(effect);
    eventEffectPtr->effect = NULL;
}
}
