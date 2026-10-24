#include "common.h"

struct Callbacks1db5ec {
    u32 unk00;
    void (*callback)(void);
};

extern "C" Callbacks1db5ec DAT_005b4020;

/* Runs the registered callback, if any. */
extern "C" void FUN_002802ac(void)
{
    if (DAT_005b4020.callback != NULL) {
        DAT_005b4020.callback();
    }
}
