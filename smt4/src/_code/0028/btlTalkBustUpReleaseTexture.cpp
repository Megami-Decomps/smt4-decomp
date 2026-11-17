#include "battle/Talk/btlTalkBustUp.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

extern "C" {

extern u32 g_aocSystem;

void asdTMTexTableReleaseNode(s32 table, s32 node);

/* Sets the talk bust-up's loaded flag, if it exists. */
static __inline void btlTalkBustUpSetLoaded(s8 loaded)
{
    BtlTalkBustUp *bustUp = g_btlTalkBustUp;
    if (bustUp != NULL) {
        bustUp->textureReady = loaded;
    }
}

/* Releases the talk bust-up's texture node (if it has one) and resets it to state 3. */
void btlTalkBustUpReleaseTexture(void)
{
    BtlTalkBustUp *bustUp = g_btlTalkBustUp;

    if (bustUp != NULL) {
        if (bustUp->textureNode >= 0) {
            asdTMTexTableReleaseNode(0x18, bustUp->textureNode);
            btlTalkBustUpSetLoaded(0);
            packageFileDisableByKindName(g_aocSystem, 0x18, bustUp->textureNode);
            bustUp->textureNode = -1;
        }
        bustUp->stateCounter = 0;
        bustUp->state = 3;
    }
}

} /* extern "C" */
