/* NON_MATCHING: constant store uses r0 rather than retail's r1 and reorders the pointer load. */
#include "common.h"

namespace {
struct CallbackState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 enabled;
};
}

extern "C" {
extern CallbackState *DAT_0044e110;

/* Enables the callback state. */
void FUN_002ca6e0(void)
{
    DAT_0044e110->enabled = 1;
}
}
