#include "common.h"

extern "C" {

void FUN_002f73e4(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} MemberHolder;

/* Calls FUN_002f73e4 on the member at 4. */
void FUN_0010d29c(MemberHolder *object)
{
    FUN_002f73e4(object->member04);
}

} /* extern "C" */
