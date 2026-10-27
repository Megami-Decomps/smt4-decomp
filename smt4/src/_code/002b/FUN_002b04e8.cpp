#include "shard/S1ListPanel.h"
#include "shard/W9_W9Match1_PositionedLayoutTask.h"
#include <stddef.h>

struct SpriteImageView {
    SpriteInfo info;
    u8 opacity;
    u8 alternateOpacity;
    u8 unk12[2];
};
struct SpriteFileView {
    u32 unk00;
    SpriteImageView **images;
};
struct SpriteClipRectangle {
    s32 left, right, top, bottom;
};
struct SpriteDrawArguments {
    u32 flags;
    PositionedLayoutPosition position;
    u32 alternateDepth;
    u32 height;
    u32 width;
    SpriteClipRectangle clip;
    u16 scaleX;
    u16 scaleY;
    f32 scale;
    s16 originX, originY;
    s16 anchorX, anchorY;
};
typedef char SpriteDrawArgumentsLayoutCheck[sizeof(SpriteImageView) == 0x14 &&
    offsetof(SpriteFileView, images) == 4 && sizeof(SpriteDrawArguments) == 0x3c &&
    offsetof(SpriteDrawArguments, position) == 4 &&
    offsetof(SpriteDrawArguments, height) == 0x14 &&
    offsetof(SpriteDrawArguments, clip) == 0x1c &&
    offsetof(SpriteDrawArguments, scaleX) == 0x2c &&
    offsetof(SpriteDrawArguments, scale) == 0x30 ? 1 : -1];

extern "C" {
SpriteFileView *asdTMTexTableCallFileA(u32 table, s32 image);
void FUN_002af63c(SpriteFileView *file, SpriteImageView *image, SpriteDrawArguments *arguments);

void FUN_002b04e8(u32 flags, u32 table, s32 image, PositionedLayoutPosition position,
                  const SpriteClipRectangle *clip)
{
    SpriteFileView *file = asdTMTexTableCallFileA(table, image);
    SpriteImageView *sprite = &(*file->images)[image % 1000];
    SpriteDrawArguments arguments;
    arguments.flags = flags;
    arguments.position = position;
    arguments.alternateDepth = 0;
    arguments.height = 0;
    arguments.width = 0;
    arguments.scaleX = 1;
    arguments.scaleY = 1;
    if (clip != 0) {
        arguments.flags |= 0x28000;
        arguments.clip.left = clip->left;
        arguments.clip.right = clip->right;
        arguments.clip.top = clip->top;
        arguments.clip.bottom = clip->bottom;
        arguments.height = arguments.clip.bottom - arguments.clip.top;
        arguments.width = arguments.clip.right - arguments.clip.left;
    }
    FUN_002af63c(file, sprite, &arguments);
}
}
