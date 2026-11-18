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
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 reverse);
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
s8 uiSpriteGetScaleDone(const UiSpriteState *sprite);       /* the scale track's finished flag */
void spriteSetLayer(UiSpriteState *sprite, u16 layer);

/* Starts position key `key` and moves the sprite to its first point (its last one when `reverse`). */
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 key, s32 reverse);
/* Starts every track a command names; uiSpriteSelectAnim starts the first command of group `group`. */
void uiSpriteSetAnimationCommand(UiSpriteState *sprite, const SpriteAnimationCommand *command);
void uiSpriteSelectAnim(UiSpriteState *sprite, s16 group);
/* Advances every track by `step` frames and returns the finished flag; a sprite without images is finished. */
s32 uiSpriteAdvanceAnimation(UiSpriteState *sprite, f32 step);
/* The opacity, scale and image-frame tracks' advance. */
void FUN_001807a0(UiSpriteState *sprite, f32 step);
void FUN_00182348(UiSpriteState *sprite, f32 step);
void spriteSequencePlayerAdvance(UiSpriteState *sprite, f32 step);
/* Starts frame sequence `sequence` of the sprite's resource. */
void FUN_0036b644(UiSpriteState *sprite, s32 sequence);
/* uiSpriteAdvanceAnimation with the position track replaced by a slide in from 320 pixels to the right (left
   when `reverse`). */
s32 FUN_00167458(UiSpriteState *sprite, s32 reverse);

#ifdef __cplusplus
}
#endif

#endif
