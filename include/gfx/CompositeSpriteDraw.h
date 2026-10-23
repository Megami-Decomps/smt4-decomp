#ifndef GFX_COMPOSITESPRITEDRAW_H
#define GFX_COMPOSITESPRITEDRAW_H
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include <stddef.h>

struct CompositeSpriteFrame {
    s32 file, sprite, x, y, depth;
};
struct SpriteFrameAnchor {
    s16 x, y;
    u16 kind;
    u8 unk06[6];
    u16 flags;
};
struct SpriteGeometryRecord {
    u8 unk00[0xC];
    SpriteFrameAnchor *anchor;
    u32 unk10;
};
struct SpriteGeometryTable {
    SpriteGeometryRecord *entries;
};
struct SpriteDrawParameters {
    u32 flags;
    s32 x, y, depth;
    u32 rotation;
    s32 originX, originY;
    u8 unk1C[0x10];
    u16 scaleX, scaleY;
};
typedef char CompositeSpriteDrawOffsets[
    sizeof(CompositeSpriteFrame) == 0x14 && sizeof(SpriteGeometryRecord) == 0x14 &&
    offsetof(SpriteFrameAnchor, kind) == 4 && offsetof(SpriteFrameAnchor, flags) == 0xC &&
    offsetof(SpriteDrawParameters, rotation) == 0x10 &&
    offsetof(SpriteDrawParameters, originX) == 0x14 &&
    offsetof(SpriteDrawParameters, originY) == 0x18 &&
    offsetof(SpriteDrawParameters, scaleX) == 0x2C &&
    offsetof(SpriteDrawParameters, scaleY) == 0x2E && sizeof(SpriteDrawParameters) == 0x30 ? 1 : -1];
#endif
