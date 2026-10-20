#include "common.h"

extern "C" {

typedef struct Global6443d0 {
    /* 0x000 */ u8 unk000[0x32C];
    /* 0x32C */ u32 unk32C;
} Global6443d0;
extern Global6443d0 DAT_006443d0;

/* Returns the word at 0x32C of the global at 0x6443D0. */
u32 FUN_001afa34(void)
{
    return DAT_006443d0.unk32C;
}

} /* extern "C" */
