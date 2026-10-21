/* NON_MATCHING: template register allocation, packed field updates and output store scheduling differ; -O2 candidate. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

struct SpriteMetadata {
    u16 id;
    u8 textureBank;
    u8 texturePage;
    u32 texture;
};
struct SpriteTemplate {
    u32 flags;
    union {
        u32 packed;
        struct { u32 bank : 8; u32 page : 8; u32 reserved : 16; } texture;
    } source;
    u32 texture;
    u32 bounds[3];
    u32 dimensions;
};
struct SpriteDescriptor {
    u32 coordinates[6]; // 0x00
    union { u32 control; s16 index; } state; // 0x18
    union {
        u32 flags;
        struct { u8 unk1c[2]; u8 blendMode; u8 textureBank; } bytes;
    } render; // 0x1c
    s8 texturePage; // 0x20
    u8 unk21[3];
    u32 texture; // 0x24
    u16 offsetX, offsetY; // 0x28
    u8 color[4]; // 0x2c
    f32 scaleX, scaleY; // 0x30
    u8 hidden; // 0x38
    u8 unk39[0x17];
    u16 width, height; // 0x50
    u8 unk54[0x20];
};
struct Table02Sub2Entry;
extern "C" {
extern AocSystem *g_aocSystem;
void memClear(void *, u32);
SpriteMetadata *aocEntryFind(void *, u32);
Table02Sub2Entry *aocFindSpriteTemplateByKey(AocSystem *, u32);

void spriteDescriptorInitFromTemplate(SpriteDescriptor *sprite, s32 index, void *metadataTable, u32 metadataId,
                  s32 bank, s32 page)
{
    memClear(sprite, sizeof(*sprite));
    sprite->coordinates[0] = 0;
    sprite->coordinates[1] = 0;
    sprite->coordinates[2] = 0;
    sprite->coordinates[3] = 0;
    sprite->coordinates[4] = 0;
    sprite->coordinates[5] = 0;
    sprite->scaleX = 1.0f;
    sprite->scaleY = 1.0f;
    SpriteMetadata *metadata = aocEntryFind(metadataTable, metadataId);
    void *section = dataTableGet(2, 2);
    const SpriteTemplate *source = (const SpriteTemplate *)dataTableGetEntries(section);
    if (index >= 0 && (u32)index < dataTableGetCount(section)) {
        const SpriteTemplate *download = (const SpriteTemplate *)aocFindSpriteTemplateByKey(g_aocSystem, index);
        if (download)
            source = download;
        else
            source += index;
    }
    SpriteTemplate entry = *source;
    if (!entry.source.texture.bank) {
        entry.source.texture.bank = metadata->textureBank;
        entry.source.texture.page = metadata->texturePage;
    }
    if (bank > 0 && page > 0) {
        entry.source.texture.bank = bank;
        entry.source.texture.page = page;
    }
    if (!entry.texture)
        entry.texture = metadata->texture;
    sprite->state.index = index;
    sprite->coordinates[0] = entry.bounds[0] & 0xffff;
    sprite->coordinates[1] = entry.bounds[0] >> 16;
    sprite->coordinates[2] = entry.bounds[1] & 0xffff;
    sprite->coordinates[3] = entry.bounds[1] >> 16;
    sprite->coordinates[4] = entry.bounds[2] & 0xffff;
    sprite->coordinates[5] = entry.bounds[2] >> 16;
    sprite->hidden = 0;
    sprite->render.bytes.textureBank = entry.source.texture.bank;
    sprite->texturePage = (s8)entry.source.texture.page;
    sprite->texture = entry.texture;
    sprite->state.control |= 0x40000000;
    sprite->render.bytes.blendMode = ((entry.flags >> 2) & 7) - 1;
    if (entry.flags & 1)
        sprite->state.control |= 0x10000;
    if (entry.flags & 2)
        sprite->state.control |= 0x20000;
    sprite->width = entry.dimensions;
    sprite->height = entry.dimensions >> 16;
    sprite->offsetX = 0;
    sprite->offsetY = 0;
    sprite->render.flags &= ~0x3cu;
    sprite->color[0] = 0;
    sprite->color[1] = 0;
    sprite->color[2] = 0;
    sprite->color[3] = 0;
    sprite->state.control |= 0x100000;
}
}
