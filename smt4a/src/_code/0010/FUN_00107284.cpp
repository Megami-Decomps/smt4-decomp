#include "common.h"

extern "C" {

void onlineStringAssign(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 member10[1];
} MemberHolder;

/* Calls onlineStringAssign on the member at 0x10. */
void FUN_00107284(MemberHolder *object)
{
    onlineStringAssign(object->member10);
}

} /* extern "C" */
