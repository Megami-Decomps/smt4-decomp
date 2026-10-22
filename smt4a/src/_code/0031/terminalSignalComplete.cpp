/* NON_MATCHING: flag store allocates the pointer/value registers in reverse order. */
#include "common.h"

struct TerminalCallbackState {
    /* 0x00 */ u32 task;
    /* 0x04 */ u8 complete;
};

extern "C" TerminalCallbackState *g_tmnl;

/* Signal completion to the terminal task. */
extern "C" void terminalSignalComplete(void)
{
    g_tmnl->complete = true;
}
