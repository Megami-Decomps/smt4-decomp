#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x7538];
    /* 0x7538 */ u32 value;
} Holder;

typedef struct HolderGlobal {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Holder *holder;
} HolderGlobal;

extern HolderGlobal DAT_00588c40;

/* Returns the holder's value, or 0 when there is no holder. */
u32 FUN_0031e6d4(void)
{
    return DAT_00588c40.holder != NULL ? DAT_00588c40.holder->value : 0;
}

} /* extern "C" */
