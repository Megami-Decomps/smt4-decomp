#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern s32 scrGetCommandFrame(void);
extern void btlTalkBustUpSetDemonTexture(u16 id, s32 arg);
extern void btlTalkBustUpSetUnk2F4(s32 value);
extern s32 btlTalkBustupTextureIsLoaded(u16 id);

/* Script command: on its first frame starts the talk bust-up for the id; returns whether btlTalkBustupTextureIsLoaded says it is done. */
u8 scrCommTalkBustUpStart(void)
{
    u32 id = scrGetArg(0);

    if (scrGetCommandFrame() == 0) {
        btlTalkBustUpSetDemonTexture(id, 1);
        btlTalkBustUpSetUnk2F4(1);
    }
    return btlTalkBustupTextureIsLoaded(id) != 0;
}

} /* extern "C" */
