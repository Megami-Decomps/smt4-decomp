/* NON_MATCHING: retail predicates the report (ldreq; moveq r1, pc; bleq) and passes the exact pc; __current_pc() builds the same mov r1, pc but armcc branches around it. */
#include "common.h"
struct ResourceHolder { u32 unk00; void *resource; };
extern "C" {
void FUN_0016e800(s32 result, u32 location);
/* Reports a missing resource before returning the held pointer. */
void *FUN_00500924(ResourceHolder *holder)
{
    if (holder->resource == NULL)
        FUN_0016e800((s32)0xE0A046DA, __current_pc());
    return holder->resource;
}
}
