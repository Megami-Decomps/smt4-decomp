/* NON_MATCHING: texture-release state update uses one retained portrait pointer rather than two. */
#include "battle/Talk/btlTalkBustUp.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystemA *g_aocSystem;
extern BtlTalkBustUp *g_btlTalkBustUp;
void jobStop(u32 job, s32 mode);
void asdMemFree(void *allocation);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void FUN_001b2d54(AocSystemA *system, s32 table, u32 node);

// Release the talk portrait's texture node, stop its job and free its state.
void btlTalkBustUpDestroy(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        if (portrait->textureNode >= 0) {
            asdTMTexTableReleaseNode(0x10, portrait->textureNode);
            if (g_btlTalkBustUp != NULL)
                g_btlTalkBustUp->unk2F4 = 0;
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
