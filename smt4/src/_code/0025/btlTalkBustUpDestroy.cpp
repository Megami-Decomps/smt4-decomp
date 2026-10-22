/* NON_MATCHING: texture release ABI and state offsets are recovered, but the inlined cleanup retains an extra owner register in retail and uses different store scheduling. */
#include "battle/Talk/btlTalkBustUp.h"

extern "C" {
extern BtlTalkBustUp *g_btlTalkBustUp;
extern void *g_aocSystem;
void asdTMTexTableReleaseNode(s32 table, s32 node);
void FUN_002a60cc(void *system, s32 table, u32 node);
void jobStop(u32 job, s32 mode);
void asdMemFree(void *allocation);

// Release the talk portrait's texture, job and state allocation.
void btlTalkBustUpDestroy(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        if (portrait->textureNode >= 0) {
            asdTMTexTableReleaseNode(24, portrait->textureNode);
            if (g_btlTalkBustUp != NULL)
                g_btlTalkBustUp->unk2F4 = 0;
            FUN_002a60cc(g_aocSystem, 24, portrait->textureNode);
            portrait->textureNode = -1;
        }
        portrait->state = 3;
        portrait->unk2EC = 0;
        jobStop(portrait->job, 0);
        asdMemFree(portrait);
        g_btlTalkBustUp = NULL;
    }
}
}
