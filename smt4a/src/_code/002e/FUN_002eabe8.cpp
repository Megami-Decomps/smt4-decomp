#include "common.h"

extern "C" {

void FUN_002f73fc(u8 *member);
s32 FUN_002f73b8(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} Holder;

/* Calls FUN_002f73fc on the member at 4 when FUN_002f73b8 reports nonzero. */
void FUN_002eabe8(Holder *object)
{
    s32 result;

    result = FUN_002f73b8();
    if (result != 0) {
        FUN_002f73fc(object->member04);
    }
}

} /* extern "C" */
