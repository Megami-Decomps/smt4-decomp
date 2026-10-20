#include "common.h"

extern "C" {

typedef struct Detail {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s8 value;
} Detail;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ Detail *detail;
} Holder;

s32 FUN_001329d4(Holder *holder)
{
    return holder->detail->value;
}

} /* extern "C" */
