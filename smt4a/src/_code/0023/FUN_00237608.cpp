#include "common.h"

extern "C" {

typedef struct Global57f110 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *object;
} Global57f110;
extern Global57f110 g_campCec;

/* Returns whether the global at 0x57F110 holds an object. */
u8 FUN_00237608(void)
{
    return g_campCec.object != NULL;
}

} /* extern "C" */
