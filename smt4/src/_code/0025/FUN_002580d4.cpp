/* Logs one of two events (0x5b if the context lacks both properties 10 and 2, otherwise 0x5a when the target is valid). */
#include "common.h"

extern "C" {

void FUN_002bf288(s32 category, s32 group, s32 id, u32 a, u32 b, u32 c);
s32 FUN_0029ea68(u32 target);
s32 flagWordTestBit(s32 context, u32 property);
s32 partyMemberFindById(u32 target);

void FUN_002580d4(u32 target, u32 a, u32 b, u32 c)
{
    s32 context = partyMemberFindById(target);

    if (context != 0 && flagWordTestBit(context, 10) == 0 && flagWordTestBit(context, 2) == 0) {
        FUN_002bf288(2, 0x24, 0x5b, a, b, c);
        return;
    }
    if (FUN_0029ea68(target) != 0) {
        FUN_002bf288(2, 0x24, 0x5a, a, b, c);
    }
}

} /* extern "C" */
