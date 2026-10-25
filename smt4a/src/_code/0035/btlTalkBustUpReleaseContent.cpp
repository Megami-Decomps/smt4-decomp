/* NON_MATCHING: native content-slot node receiver recovered; zero/table-id constant hoisting and final state/timer store registers differ. */
#include "common.h"

extern "C" {

typedef struct BustUp0035fc4c {
    /* 0x000 */ u8 unk000[0x2e8];
    /* 0x2e8 */ u32 state;
    /* 0x2ec */ u32 timer;
    /* 0x2f0 */ u8 unk2f0[4];
    /* 0x2f4 */ u8 textureLoaded;
    /* 0x2f5 */ u8 unk2f5[3];
    /* 0x2f8 */ s32 contentSlot;    /* -1 when none */
} BustUp0035fc4c;

typedef struct AocSystem0035fc4c AocSystem0035fc4c;

void asdTMTexTableReleaseNode(s32 table, s32 node);
void FUN_001b2d54(AocSystem0035fc4c *aoc, s32 table, s32 slot);

extern AocSystem0035fc4c *g_aocSystem; /* 0x570280 */
extern BustUp0035fc4c *g_btlTalkBustUp; /* 0x5710dc */

/* Releases the bust-up's texture node and add-on content slot, then resets it to state 3. */
void btlTalkBustUpReleaseContent(void)
{
    BustUp0035fc4c *bustUp = g_btlTalkBustUp;

    if (bustUp != NULL) {
        if (bustUp->contentSlot >= 0) {
            asdTMTexTableReleaseNode(0x10, bustUp->contentSlot);
            if (g_btlTalkBustUp != NULL) {
                g_btlTalkBustUp->textureLoaded = 0;
            }
            FUN_001b2d54(g_aocSystem, 0x10, bustUp->contentSlot);
            bustUp->contentSlot = -1;
        }
        bustUp->state = 3;
        bustUp->timer = 0;
    }
}

} /* extern "C" */
