#include "common.h"

extern "C" {

void FUN_002f9f4e(u8 *member);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} MemberHolder;

/* Calls FUN_002f9f4e on the member at 8. */
void FUN_00111690(MemberHolder *object)
{
    FUN_002f9f4e(object->member08);
}

} /* extern "C" */
