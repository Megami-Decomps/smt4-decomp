#include "common.h"

extern "C" {

void _ZN9Obj55aff4aSERKS_(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 member0C[1];
} Holder;

/* Calls _ZN9Obj55aff4aSERKS_ on the member at 0xC. */
void FUN_00307134(Holder *object)
{
    _ZN9Obj55aff4aSERKS_(object->member0C);
}

} /* extern "C" */
