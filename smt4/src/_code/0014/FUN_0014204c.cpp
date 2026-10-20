#include "common.h"

extern "C" {

struct Inner0014204c;

typedef struct Wrapper0014204c {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ Inner0014204c *inner;
} Wrapper0014204c;

u8 FUN_00142054(Inner0014204c *inner, u32 *out);

/* Passes the wrapper's inner on to FUN_00142054, the function that follows it. */
u8 FUN_0014204c(Wrapper0014204c *wrapper, u32 *out)
{
    return FUN_00142054(wrapper->inner, out);
}

} /* extern "C" */
