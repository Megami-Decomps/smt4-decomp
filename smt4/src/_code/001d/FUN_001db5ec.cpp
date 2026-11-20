#include "common.h"

struct Callbacks1db5ec {
    u32 unk00;
    void (*callback)(void);
};

extern "C" Callbacks1db5ec g_startMenuPostHook;

/* Runs the registered callback, if any. */
extern "C" void FUN_001db5ec(void)
{
    if (g_startMenuPostHook.callback != NULL) {
        g_startMenuPostHook.callback();
    }
}
