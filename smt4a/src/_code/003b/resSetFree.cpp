#include "shard/Shard003B.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern void asdMemFreeSlot(void *object); // declcheck: local (frees the text object itself; the shared declaration takes a slot pointer)
extern void statusBustUpPortraitRelease(s32 a, s32 b);
extern u32 requestIdToCode(s32 index);
extern void asdTMTexTableReleaseNode(s32 a, u32 b);
extern void asdMemFree(void *ptr);

/* Releases every handle the set owns, frees the textures it registered, and the set itself. */
void resSetFree(ResSet *set)
{
    s32 i;

    if (set == NULL) {
        return;
    }
    for (i = 0; i < 7; i++) {
        asdMemFreeSlot(set->equipmentLabels[i]);
    }
    asdMemFreeSlot(set->name);
    asdMemFreeSlot(set->title);
    asdMemFreeSlot(set->description);
    for (i = 0; i < 8; i++) {
        asdMemFreeSlot(set->skillLabels[i]);
    }
    asdMemFreeSlot(set->demonName);
    asdMemFreeSlot(set->race);
    asdMemFreeSlot(set->specialItemName);
    statusBustUpPortraitRelease(set->previewId, 1);
    if (set != NULL) {
        for (i = 0; i < 9; i++) {
            if (asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(i)) != 0) {
                asdTMTexTableReleaseNode(0x2E, requestIdToCode(i));
                set->states[i] = 0;
            }
        }
    }
    asdMemFree(set);
}

} /* extern "C" */
