#include "battle/Talk/btlTalkBustUpRelease.h"

extern "C" {
void jobStop(u32 job, s32 mode);
void asdMemFree(void *allocation);

// Release the talk portrait's texture node, stop its job and free its state.
void btlTalkBustUpDestroy(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        if (portrait->textureNode >= 0) {
            btlTalkBustUpReleaseContentInline();
        }
        jobStop(portrait->job, 0);
        asdMemFree(portrait);
        g_btlTalkBustUp = NULL;
    }
}
}
