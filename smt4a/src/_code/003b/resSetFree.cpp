#include "shard/Shard003B.h"

extern "C" {

extern void asdMemFreeSlot(u32 handle);
extern void FUN_0038b3f8(s32 a, s32 b);
extern u8 asdTMTexTableNodeIsLoaded(s32 a, u32 b);
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
        asdMemFreeSlot(set->a[i]);
    }
    asdMemFreeSlot(set->h1);
    asdMemFreeSlot(set->h0);
    asdMemFreeSlot(set->h34);
    for (i = 0; i < 8; i++) {
        asdMemFreeSlot(set->b[i]);
    }
    asdMemFreeSlot(set->h38);
    asdMemFreeSlot(set->h40);
    asdMemFreeSlot(set->h48);
    FUN_0038b3f8(set->unk90, 1);
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
