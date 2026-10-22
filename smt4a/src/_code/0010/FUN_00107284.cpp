#include "common.h"

extern "C" {

void _ZN9Obj55aff4aSERKS_(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 member10[1];
} MemberHolder;

/* Calls _ZN9Obj55aff4aSERKS_ on the member at 0x10. */
void FUN_00107284(MemberHolder *object)
{
    _ZN9Obj55aff4aSERKS_(object->member10);
}

} /* extern "C" */
