#include "common.h"

extern "C" {

void FUN_00113598(u32 a, u8 *member, s32 b);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x2E4];
    /* 0x2E4 */ u8 member2E4[1];
} Holder;

/* Calls FUN_00113598 with the member at 0x2E4 of `object`. */
void FUN_00123e98(u32 a, Holder *object, s32 b)
{
    FUN_00113598(a, object->member2E4, b);
}

} /* extern "C" */
