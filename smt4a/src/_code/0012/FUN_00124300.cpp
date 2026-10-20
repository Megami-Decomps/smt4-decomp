#include "common.h"

extern "C" {

void FUN_002ff78c(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 member54[1];
} Holder;

/* Calls FUN_002ff78c on the member at 0x54. */
void FUN_00124300(Holder *object)
{
    FUN_002ff78c(object->member54);
}

} /* extern "C" */
