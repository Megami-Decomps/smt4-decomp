/* NON_MATCHING: restored queued-node argument, linker-inlined signed flags getter and frame compare; sprite base still forms before cycle update. */
#include "shard/S2UiTexLoader.h"

extern "C" {

#define UI_TEX_TABLE 31 /* the texture table the nodes belong to */
#define UI_TEX_NONE (-1)

extern s32 asdTMTexTableNodeIsLoaded(s32 table, s32 node);
extern void asdTMTexTableReleaseNode(s32 table, s32 node);
extern s32 flaggedValueHolderGetTotal(UiTexLoader *loader);
extern void uiSpriteSetImageKeyframe(UiTexSprite *sprite, s32 a, s32 b);
extern s32 FUN_00163aa4(UiTexSprite *sprite, f32 time);
extern void entryDispatchUpdate(void *anim, s32 count);
s8 uiSpriteGetCompletionState(const UiTexSprite *sprite);

/* Per-frame update of the screen's texture loader: advances the cycle counter, starts the queued
 * image on its keyframe, promotes the pending image once the sprite is done and releases every
 * loaded node that is not current, pending or queued. */
void FUN_004ba8ec(UiTexLoader *loader)
{
    UiTexSprite *sprite = &loader->sprite;
    s32 node;

    if (loader->cycling != 0) {
        loader->cycle = (loader->cycle + 1) % 16;
    }

    if (loader->next.keyframe != UI_TEX_NONE && asdTMTexTableNodeIsLoaded(UI_TEX_TABLE, loader->next.keyframe) != 0 && uiSpriteGetCompletionState(sprite) != 0) {
        s32 entryFrame = loader->entries[flaggedValueHolderGetTotal(loader)]->frame + 1;
        s32 keyframe = loader->next.keyframe;
        if (keyframe == entryFrame) {
            loader->pending.node = loader->next.node;
            loader->pending.keyframe = loader->next.keyframe;
            loader->next.node = UI_TEX_NONE;
            loader->next.keyframe = UI_TEX_NONE;
            uiSpriteSetImageKeyframe(sprite, 1, 0);
        }
    }
    if (loader->pending.node != UI_TEX_NONE && FUN_00163aa4(sprite, 1.0f) != 0) {
        loader->current = loader->pending;
        loader->pending.node = UI_TEX_NONE;
        loader->pending.keyframe = UI_TEX_NONE;
    }

    for (node = 0; node < UI_TEX_LOADER_NODES; node++) {
        if (loader->nodeLoaded[node] != 0
            && (loader->current.keyframe == UI_TEX_NONE || loader->current.keyframe != node)
            && (loader->pending.keyframe == UI_TEX_NONE || loader->pending.keyframe != node)
            && (loader->next.keyframe == UI_TEX_NONE || loader->next.keyframe != node)
            && asdTMTexTableNodeIsLoaded(UI_TEX_TABLE, node) != 0) {
            asdTMTexTableReleaseNode(UI_TEX_TABLE, node);
            loader->nodeLoaded[node] = 0;
        }
    }
    entryDispatchUpdate(loader->anim, 12);
}

} /* extern "C" */
