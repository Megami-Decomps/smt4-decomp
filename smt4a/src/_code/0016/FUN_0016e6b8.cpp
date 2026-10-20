#include "common.h"

extern "C" {

typedef void (*Hook)(void);

typedef struct Global589284 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s8 pending;
} Global589284;
extern Global589284 g_callbackState;
extern Hook g_callbackFuncs[8];

/* Runs the eight registered hooks that are set, then clears `pending`; does nothing unless it is set. */
void FUN_0016e6b8(void)
{
    s32 i;

    if (g_callbackState.pending != 0) {
        i = 0;
        do {
            if (g_callbackFuncs[i] != NULL) {
                g_callbackFuncs[i]();
            }
            i = i + 1;
        } while (i < 8);
        g_callbackState.pending = 0;
    }
}

} /* extern "C" */
