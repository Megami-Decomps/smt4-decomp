#include "common.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

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

void asdTMTexTableReleaseNode(s32 table, s32 node);

/* Sets the talk bust-up's loaded flag, if it exists. */
static __inline void btlTalkBustUpSetLoaded(u8 loaded)
{
    BustUp *bustUp = g_btlTalkBustUp;
    if (bustUp != NULL) {
        bustUp->loaded = loaded;
    }
}

/* Releases the talk bust-up's texture slot (if it has one) and resets it to state 3. */
void btlTalkBustUpReleaseTexture(void)
{
    BustUp *bustUp = g_btlTalkBustUp;

    if (bustUp != NULL) {
        if (bustUp->slot >= 0) {
            asdTMTexTableReleaseNode(0x18, bustUp->slot);
            btlTalkBustUpSetLoaded(0);
            FUN_002a60cc(g_aocSystem, 0x18, bustUp->slot);
            bustUp->slot = -1;
        }
        bustUp->unk2EC = 0;
        bustUp->state = 3;
    }
}

} /* extern "C" */
