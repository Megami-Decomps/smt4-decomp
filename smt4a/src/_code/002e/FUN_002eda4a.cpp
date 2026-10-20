#include "common.h"

extern "C" {

void FUN_002e9318(u8 *member);
u8 *FUN_002eda5a(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Holder;

/* Destroys the member at 8, then the member FUN_002eda5a hands back (8 bytes earlier). */
void FUN_002eda4a(Holder *object)
{
    u8 *member;

    member = FUN_002eda5a(object->member08);
    FUN_002e9318(member - 8);
}

} /* extern "C" */
