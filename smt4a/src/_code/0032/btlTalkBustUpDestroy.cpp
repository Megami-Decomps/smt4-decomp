/* NON_MATCHING: retail keeps two registers for the portrait pointer (r5 original for the reads, r4 copy for the null test and state stores) and the zero in r7; ours merges them. The flag-clear setter now matches. */
#include "battle/Talk/btlTalkBustUp.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystemA *g_aocSystem;
extern BtlTalkBustUp *g_btlTalkBustUp;
void jobStop(u32 job, s32 mode);
void asdMemFree(void *allocation);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void FUN_001b2d54(AocSystemA *system, s32 table, u32 node);

static __inline void btlTalkBustUpSetUnk2F4(BtlTalkBustUp *portrait, u8 value)
{
    if (portrait != NULL)
        portrait->unk2F4 = value;
}

// Release the talk portrait's texture node, stop its job and free its state.
void btlTalkBustUpDestroy(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        if (portrait->textureNode >= 0) {
            asdTMTexTableReleaseNode(0x10, portrait->textureNode);
            btlTalkBustUpSetUnk2F4(g_btlTalkBustUp, 0);
            FUN_001b2d54(g_aocSystem, 0x10, portrait->textureNode);
            portrait->textureNode = -1;
            portrait->state = 3;
            portrait->unk2EC = 0;
        }
        jobStop(portrait->job, 0);
        asdMemFree(portrait);
        g_btlTalkBustUp = NULL;
    }
}
}
