#include "common.h"

struct LocalTerminalCallbackState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 complete;
};
extern "C" LocalTerminalCallbackState *g_localTmnl;

/* Notify the local terminal that its operation has completed. */
extern "C" LocalTerminalCallbackState *localTmnlOnComplete()
{
    g_localTmnl->complete = 1;
    return g_localTmnl;
}
