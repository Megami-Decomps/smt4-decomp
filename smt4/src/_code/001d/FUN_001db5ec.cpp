#include "common.h"

struct Callbacks1db5ec {
    u32 unk00;
    void (*callback)(void);
};

extern "C" Callbacks1db5ec DAT_00465108;

/* Runs the registered callback, if any. */
extern "C" void FUN_001db5ec(void)
{
    if (DAT_00465108.callback != NULL) {
        DAT_00465108.callback();
    }
}
