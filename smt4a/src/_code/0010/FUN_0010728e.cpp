#include "common.h"

extern "C" {

void onlineStringAssign(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} MemberHolder;

/* Calls onlineStringAssign on the member at 4. */
void FUN_0010728e(MemberHolder *object)
{
    onlineStringAssign(object->member04);
}

} /* extern "C" */
