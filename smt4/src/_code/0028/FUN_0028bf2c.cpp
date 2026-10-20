/* NON_MATCHING: constant hoisting only: retail materialises 0 and 24 separately where used (`mov r1, #0` twice, `mov r1, #24` before the call); built keeps the zero in r6 across the calls. */
#include "common.h"

extern "C" {

typedef struct BustUp {
    /* 0x000 */ u8 unk000[0x2E8];
    /* 0x2E8 */ s32 state;
    /* 0x2EC */ s32 unk2EC;
    /* 0x2F0 */ u8 unk2F0[4];
    /* 0x2F4 */ u8 loaded;
    /* 0x2F5 */ u8 unk2F5[3];
    /* 0x2F8 */ s32 slot;
} BustUp;

extern BustUp *g_btlTalkBustUp;
extern u32 g_aocSystem;

s32 asdTMTexTableReleaseNode(s32 node);
s32 FUN_002a60cc(u32 aoc, s32 node, s32 slot);

/* Releases the talk bust-up's texture slot (if it has one) and resets it to state 3. */
void FUN_0028bf2c(void)
{
    BustUp *bustUp = g_btlTalkBustUp;

    if (bustUp != NULL) {
        if (bustUp->slot >= 0) {
            asdTMTexTableReleaseNode(0x18);
            if (g_btlTalkBustUp != NULL) {
                g_btlTalkBustUp->loaded = 0;
            }
            FUN_002a60cc(g_aocSystem, 0x18, bustUp->slot);
            bustUp->slot = -1;
        }
        bustUp->state = 3;
        bustUp->unk2EC = 0;
    }
}

} /* extern "C" */
