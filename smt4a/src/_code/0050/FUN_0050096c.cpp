/* NON_MATCHING: retail predicates the report (ldreq; moveq r1, pc; bleq) and passes the exact pc; __current_pc() builds the same mov r1, pc but armcc branches around it. */
#include "common.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
struct ResourceHolder { u32 unk00; void *resource; };
extern "C" {
/* Reports a missing resource before returning the held pointer. */
void *FUN_0050096c(ResourceHolder *holder)
{
    if (holder->resource == NULL)
        FUN_0016e800((s32)0xE0A046DA, __current_pc());
    return holder->resource;
}
}
