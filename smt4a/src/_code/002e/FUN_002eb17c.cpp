#include "common.h"

extern "C" {

void FUN_002e9538(u8 *member);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0xDC];
    /* 0x0DC */ u8 memberDC[1];
} Holder;

/* Calls FUN_002e9538 on the member at 0xDC. */
void FUN_002eb17c(Holder *object)
{
    FUN_002e9538(object->memberDC);
}

} /* extern "C" */
