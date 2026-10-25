#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"

extern "C" {
const SpriteInfo *asdTMTexTableEntryAt(u32 archive, s32 index);

// Draw a three-by-three loading grid with two rotating bright dots and their trails.
void uiDrawRotatingLoadingGrid(s32 firstPosition, s32 frame)
{
    s32 first = (frame / 5) % 8;
    s32 firstTrail = (first + 7) % 8;
    s32 second = (frame / 5 + 4) % 8;
    s32 secondTrail = (second + 7) % 8;
    for (s32 row = 0; row < 3; ++row) {
        for (s32 column = 0; column < 3; ++column) {
            s32 index = row * 3 + column;
            const SpriteInfo *position = asdTMTexTableEntryAt(0x24, firstPosition + index);
            if (first == index || second == index)
                FUN_002bf288(2, 0x24, 0x1de, position->x, position->y, 0xfb);
            else if (firstTrail == index || secondTrail == index)
                FUN_002bf288(2, 0x24, 0x1df, position->x, position->y, 0xfb);
            else
                FUN_002bf288(2, 0x24, 0x1dd, position->x, position->y, 0xfb);
        }
    }
}
}
