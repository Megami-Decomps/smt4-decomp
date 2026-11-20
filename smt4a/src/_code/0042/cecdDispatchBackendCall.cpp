/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 g_nnCecdHandle;
extern s32 g_cecdUseLocalBackend;

extern u32 FUN_0042ffd8(u32 arg);
extern u32 FUN_0043048c(void);

u32 cecdDispatchBackendCall(u32 arg)
{
    if (g_cecdUseLocalBackend != 0) {
        return FUN_0043048c();
    }
    if (g_nnCecdHandle != 0) {
        return FUN_0042ffd8(arg);
    }
    return 0xE0810BF8;
}

}
