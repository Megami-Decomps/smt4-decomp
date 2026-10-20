#include "common.h"

extern "C" {

typedef struct Inner00129d38 {
    u8 unk00[0x75];
    s8 value;                      /* 0x75 */
} Inner00129d38;

typedef struct Global00471a70 {
    u8 unk00[0x1c];
    Inner00129d38 *inner;          /* 0x1C */
} Global00471a70;

extern Global00471a70 g_nngxState;

/* Returns the signed byte at +0x75 of the object g_nngxState points to. */
int FUN_00129d38(void)
{
    return g_nngxState.inner->value;
}

} /* extern "C" */
