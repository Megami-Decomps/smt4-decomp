/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 g_nnCecdHandle;
extern s32 g_cecdUseLocalBackend;

extern u32 FUN_0035937c(u32 arg);
extern u32 FUN_003597f4(void);

u32 FUN_003594f0(u32 arg)
{
    if (g_cecdUseLocalBackend != 0) {
        return FUN_003597f4();
    }
    if (g_nnCecdHandle != 0) {
        return FUN_0035937c(arg);
    }
    return 0xE0810BF8;
}

}
