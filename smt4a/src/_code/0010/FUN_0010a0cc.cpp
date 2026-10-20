#include "common.h"

extern "C" {

void onlineStringAssign(u8 *member);

typedef struct MemberHolder {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ u8 member140[1];
} MemberHolder;

/* Calls onlineStringAssign on the member at 0x140. */
void FUN_0010a0cc(MemberHolder *object)
{
    onlineStringAssign(object->member140);
}

} /* extern "C" */
