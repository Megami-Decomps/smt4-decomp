#include "common.h"

struct TerminalCallbackState {
    /* 0x00 */ u32 task;
    /* 0x04 */ u8 complete;
};

static void terminalSetComplete(TerminalCallbackState *state, u8 complete)
{
    state->complete = complete;
}

extern "C" TerminalCallbackState *g_tmnl;

/* Signal completion to the terminal task. */
extern "C" void terminalSignalComplete(void)
{
    terminalSetComplete(g_tmnl, true);
}
