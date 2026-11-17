#include "gfx/SpriteTextureRect.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct NumberDisplayPosition { u32 unk00; s32 x, y; };
extern "C" {
void asdTextDrawDirectoryEntry(u32 context, u32 layer, s32 color, u32 flags, u32 alignment, u32 directory, s32 entry);
void FUN_002598f0(u32 context, s32 x, s32 y, u32 depth, f32 scale);

// Draw up to eleven directory entries using the corresponding per-row sprite metrics.
void uiDrawDirectoryRows(const NumberDisplayPosition *position, u32 context, u32 directory, s32 count, s32 start, s32 offset)
{
    s32 x = position->x, y = position->y;
    TextureTableEntryIV *base = asdTMTexTableEntryAt(57, 207);
    for (s32 i = 0; i < 11; ++i) {
        TextureTableEntryIV *row = asdTMTexTableEntryAt(57, i + 209);
        if (count > i) {
            asdTextDrawDirectoryEntry(context, 2, -1, 0, 3, directory, i + start + offset);
            FUN_002598f0(context, x + (s16)row->x + (s16)base->x,
                y + (s16)row->y + (s16)base->y, 21, 1.0f);
            texDrawTableEntryAtStoredOrigin(2, 57, 206, x + (s16)row->x, y + (s16)row->y, 12);
        }
    }
}
}
