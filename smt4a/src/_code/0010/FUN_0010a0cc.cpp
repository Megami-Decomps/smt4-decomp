#include "common.h"

extern "C" {

void FUN_002e9598(u8 *member);

typedef struct MemberHolder {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ u8 member140[1];
} MemberHolder;

/* Calls FUN_002e9598 on the member at 0x140. */
void FUN_0010a0cc(MemberHolder *object)
{
    FUN_002e9598(object->member140);
}

} /* extern "C" */
