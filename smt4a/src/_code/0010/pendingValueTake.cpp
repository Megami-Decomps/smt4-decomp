#include "common.h"

extern "C" {

typedef struct PendingHolder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 pending;
} PendingHolder;

/* Returns `pending` and clears it. */
u32 pendingValueTake(PendingHolder *holder)
{
    u32 value = holder->pending;
    holder->pending = 0;
    return value;
}

} /* extern "C" */
