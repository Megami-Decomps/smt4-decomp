#include "shard/TextureDrawCall_Payload.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
struct DirectoryListPlacement {
    f32 scale;
    s32 x;
    s32 y;
};
}
extern "C" {
const char *progressUnlockGetNthEarnedTitle(s32 index);
void asdTextFormatStream(u32 text, s32 layer, u32 color, s32 flags, s32 mode, const char *value);
void asdTextDrawDirectoryEntry(u32 text, s32 layer, u32 color, s32 flags, s32 mode, u32 directory, s32 index);

/* Fills the visible directory rows and draws their backing sprites. */
void uiDrawDirectoryRowsByKind(const DirectoryListPlacement *placement, u32 text, u32 directory,
                  s32 count, s32 first, s32 offset, s32 kind)
{
    s32 x = placement->x;
    s32 y = placement->y;
    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x2E, 0xCF);
    for (s32 row = 0; row < 11; ++row) {
        TextureTableEntryIV *position = asdTMTexTableEntryAt(0x2E, row + 0xD1);
        if (count <= row)
            continue;
        switch (kind) {
        case 0: case 2: case 3:
            asdTextDrawDirectoryEntry(text, 2, 0xFFFFFFFF, 0, 3, directory, row + first + offset);
            break;
        case 1:
            asdTextFormatStream(text, 2, 0xFFFFFFFF, 0, 3,
                         textExpandGlyphsToBuffer(progressUnlockGetNthEarnedTitle(row + first + offset), 0, 0));
            break;
        }
        textDrawFaded((const void *)text, position->x + anchor->x + x, position->y + anchor->y + y, 0x15, placement->scale);
        TextureDrawPayloadIV payload;
        payload.words[0] = position->y + y;
        payload.words[1] = 0xC;
        texDrawTableEntryAtStoredOrigin(2, 0x2E, 0xCE, position->x + x, payload);
    }
}
} /* extern "C" */
