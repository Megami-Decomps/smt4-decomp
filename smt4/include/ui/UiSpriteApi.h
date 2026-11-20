/* The UI sprite functions (see ui/UiSpriteState.h): every unit calls them through these declarations. */
#ifndef UI_UISPRITEAPI_H
#define UI_UISPRITEAPI_H

#include "ui/UiSpriteState.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Clears the sprite and sets its texture table, its images, its animation resource, its id and its opacity
   (scale 1, every track done). */
void uiSpriteInitializeState(UiSpriteState *sprite, u32 textureTable, s32 image, s32 secondaryImage,
                             UiResourceParameters *resources, s16 id, f32 alpha);
/* uiSpriteInitializeState without a secondary image. */
void uiSpriteStateInitFromSource(UiSpriteState *sprite, u32 textureTable, s32 image,
                                 UiResourceParameters *resources, s16 id, f32 alpha);
/* Starts opacity key `key` (from its last value to its first when `reverse`). */
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s16 key, s32 reverse);
/* The finished flag: every track is done. */
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);
/* The position in whole pixels. */
s32 vec2GetXInt(const UiSpriteState *sprite);
s32 vec2GetYInt(const UiSpriteState *sprite);
/* Shows `image` (clears the secondary image), or the secondary image (clears `image`). */
void pairSetFirstResetSecond(UiSpriteState *sprite, s32 image);
void pairSetSecondResetFirst(UiSpriteState *sprite, s32 secondaryImage);

/* Accessors armlink inlined into every caller. */
f32 vec2GetSpeed(const UiSpriteState *sprite);            /* the opacity */
s16 uiSpriteGetOperationMode(const UiSpriteState *sprite); /* the position key */
s16 uiSpriteGetMode(const UiSpriteState *sprite);          /* the opacity key */
void spriteSetLayer(UiSpriteState *sprite, u16 layer);
s8 frameAnimationGetBusy(const UiSpriteState *sprite);     /* the updated flag */

/* Starts position key `key` and moves the sprite to its first point (its last one when `reverse`). */
void uiSpriteSetKeyframe(UiSpriteState *sprite, s16 key, s32 reverse);
/* Starts every track a command names; spriteStartAnimationByIndex starts the first command of group `index`. */
void spriteStartAnimation(UiSpriteState *sprite, const SpriteAnimationCommand *command);
void spriteStartAnimationByIndex(UiSpriteState *sprite, s32 index);
/* Advances every track by a frame and returns the finished flag; a sprite without images is finished. */
s32 uiSpriteAdvanceAnimation(UiSpriteState *sprite);
/* The opacity, scale and image-frame tracks' advance. */
void FUN_002b1e08(UiSpriteState *sprite);
void controllerUpdateUniformScaleTrack(UiSpriteState *sprite);
void spriteSequencePlayerAdvance(UiSpriteState *sprite);
/* Starts frame sequence `sequence` of the sprite's resource. */
void FUN_002eb76c(UiSpriteState *sprite, s32 sequence);
/* uiSpriteAdvanceAnimation with the position track replaced by a slide in from 320 pixels to the right (left
   when `reverse`). */
s32 uiSlidingSpriteAdvance(UiSpriteState *sprite, s32 reverse);

#ifdef __cplusplus
}
#endif

#endif
