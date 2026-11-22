/* NON_MATCHING: 70 lines: the same instructions, frame and layout as retail; retail computes the colour's rgb mask
 * before spilling the alpha at entry, keeps the depth byte in r0 (r1 here) with the opacity product in r0 for the
 * umull, and in each of the four blend sets (renderCtxSetB) gives the slot address, previous state and dirty flag
 * r3/r1/r2 (r1/r3/r1 here). */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "util/BitsAndBytes.h"
#include "code/Code0019_Smt4.h"

extern "C" {

/* Draws part group `key` of a sprite: each part (filtered by its layer when `filter` is 1 or 2) with
 * its blend preset, texture cell, opacity and depth. */
void spriteDrawPartGroup(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position, u32 flags, s32 filter,
                  f32 scale)
{
    if (owner->origin != NULL) {
        u32 rgb = flags & 0xFFFFFF00;
        u32 alpha = flags & 0xFF;
        SpriteDrawVector2 partScale(1.0f, 1.0f);
        if (key < owner->origin->partGroupCount) {
            s32 first = owner->partGroups[key].first;
            s32 last = first + owner->partGroups[key].count - 1;
            for (s32 i = first; i <= last; i++) {
                SpriteDrawPart *part = &owner->parts[i];
                if (filter == 1) {
                    if (part->layer != 0)
                        continue;
                } else if (filter == 2) {
                    if (part->layer == 0)
                        continue;
                }
                u32 color = rgb | (part->opacity * alpha) / 100;
                f32 depth = (100.0f - part->depth * 0.5f) * 0.01f;
                f32 rect[4];
                for (s32 j = 0; j < 4; j++)
                    rect[j] = part->rect[j];
                switch (part->blend) {
                case 0:
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                    break;
                case 1:
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                    break;
                case 2:
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 2));
                    break;
                case 3:
                    renderCtxSetB(g_titleScene, packNibblesAndByte(5, 0, 1));
                    break;
                }
                renderCtxSelectTexture(g_titleScene, owner->cells[part->cell].texture);
                spriteDrawPartQuad(owner->cells[part->cell].texture, position, rect, part->texCoords, color, &partScale, 0, 0,
                             part->flip & 1, (part->flip & 2) >> 1, part->rotation, depth, scale);
            }
        }
    }
}

} /* extern "C" */
