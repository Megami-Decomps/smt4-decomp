/* Logs one of two events (0x5b if the context lacks both properties 10 and 2, otherwise 0x5a when the target is valid). */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "shard/FUN_002580d4.h"

extern "C" {

s32 itemGetFlagBit1(u32 target);
s32 flagWordTestBit(s32 context, u32 property);
s32 partyMemberFindById(u32 target);

void FUN_002580d4(u32 target, u32 a, u32 b, u32 c)
{
    s32 context = partyMemberFindById(target);

    if (context != 0 && flagWordTestBit(context, 10) == 0 && flagWordTestBit(context, 2) == 0) {
        FUN_002bf288(2, 0x24, 0x5b, a, b, c);
        return;
    }
    if (itemGetFlagBit1(target) != 0) {
        FUN_002bf288(2, 0x24, 0x5a, a, b, c);
    }
}

} /* extern "C" */
