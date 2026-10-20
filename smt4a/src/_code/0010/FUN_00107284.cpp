#include "common.h"

extern "C" {

void FUN_002e9598(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 member10[1];
} MemberHolder;

/* Calls FUN_002e9598 on the member at 0x10. */
void FUN_00107284(MemberHolder *object)
{
    FUN_002e9598(object->member10);
}

} /* extern "C" */
