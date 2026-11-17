#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* Draw the nine grid cells with two opposing highlights and their trailing frames. */
void uiDrawRotatingGridHighlights(s32 firstEntry, s32 frame)
{
    s32 step = frame / 5;
    s32 firstHighlight = step % 8;
    s32 firstTrailing = (firstHighlight + 7) % 8;
    s32 secondHighlight = (step + 4) % 8;
    s32 secondTrailing = (secondHighlight + 7) % 8;
    for (s32 row = 0; row < 3; ++row) {
        for (s32 column = 0; column < 3; ++column) {
            s32 index = row * 3 + column;
            const TextureTableEntryIV *entry = asdTMTexTableEntryAt(26, firstEntry + index);
            if (firstHighlight == index || secondHighlight == index)
                texDrawTableEntryAtStoredOrigin(2, 26, 0x1DE, entry->x, entry->y, 251);
            else if (firstTrailing == index || secondTrailing == index)
                texDrawTableEntryAtStoredOrigin(2, 26, 0x1DF, entry->x, entry->y, 251);
            else
                texDrawTableEntryAtStoredOrigin(2, 26, 0x1DD, entry->x, entry->y, 251);
        }
    }
}
}
