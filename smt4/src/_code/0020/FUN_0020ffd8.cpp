#include "common.h"

extern "C" {

struct Inner0020ffe0;

typedef struct Wrapper0020ffd8 {
    u8 unk00[8];
    struct Inner0020ffe0 *inner;   /* 0x08 */
} Wrapper0020ffd8;

u32 FUN_0020ffe0(struct Inner0020ffe0 *inner);

/* Passes the wrapper's inner object on to FUN_0020ffe0, the function that follows it. */
u32 FUN_0020ffd8(Wrapper0020ffd8 *wrapper)
{
    return FUN_0020ffe0(wrapper->inner);
}

} /* extern "C" */
