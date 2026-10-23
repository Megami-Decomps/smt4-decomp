#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
const PanelTextLayoutEntryPrefixA *FUN_001834a4(u32 resource, s32 index);
void FUN_001835b4(s32 layer, u32 resource, u32 sprite, s32 x, s32 y, u32 tag);

/* Draw the nine grid cells with two opposing highlights and their trailing frames. */
void uiDrawRotatingGridHighlights(s32 firstEntry, s32 frame)
{
    s32 firstHighlight = (frame / 5) % 8;
    s32 firstTrailing = (firstHighlight + 7) % 8;
    s32 secondHighlight = (frame / 5 + 4) % 8;
    s32 secondTrailing = (secondHighlight + 7) % 8;
    for (s32 row = 0; row < 3; ++row) {
        for (s32 column = 0; column < 3; ++column) {
            s32 index = row * 3 + column;
            const PanelTextLayoutEntryPrefixA *entry = FUN_001834a4(26, firstEntry + index);
            if (firstHighlight == index || secondHighlight == index)
                FUN_001835b4(2, 26, 0x1DE, entry->x, entry->y, 251);
            else if (firstTrailing == index || secondTrailing == index)
                FUN_001835b4(2, 26, 0x1DF, entry->x, entry->y, 251);
            else
                FUN_001835b4(2, 26, 0x1DD, entry->x, entry->y, 251);
        }
    }
}
}
