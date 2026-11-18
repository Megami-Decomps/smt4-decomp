#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match1_Table03Record.h"
#include "gfx/PackedRenderState.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
void spriteDescriptorInitFromTemplate(PackedRenderState *sprite, s32 index,
    void *metadata, u32 metadataIndex, s32 bank, s32 page);
const PackedRenderParameters *dataTable02GetEntryByIndex(s32 index);
void FUN_003bbfdc(PackedRenderState *sprite, const PackedRenderParameters *parameters);
Table03Record *aocGetTableRecordOrFallback(s32 index);
void FUN_003bc248(PackedRenderState *sprite, s32 index, s32 bank, s32 page);
u8 rosterHasLeader(void);
s32 idIsAtLeast350(u32 id);

// Build the battle sprite from its override template, its data-table entry or its fallback record, then update the sprite and leader flags.
void btlSpriteSelectSource(BtlMainState *battle, PackedRenderState *sprite, s32 allowOverride)
{
    if (allowOverride != 0 && (battle->battleFlags & 0x200) != 0) {
        spriteDescriptorInitFromTemplate(sprite, battle->spriteSource.templateIndex, battle->spriteSource.metadata,
            battle->spriteSource.metadataIndex, static_cast<s8>(battle->spriteSource.bank),
            static_cast<s8>(battle->spriteSource.page));
        for (s32 coordinate = 0; coordinate < 5; ++coordinate)
            sprite->values[coordinate] = battle->spriteSource.coordinates[coordinate];
        return;
    }
    if (battle->spriteSource.templateIndex >= 0) {
        if (reinterpret_cast<s32>(battle->spriteSource.metadata) < 0 || battle->spriteSource.metadataIndex < 0)
            FUN_003bbfdc(sprite, dataTable02GetEntryByIndex(battle->spriteSource.templateIndex));
        else
            spriteDescriptorInitFromTemplate(sprite, battle->spriteSource.templateIndex, battle->spriteSource.metadata,
                battle->spriteSource.metadataIndex, static_cast<s8>(battle->spriteSource.bank),
                static_cast<s8>(battle->spriteSource.page));
    } else if (battle->spriteSource.fallbackIndex >= 0) {
        aocGetTableRecordOrFallback(battle->spriteSource.fallbackIndex);
        FUN_003bc248(sprite, battle->spriteSource.fallbackIndex,
            static_cast<s8>(battle->spriteSource.bank), static_cast<s8>(battle->spriteSource.page));
    }
    if ((sprite->mode & 4) != 0)
        battle->battleMask |= 0x40000;
    else
        battle->battleMask &= ~0x40000ULL;
    if (rosterHasLeader() != 0 && idIsAtLeast350(rosterGetLeaderId()) != 0)
        battle->battleMask |= 4ULL << 32;
    else
        battle->battleMask &= ~(4ULL << 32);
}
}
