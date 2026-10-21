/* NON_MATCHING: retail array destruction or constructor lifetime code generation differs. */
#include "common.h"

struct RelativeResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 offset;
};
extern "C" {
void FUN_002c3364(void **resource);
/* Resolves and releases the optional relative resource pointer. */
void FUN_0037003c(RelativeResource *owner)
{
    void *resource = owner->offset ? (u8 *)&owner->offset + owner->offset : NULL;
    if (resource)
        FUN_002c3364(&resource);
}
}
