#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"

extern "C" {

typedef struct Context {
    /* 0x00000 */ u8 unk00000[0x1F454];
    /* 0x1F454 */ int active;
} Context;

Context *gameDataBlocksGetSaveData(void);

/* Script command: if the context is active, runs spriteStartAnimationByIndex on the banner's frame sprite. */
u32 scrEffectRunIfActive(void)
{
    MessageWindow *banner = g_messageMain.banner;

    if (gameDataBlocksGetSaveData()->active == 0) {
        return 1;
    }
    spriteStartAnimationByIndex(&banner->sprites[12], 7);
    return 1;
}

} /* extern "C" */
