#include "common.h"

extern "C" {

void FUN_002f3214(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u8 memberA4[1];
} Holder;

/* Calls FUN_002f3214 on the member at 0xA4. */
void FUN_00306d0e(Holder *object)
{
    FUN_002f3214(object->memberA4);
}

} /* extern "C" */
