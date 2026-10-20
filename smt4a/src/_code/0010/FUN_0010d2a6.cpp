#include "common.h"

extern "C" {

void FUN_002f73fc(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} MemberHolder;

/* Calls FUN_002f73fc on the member at 4. */
void FUN_0010d2a6(MemberHolder *object)
{
    FUN_002f73fc(object->member04);
}

} /* extern "C" */
