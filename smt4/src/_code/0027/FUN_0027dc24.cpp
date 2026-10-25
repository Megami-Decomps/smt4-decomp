/* NON_MATCHING: battle sprite selector source reloads and stripped-call NOPs differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W6_W6Match1_Table03Record.h"
#include "gfx/PackedRenderState.h"
#include "shard/FUN_002903f0.h"

extern "C" {
void spriteDescriptorInitFromTemplate(PackedRenderState *sprite, s32 index,
    void *metadata, u32 metadataIndex, s32 bank, s32 page);
const PackedRenderParameters *dataTable02GetEntryByIndex(s32 index);
void FUN_003bbfdc(PackedRenderState *sprite, const PackedRenderParameters *parameters);
Table03Record *aocGetTableRecordOrFallback(s32 index);
void FUN_003bc248(PackedRenderState *sprite, s32 index, s32 bank, s32 page);
u8 FUN_0029022c(void);
s32 idIsAtLeast350(u32 id);

void FUN_0027dc24(BtlMainState *battle, PackedRenderState *sprite, s32 allowOverride)
{
    s32 index = battle->spriteSource.templateIndex;
    if (allowOverride != 0 && (battle->battleFlags & 0x200) != 0) {
        spriteDescriptorInitFromTemplate(sprite, index, battle->spriteSource.metadata,
            battle->spriteSource.metadataIndex, static_cast<s8>(battle->spriteSource.bank),
            static_cast<s8>(battle->spriteSource.page));
        for (s32 coordinate = 0; coordinate < 5; ++coordinate)
            sprite->values[coordinate] = battle->spriteSource.coordinates[coordinate];
        return;
    }
    if (index >= 0) {
        if (reinterpret_cast<s32>(battle->spriteSource.metadata) >= 0 && battle->spriteSource.metadataIndex >= 0)
            spriteDescriptorInitFromTemplate(sprite, index, battle->spriteSource.metadata,
                battle->spriteSource.metadataIndex, static_cast<s8>(battle->spriteSource.bank),
                static_cast<s8>(battle->spriteSource.page));
        else
            FUN_003bbfdc(sprite, dataTable02GetEntryByIndex(index));
    } else if (battle->spriteSource.fallbackIndex >= 0) {
        aocGetTableRecordOrFallback(battle->spriteSource.fallbackIndex);
        FUN_003bc248(sprite, battle->spriteSource.fallbackIndex,
            static_cast<s8>(battle->spriteSource.bank), static_cast<s8>(battle->spriteSource.page));
    }
    if ((sprite->mode & 4) != 0)
        battle->battleFlags |= 0x40000;
    else
        battle->battleFlags &= ~0x40000;
    if (FUN_0029022c() != 0 && idIsAtLeast350(FUN_002903f0()) != 0)
        battle->spriteFlags |= 4;
    else
        battle->spriteFlags &= ~4;
}
}
