#include "battle/Talk/btlTalkBustUp.h"

extern "C" {
extern BtlTalkBustUp *g_btlTalkBustUp;
extern void *g_aocSystem;
void asdTMTexTableReleaseNode(s32 table, s32 node);
void packageFileDisableByKindName(void *system, s32 table, u32 node);
void jobStop(u32 job, s32 mode);
void asdMemFree(void *allocation);

/* Sets the portrait's flag byte at 0x2F4 when there is a portrait. */
static __inline void btlTalkBustUpSetUnk2F4(BtlTalkBustUp *portrait, u8 value)
{
    if (portrait != NULL) {
        portrait->unk2F4 = value;
    }
}

/* btlTalkBustUpReleaseTexture's body, inlined here: releases the current portrait's texture node
 * and add-on content slot and resets it to state 3. */
static __inline void btlTalkBustUpReleaseTextureInline(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        if (portrait->textureNode >= 0) {
            asdTMTexTableReleaseNode(24, portrait->textureNode);
            btlTalkBustUpSetUnk2F4(g_btlTalkBustUp, 0);
            packageFileDisableByKindName(g_aocSystem, 24, portrait->textureNode);
            portrait->textureNode = -1;
        }
        portrait->unk2EC = 0;
        portrait->state = 3;
    }
}

// Release the talk portrait's texture, job and state allocation.
void btlTalkBustUpDestroy(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        if (portrait->textureNode >= 0) {
            btlTalkBustUpReleaseTextureInline();
        }
        jobStop(portrait->job, 0);
        asdMemFree(portrait);
        g_btlTalkBustUp = NULL;
    }
}
}
