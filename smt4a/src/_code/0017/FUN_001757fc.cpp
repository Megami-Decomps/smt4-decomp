#include "common.h"

extern "C" {

void FUN_00188b60(u8 *member);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ u8 member1C4[1];
} Holder;

/* Calls FUN_00188b60 on the member at 0x1C4. */
void FUN_001757fc(Holder *object)
{
    FUN_00188b60(object->member1C4);
}

} /* extern "C" */
