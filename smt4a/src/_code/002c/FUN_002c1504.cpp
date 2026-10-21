#include "common.h"

extern "C" {

int FUN_002c2138(void);
int scrGetCommandFrame(void);
int eventEffectIsLoaded(void);
int FUN_0036fad8(int arg);
int FUN_0039b8ac(void);

/* Two-way availability check: succeeds (1) after FUN_0039b8ac when FUN_002c2138 passes, or when eventEffectIsLoaded passes. */
u32 FUN_002c1504(void)
{
    if (scrGetCommandFrame() != 0) {
        if (FUN_002c2138() == 0) {
            return 0;
        }
        FUN_0039b8ac();
        return 1;
    }
    if (eventEffectIsLoaded() != 0) {
        return 1;
    }
    FUN_0036fad8(0);
    return 0;
}

} /* extern "C" */
