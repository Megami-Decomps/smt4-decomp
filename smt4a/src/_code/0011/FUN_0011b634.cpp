#include "common.h"

extern "C" {

void FUN_00117eec(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 member18[1];
} MemberHolder;

/* Calls FUN_00117eec on the member at 0x18. */
void FUN_0011b634(MemberHolder *object)
{
    FUN_00117eec(object->member18);
}

} /* extern "C" */
