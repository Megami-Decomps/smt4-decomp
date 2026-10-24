#include "common.h"

struct Callbacks34b148 {
    u32 unk00;
    void (*callback)(u32 value);
};

extern "C" Callbacks34b148 DAT_0044e990;

/* Calls the registered callback with `value` when it is non-zero. */
extern "C" void FUN_0034b148(void *self, u32 value)
{
    if (value != 0) {
        DAT_0044e990.callback(value);
    }
}
