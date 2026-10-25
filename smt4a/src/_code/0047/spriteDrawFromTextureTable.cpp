#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
struct SpriteSizeOverride {
    s16 width, height;
    u16 mode;
    u8 unk06[6];
    u16 flags;
};
struct SpriteFrame {
    u8 unk00[0xC];
    SpriteSizeOverride *size;
    u32 unk10;
};
struct SpriteFrameList {
    SpriteFrame *frames;
};
struct SpriteBank {
    u32 unk00;
    SpriteFrameList *list;
    AsdTexture *texture;
    u8 unk0C[0x14];
};
struct SpriteDrawParameters {
    u32 flags;
    u8 unk04[0x10];
    s32 width, height;
    u8 unk1C[0x20];
};
typedef char SpriteDrawParametersSizeCheck[sizeof(SpriteDrawParameters) == 0x3C ? 1 : -1];
}

extern "C" {
TexNode *asdTMTexTableGetNode(u32, u32);
void FUN_001ab8e0(SpriteDrawParameters *, u32, u32, u32, u32);
void FUN_0047ce24(SpriteBank *, SpriteFrame *, SpriteDrawParameters *);

void spriteDrawFromTextureTable(SpriteBank **banks, u32 flags, u32 table, u32 node,
                  s32 spriteId, u32 color, u32 xBits, u32 yBits)
{
    TexNode *texture = asdTMTexTableGetNode(table, node);
    SpriteBank *bank = &(*banks)[spriteId / 1000];
    bank->texture = texture->loaded.texture;
    SpriteFrame *frame = &bank->list->frames[spriteId % 1000];
    SpriteSizeOverride *size = frame->size;
    SpriteDrawParameters parameters;
    FUN_001ab8e0(&parameters, flags, color, xBits, yBits);
    if (size != NULL) {
        if (size->mode == 0 && (size->flags & 1)) {
            parameters.flags |= 0x8000;
            parameters.width = size->width;
            parameters.height = size->height;
        }
        if (size->mode == 1) {
            parameters.width = size->width;
            parameters.height = size->height;
        }
    }
    FUN_0047ce24(bank, frame, &parameters);
}
}
