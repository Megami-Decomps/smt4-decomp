#include "common.h"

struct TerminalCallbackState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 complete;
};
extern "C" TerminalCallbackState *g_tmnl;

/* Notify the terminal that its operation has completed. */
extern "C" TerminalCallbackState *tmnlOnComplete()
{
    g_tmnl->complete = 1;
    return g_tmnl;
}
