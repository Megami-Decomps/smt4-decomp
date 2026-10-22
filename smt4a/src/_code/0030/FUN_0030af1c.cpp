#include "common.h"

extern "C" {

u8 *_ZN9Obj55aff4D1Ev(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Holder;

/* Destroys the member at 8 and then the member _ZN9Obj55aff4D1Ev hands back (8 bytes earlier). */
void FUN_0030af1c(Holder *object)
{
    u8 *member;

    member = _ZN9Obj55aff4D1Ev(object->member08);
    _ZN9Obj55aff4D1Ev(member - 8);
}

} /* extern "C" */
