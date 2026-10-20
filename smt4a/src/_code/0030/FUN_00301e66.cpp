#include "common.h"

extern "C" {

void FUN_002ec728(u8 *dest, u32 arg);
void FUN_002ecb04(u8 *member);
void FUN_002f7ac4(u8 *member, u32 arg);

typedef struct Holder {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 member004[0x230];
    /* 0x234 */ u8 member234[0xB0];
    /* 0x2E4 */ u8 member2E4[1];
} Holder;

/* Runs FUN_002ecb04 on the member at 4, then FUN_002f7ac4 and FUN_002ec728 (with `arg`) on the members at 0x234 and 0x2E4. */
void FUN_00301e66(Holder *object, u32 arg)
{
    FUN_002ecb04(object->member004);
    FUN_002f7ac4(object->member234, arg);
    FUN_002ec728(object->member2E4, arg);
}

} /* extern "C" */
