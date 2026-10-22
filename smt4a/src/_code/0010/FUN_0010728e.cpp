#include "common.h"

extern "C" {

void _ZN9Obj55aff4aSERKS_(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} MemberHolder;

/* Calls _ZN9Obj55aff4aSERKS_ on the member at 4. */
void FUN_0010728e(MemberHolder *object)
{
    _ZN9Obj55aff4aSERKS_(object->member04);
}

} /* extern "C" */
