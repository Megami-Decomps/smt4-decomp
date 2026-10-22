#include "common.h"

extern "C" {

void _ZN9Obj55aff4D1Ev(u8 *member);
u8 *vectorDestroyBytes(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Holder;

/* Destroys the member at 8, then the member vectorDestroyBytes hands back (8 bytes earlier). */
void FUN_002eda4a(Holder *object)
{
    u8 *member;

    member = vectorDestroyBytes(object->member08);
    _ZN9Obj55aff4D1Ev(member - 8);
}

} /* extern "C" */
