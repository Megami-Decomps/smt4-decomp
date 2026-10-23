/* NON_MATCHING: return-value spill and draw-parameter frame size differ, shifting placement/modulo registers; anchor behavior matches. */
#include "gfx/CompositeSpriteDraw.h"

extern "C" {
TexSprite *texTableFindNode(u32 bank, u32 node);
TexFile *asdTMTexTableCallFileC(u32 bank, s32 sprite);
void FUN_00184efc(TexFile *file, SpriteGeometryRecord *geometry,
                  const SpriteDrawParameters *parameters, u32 option);

// Draw each sprite-frame component with its placement and optional anchor metadata.
u32 FUN_00164b5c(u32 flags, u32 bank, u32 node, s32 x, s32 y, s32 depth)
{
    TexSprite *sprite = texTableFindNode(bank, node);
    if (sprite == NULL)
        return 0;
    for (s32 index = 0; index < sprite->frameCount; ++index) {
        const CompositeSpriteFrame *frame =
            &reinterpret_cast<const CompositeSpriteFrame *>(sprite->frames)[index];
        s32 drawX = frame->x + x;
        s32 drawY = frame->y + y;
        s32 drawDepth = frame->depth + depth;
        s32 spriteId = frame->sprite + frame->file * 1000;
        TexFile *file = asdTMTexTableCallFileC(bank, spriteId);
        SpriteGeometryTable *table = reinterpret_cast<SpriteGeometryTable *>(file->image);
        SpriteGeometryRecord *geometry = &table->entries[spriteId % 1000];
        SpriteFrameAnchor *anchor = geometry->anchor;
        SpriteDrawParameters parameters;
        parameters.flags = flags;
        parameters.x = drawX;
        parameters.y = drawY;
        parameters.depth = drawDepth;
        parameters.rotation = 0;
        parameters.originX = 0;
        parameters.originY = 0;
        parameters.scaleX = 1;
        parameters.scaleY = 1;
        if (anchor != NULL) {
            if (anchor->kind == 0 && (anchor->flags & 1) != 0) {
                parameters.flags = flags | 0x8000;
                parameters.originX = anchor->x;
                parameters.originY = anchor->y;
            }
            if (anchor->kind == 1) {
                parameters.originX = anchor->x;
                parameters.originY = anchor->y;
            }
        }
        FUN_00184efc(file, geometry, &parameters, 0);
    }
    return 1;
}
}
