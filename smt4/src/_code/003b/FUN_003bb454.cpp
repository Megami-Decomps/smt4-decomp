/* NON_MATCHING: hoisted next-key/texture addresses use swapped r6/r7 and queued-key reload scheduling differs. */
#include "common.h"
#include "shard/S3SceneWidget.h"

extern "C" {

s32 asdTMTexTableNodeIsLoaded(s32 table, s32 index);
void asdTMTexTableReleaseNode(s32 table, s32 index);
void uiSpriteSetImageKeyframe(SceneSprite *sprite, s32 keyframe, s32 arg2);
s32 FUN_002bf818(SceneSprite *sprite);
s32 flaggedValueHolderGetTotal(SceneWidget *widget);
/* Whether the sprite's image is up (a signed byte at 0x8a). */
s32 uiSpriteGetCompletionState(SceneSprite *sprite);


/* One widget update: advances the animation frame, switches to the queued image once it is up
 * and releases the textures that are no longer shown, next or queued. */
void FUN_003bb454(SceneWidget *widget)
{
    if (widget->animate != 0) {
        widget->frame = (widget->frame + 1) % 16;
    }
    if (widget->queuedKey != -1 && asdTMTexTableNodeIsLoaded(SCENE_TEXTURE_TABLE, widget->queuedKey) != 0 && uiSpriteGetCompletionState(&widget->sprite) != 0) {
        s32 index = flaggedValueHolderGetTotal(widget);

        if (widget->queuedKey == widget->entries[index]->lastKey + 1) {
            s32 queuedTex = widget->queuedTex;

            widget->nextKey = widget->queuedKey;
            widget->queuedTex = -1;
            widget->nextTex = queuedTex;
            widget->queuedKey = -1;
            uiSpriteSetImageKeyframe(&widget->sprite, 1, 0);
        }
    }
    if (widget->nextTex != -1 && FUN_002bf818(&widget->sprite) != 0) {
        widget->shownTex = widget->nextTex;
        widget->shownKey = widget->nextKey;
        widget->nextTex = -1;
        widget->nextKey = -1;
    }
    for (s32 i = 0; i < SCENE_TEXTURE_COUNT; i++) {
        if (widget->loaded[i] != 0
            && (widget->shownKey == -1 || widget->shownKey != i)
            && (widget->nextKey == -1 || widget->nextKey != i)
            && (widget->queuedKey == -1 || widget->queuedKey != i)
            && asdTMTexTableNodeIsLoaded(SCENE_TEXTURE_TABLE, i) != 0) {
            asdTMTexTableReleaseNode(SCENE_TEXTURE_TABLE, i);
            widget->loaded[i] = 0;
        }
    }
}

} /* extern "C" */
