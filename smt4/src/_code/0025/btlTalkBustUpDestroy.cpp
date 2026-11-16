/* NON_MATCHING: the state reset now happens only when a texture node was released (as retail); remaining: retail keeps a second copy of the portrait pointer (r4 for the release, r5 for the job/free calls) and puts the -1 in r0. */
#include "battle/Talk/btlTalkBustUp.h"

extern "C" {
extern BtlTalkBustUp *g_btlTalkBustUp;
extern void *g_aocSystem;
void asdTMTexTableReleaseNode(s32 table, s32 node);
void FUN_002a60cc(void *system, s32 table, u32 node);
void jobStop(u32 job, s32 mode);
void asdMemFree(void *allocation);

/* Sets the active portrait's flag at 0x2F4, if there is a portrait. */
static __inline void btlTalkBustUpSetUnk2F4(u8 value)
{
    if (g_btlTalkBustUp != NULL)
        g_btlTalkBustUp->unk2F4 = value;
}

/* Releases the portrait's texture node and resets its display state. */
static __inline void btlTalkBustUpReleaseTexture(BtlTalkBustUp *portrait)
{
    if (portrait->textureNode >= 0) {
        asdTMTexTableReleaseNode(24, portrait->textureNode);
        btlTalkBustUpSetUnk2F4(0);
        FUN_002a60cc(g_aocSystem, 24, portrait->textureNode);
        portrait->textureNode = -1;
        portrait->state = 3;
        portrait->unk2EC = 0;
    }
}

// Release the talk portrait's texture, job and state allocation.
void btlTalkBustUpDestroy(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        btlTalkBustUpReleaseTexture(portrait);
        jobStop(portrait->job, 0);
        asdMemFree(portrait);
        g_btlTalkBustUp = NULL;
    }
}
}
