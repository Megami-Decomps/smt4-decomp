#include "common.h"

struct Callbacks34b148 {
    u32 unk00;
    void (*callback)(u32 value);
};

extern "C" Callbacks34b148 DAT_00589530;

/* Calls the registered callback with `value` when it is non-zero. */
extern "C" void FUN_0041c570(void *self, u32 value)
{
    if (value != 0) {
        DAT_00589530.callback(value);
    }
}
