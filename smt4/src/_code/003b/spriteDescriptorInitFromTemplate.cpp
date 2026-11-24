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
    if (entry != NULL) {
        return entry;
    }
    return &entries[index];
}

/* FUN_003bbfdc's body (the expansion two functions before this one in the image, which retail inlines here as a plain
 * function called once: its two mode-bit clears stay apart, bic #4 and bic #56). */
static void expandParameters(PackedRenderState *state, const PackedRenderParameters *parameters)
{
    for (s32 i = 0; i < 6; ++i) {
        state->values[i] = parameters->values[i];
    }
    state->active = 0;
    state->modeFields.kind = parameters->kind;
    state->variant = parameters->variant;
    state->resource = parameters->resource;
    state->flags |= 0x40000000;
    u32 format = (parameters->flags >> 2) & 7;
    state->modeFields.format = format - 1;
    if (parameters->flags & 1) {
        state->flags |= 0x10000;
    }
    if (parameters->flags & 2) {
        state->flags |= 0x20000;
    }
    state->offsetX = parameters->offsetX;
    state->offsetY = parameters->offsetY;
    state->modeFields.unk2 = 0;
    state->phase = 0;
    state->timer = 0;
    state->modeFields.unk3 = 0;
    state->modeFields.unk4 = 0;
    state->modeFields.unk5 = 0;
    state->red = 0;
    state->green = 0;
    state->blue = 0;
    state->alpha = 0;
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
    expandParameters(sprite, &parameters);
    sprite->flags |= 0x100000;
}
}
