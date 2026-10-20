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

extern Global00471a70 DAT_00471a70;

/* Returns the signed byte at +0x75 of the object DAT_00471a70 points to. */
int FUN_00129d38(void)
{
    return DAT_00471a70.inner->value;
}

} /* extern "C" */
