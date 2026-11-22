/* NON_MATCHING: the template lookup is dataTable02GetEntryByIndex's body and the expansion FUN_003bbfdc's; retail
 * copies the template into other registers (one ldm of words 1-4), stores the six coordinates as str/stm/stm right after
 * the index, keeps the flag word in a register across both flag tests and clears the mode bits with two bic (127 rows). */
#include "gamedata/DataTable.h"
#include "gfx/PackedRenderState.h"
#include "AsdSDK/AsdMemUtil.h"
#include "addon/AocSystem.h"

/* The sprite metadata row aocEntryFind returns here: a default texture bank, page and resource. */
struct SpriteMetadata {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 bank;
    /* 0x03 */ u8 page;
    /* 0x04 */ u32 resource;
};

extern "C" {
SpriteMetadata *aocEntryFind(void *table, u32 id); // declcheck: local (EncountData.h types it for the encounter table)
const PackedRenderParameters *aocFindSpriteTemplateByKey(AocSystem *system, u32 key); // declcheck: local (EncountData.h returns the encounter group view of the same row)

/* Template `index` (an add-on one first); the section's first row for a bad index: the body of
 * dataTable02GetEntryByIndex. */
static __inline const PackedRenderParameters *templateByIndex(s32 index)
{
    void *section = dataTableGet(2, 2);
    const PackedRenderParameters *entries = (const PackedRenderParameters *)dataTableGetEntries(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    const PackedRenderParameters *entry = aocFindSpriteTemplateByKey(g_aocSystem, index);
    if (entry == NULL) {
        entry = &entries[index];
    }
    return entry;
}

/* Initialises a 0x74-byte sprite descriptor from template `index`, taking the texture bank, page and resource the
 * template leaves unset from the metadata row; a positive bank and page given here replace both. */
void spriteDescriptorInitFromTemplate(PackedRenderState *sprite, s32 index, void *metadataTable, u32 metadataId,
                                      s32 bank, s32 page)
{
    memClear(sprite, 0x74);
    sprite->values[0] = 0;
    sprite->values[1] = 0;
    sprite->values[2] = 0;
    sprite->values[3] = 0;
    sprite->values[4] = 0;
    sprite->values[5] = 0;
    sprite->scale[0] = 1.0f;
    sprite->scale[1] = 1.0f;
    SpriteMetadata *metadata = aocEntryFind(metadataTable, metadataId);
    PackedRenderParameters parameters = *templateByIndex(index);
    if (parameters.kind == 0) {
        parameters.kind = metadata->bank;
        parameters.variant = metadata->page;
    }
    if (bank > 0 && page > 0) {
        parameters.kind = bank;
        parameters.variant = page;
    }
    if (parameters.resource == 0)
        parameters.resource = metadata->resource;
    sprite->templateIndex = index;
    for (s32 i = 0; i < 6; ++i) {
        sprite->values[i] = parameters.values[i];
    }
    sprite->active = 0;
    sprite->formatInfo.kind = parameters.kind;
    sprite->variant = parameters.variant;
    sprite->resource = parameters.resource;
    sprite->flags |= 0x40000000;
    u32 format = (parameters.flags >> 2) & 7;
    sprite->formatInfo.format = format - 1;
    if (parameters.flags & 1) {
        sprite->flags |= 0x10000;
    }
    if (parameters.flags & 2) {
        sprite->flags |= 0x20000;
    }
    sprite->offsetX = parameters.offsetX;
    sprite->offsetY = parameters.offsetY;
    sprite->phase = 0;
    sprite->timer = 0;
    sprite->mode &= ~0x3C;
    sprite->red = 0;
    sprite->green = 0;
    sprite->blue = 0;
    sprite->alpha = 0;
    sprite->flags |= 0x100000;
}
}
