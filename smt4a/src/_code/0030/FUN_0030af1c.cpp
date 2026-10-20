#include "common.h"

extern "C" {

u8 *onlineStringDestroy(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Holder;

/* Destroys the member at 8 and then the member onlineStringDestroy hands back (8 bytes earlier). */
void FUN_0030af1c(Holder *object)
{
    u8 *member;

    member = onlineStringDestroy(object->member08);
    onlineStringDestroy(member - 8);
}

} /* extern "C" */
