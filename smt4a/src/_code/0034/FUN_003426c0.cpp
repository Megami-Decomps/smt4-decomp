/* NON_MATCHING: directory rows restored; backing sprite y/flags stack arguments use separate stores instead of the retail strd. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

namespace {
struct DirectoryListPlacement {
    f32 scale;
    s32 x;
    s32 y;
};
}
extern "C" {
SpriteInfo *asdTMTexTableEntryAt(s32 group, s32 sprite);
const char *FUN_0035aa90(s32 index);
void asdTextFormatStream(u32 text, s32 layer, u32 color, s32 flags, s32 mode, const char *value);
void asdTextDrawDirectoryEntry(u32 text, s32 layer, u32 color, s32 flags, s32 mode, u32 directory, s32 index);

// Fill the visible directory rows, then place their text and backing sprites.
void FUN_003426c0(const DirectoryListPlacement *placement, u32 text, u32 directory,
                  s32 count, s32 first, s32 offset, s32 kind)
{
    s32 x = placement->x;
    s32 y = placement->y;
    SpriteInfo *anchor = asdTMTexTableEntryAt(0x2E, 0xCF);
    for (s32 row = 0; row < 11; ++row) {
        SpriteInfo *position = asdTMTexTableEntryAt(0x2E, row + 0xD1);
        if (count <= row)
            continue;
        switch (kind) {
        case 0: case 2: case 3:
            asdTextDrawDirectoryEntry(text, 2, 0xFFFFFFFF, 0, 3, directory, row + first + offset);
            break;
        case 1:
            asdTextFormatStream(text, 2, 0xFFFFFFFF, 0, 3,
                         FUN_001654f8(FUN_0035aa90(row + first + offset), 0, 0));
            break;
        }
        FUN_0025cc78(reinterpret_cast<const void *>(text), position->x + anchor->x + x, position->y + anchor->y + y, 0x15, placement->scale);
        FUN_001835b4(2, 0x2E, 0xCE, position->x + x, position->y + y, 0xC);
    }
}
}
