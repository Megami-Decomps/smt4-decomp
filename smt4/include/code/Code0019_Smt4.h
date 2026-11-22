#pragma once
#include "common.h"

/* Functions in the 0x00190000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void FUN_00195510(u8 value);

void FUN_0019213c(void);

/* Draws one textured quad of a sprite part (callers: the sprite part draw spriteDrawPartGroup). */
struct AsdTexture;
struct SpriteDrawVector2;
struct SpriteDrawVector3;
void spriteDrawPartQuad(struct AsdTexture *texture, const struct SpriteDrawVector3 *position, const f32 *rect,
                  const f32 *texCoords, u32 color, const struct SpriteDrawVector2 *scale, s32 unk7, s32 unk8,
                  s32 flipX, s32 flipY, f32 rotation, f32 depth, f32 globalScale);

} /* extern "C" */
