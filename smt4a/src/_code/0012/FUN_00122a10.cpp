/* Built -O3 -Ospace like the rest of the Thumb online library (FUN_00124350, isLeapYear, FUN_00126d1c, FUN_0012736c,
 * FUN_00127570): retail derives the error codes from one pool word and shares the result tails. */
#include "common.h"
#include "classes/OnlineResult.h"

struct OnlineConnection {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 state;
};

struct OnlineRequestOwner {
    /* 0x000 */ u8 unk000[0x78];
    /* 0x078 */ u32 context;
    /* 0x07C */ u8 unk07c[0xa0];
    /* 0x11C */ OnlineConnection* connection;
};

extern "C" {
s32 FUN_001038f2(OnlineRequestOwner* owner, u32 request, u32 context);

// Report invalid requests and connection state before submitting an online request.
OnlineResult FUN_00122a10(OnlineRequestOwner* owner, u32 request, u32)
{
    if (request == 0)
        return OnlineResult(0x8001000a);
    if (owner->connection != NULL && owner->connection->state != 5)
        return OnlineResult(0x80010004);
    if (FUN_001038f2(owner, request, owner->context) == 0)
        return OnlineResult(0x8001000d);
    return OnlineResult(0x00010001);
}
}
