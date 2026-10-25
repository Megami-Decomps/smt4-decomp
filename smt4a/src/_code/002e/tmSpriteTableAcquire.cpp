/* NON_MATCHING: incrementing past reserved sprite six eliminates the retail reserved-slot loop's redundant backedge. */
#include "common.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {
void asdTMTexTableLoadSprites(s32 table);
extern s8 DAT_0057f234;

// Load table eleven's supported sprites on its first acquisition.
void tmSpriteTableAcquire(void)
{
    if (DAT_0057f234 <= 0) {
        asdTMTexTableLoadSprites(11);
        for (s32 sprite = 0; sprite < 9; ++sprite) {
            while (sprite == 6) {
                ++sprite;
            }
            FUN_0014afd0(11, sprite);
        }
    }
    ++DAT_0057f234;
}
}
