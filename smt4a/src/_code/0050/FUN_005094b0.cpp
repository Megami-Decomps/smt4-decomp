#include "common.h"

struct Holder {
    /* 0x00 */ void *target;
    /* 0x04 */ u8 unk04[0x4c];
    /* 0x50 */ u8 value;
};

/* Value byte, or 1 when nothing is held. */
extern "C" u32 FUN_005094b0(const Holder *holder)
{
    if (holder->target == NULL) {
        return 1;
    }
    return holder->value;
}
