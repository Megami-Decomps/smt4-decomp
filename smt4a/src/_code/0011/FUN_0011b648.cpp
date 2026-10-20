#include "common.h"

extern "C" {

void FUN_00118030(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 member18[1];
} MemberHolder;

/* Calls FUN_00118030 on the member at 0x18. */
void FUN_0011b648(MemberHolder *object)
{
    FUN_00118030(object->member18);
}

} /* extern "C" */
