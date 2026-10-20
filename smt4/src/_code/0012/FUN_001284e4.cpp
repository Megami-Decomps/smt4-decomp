#include "common.h"

extern "C" {

typedef void (*Callback)(void);

extern struct {
    u8 unk00[2];
    s8 unk02;
} g_callbackState;
extern Callback g_callbackFuncs[8];

/* Runs the eight registered callbacks once, then clears the pending flag. */
void FUN_001284e4(void)
{
    s32 i;

    if (g_callbackState.unk02 != 0) {
        i = 0;
        do {
            if (g_callbackFuncs[i] != NULL) {
                g_callbackFuncs[i]();
            }
            i++;
        } while (i < 8);
        g_callbackState.unk02 = 0;
    }
}

} /* extern "C" */
