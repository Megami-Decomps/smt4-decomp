#ifndef SHARD_W6_W6MATCH5_TEXTUREATTACHMENT_H
#define SHARD_W6_W6MATCH5_TEXTUREATTACHMENT_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct TextureAttachmentModel {
    u8 unk00[0xb4];
    AsdTexture *texture; // 0xb4
};
struct TextureAttachmentContent {
    u8 unk00[0xc];
    TextureAttachmentModel *model; // 0x0c
};
struct TextureAttachment {
    u8 unk00[0x50];
    TextureAttachmentContent *content; // 0x50
    f32 halfWidth; // 0x54
    f32 halfHeight; // 0x58
};

#endif
