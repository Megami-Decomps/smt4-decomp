#include "common.h"

extern "C" {

int FUN_0030a530(void);
int eventEffectFreeTextures(void);
extern int scrGetCommandFrame(void);
extern int eventEffectIsState2(void);

u8 FUN_002009e0(void)
{
    int result;

    if (scrGetCommandFrame() != 0) {
        result = eventEffectIsState2();
        if (result != 0) {
            eventEffectFreeTextures();
        }
        return result != 0;
    }
    FUN_0030a530();
    return 0;
}

} /* extern "C" */
