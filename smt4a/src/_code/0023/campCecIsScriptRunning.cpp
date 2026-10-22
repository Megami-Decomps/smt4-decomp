#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef g_campCec;

s32 scrRunOpcodesStub(u32 handle);

/* Returns 1 when the held object exists and scrRunOpcodesStub does not report 2 for its handle. */
u8 campCecIsScriptRunning(void)
{
    s32 state;

    if (g_campCec.instance != NULL) {
        state = scrRunOpcodesStub(g_campCec.instance->scriptProcess);
        if (state == 2) {
            return 0;
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
