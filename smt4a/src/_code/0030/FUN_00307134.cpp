#include "common.h"

extern "C" {

void onlineStringAssign(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 member0C[1];
} Holder;

/* Calls onlineStringAssign on the member at 0xC. */
void FUN_00307134(Holder *object)
{
    onlineStringAssign(object->member0C);
}

} /* extern "C" */
