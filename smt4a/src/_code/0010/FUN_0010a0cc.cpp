#include "common.h"

extern "C" {

void _ZN9Obj55aff4aSERKS_(u8 *member);

typedef struct MemberHolder {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ u8 member140[1];
} MemberHolder;

/* Calls _ZN9Obj55aff4aSERKS_ on the member at 0x140. */
void FUN_0010a0cc(MemberHolder *object)
{
    _ZN9Obj55aff4aSERKS_(object->member140);
}

} /* extern "C" */
