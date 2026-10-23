/* NON_MATCHING: composite placement draw uses different stack packet and loop register allocation. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct SpritePartPlacement {
    s32 table, sprite;
    s32 x, y, z;
};
struct SpriteDrawFile {
    void *texture;
    TexSprite **sprites;
};
struct SpriteFrameAnchor {
    s16 x, y;
    u16 kind;
    u8 unk06[6];
    u8 flags;
};
struct SpritePartDraw {
    u32 flags;
    s32 x, y, z;
    u32 rotation;
    s32 originX, originY;
    u8 unk1C[0x10];
    u16 scaleX, scaleY;
    u8 unk30[0x0C];
};
typedef char SpritePartPlacementSizeCheck[sizeof(SpritePartPlacement) == 0x14 ? 1 : -1];
extern "C" {
TexSprite *texTableFindNode(u32 table, u32 sprite);
SpriteDrawFile *asdTMTexTableCallFileA(u32 table, s32 combinedId);
s32 FUN_002af63c(SpriteDrawFile *file, TexSprite *sprite, SpritePartDraw *draw);

u32 FUN_002bf380(u32 flags, u32 table, u32 spriteId, s32 x, s32 y, s32 z)
{
    TexSprite *sprite = texTableFindNode(table, spriteId);
    if (!sprite)
        return 0;
    for (s32 i = 0; i < sprite->frameCount; ++i) {
        const SpritePartPlacement *parts = reinterpret_cast<const SpritePartPlacement *>(sprite->frames);
        const SpritePartPlacement &part = parts[i];
        s32 combinedId = part.table * 1000 + part.sprite;
        s32 partX = part.x + x;
        s32 partY = part.y + y;
        s32 partZ = part.z + z;
        SpriteDrawFile *file = asdTMTexTableCallFileA(table, combinedId);
        TexSprite *frame = *file->sprites + combinedId % 1000;
        const SpriteFrameAnchor *anchor = reinterpret_cast<const SpriteFrameAnchor *>(frame->frames);
        SpritePartDraw draw;
        draw.flags = flags;
        draw.x = partX;
        draw.y = partY;
        draw.z = partZ;
        draw.rotation = 0;
        draw.originX = 0;
        draw.originY = 0;
        draw.scaleX = 1;
        draw.scaleY = 1;
        if (anchor) {
            if (anchor->kind == 0 && (anchor->flags & 1)) {
                draw.flags = flags | 0x8000;
                draw.originX = anchor->x;
                draw.originY = anchor->y;
            }
            if (anchor->kind == 1) {
                draw.originX = anchor->x;
                draw.originY = anchor->y;
            }
        }
        FUN_002af63c(file, frame, &draw);
    }
    return 1;
}
}
