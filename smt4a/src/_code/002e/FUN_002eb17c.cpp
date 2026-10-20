#include "common.h"

extern "C" {

void onlineSockAddrCopy(u8 *member);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0xDC];
    /* 0x0DC */ u8 memberDC[1];
} Holder;

/* Calls onlineSockAddrCopy on the member at 0xDC. */
void FUN_002eb17c(Holder *object)
{
    onlineSockAddrCopy(object->memberDC);
}

} /* extern "C" */
