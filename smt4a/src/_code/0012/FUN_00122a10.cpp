/* NON_MATCHING: retail keeps success/error codes in separate stack slots and shares a different result-construction tail. */
#include "common.h"

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
void _ZN12OnlineResultC1ERKj(void* result, const u32* code);

// Report invalid requests and connection state before submitting an online request.
void FUN_00122a10(void* output, OnlineRequestOwner* owner, u32 request, u32)
{
    u32 code;
    if (request == 0) {
        code = 0x8001000a;
    } else if (owner->connection != NULL && owner->connection->state != 5) {
        code = 0x80010004;
    } else if (FUN_001038f2(owner, request, owner->context) != 0) {
        code = 0x00010001;
    } else {
        code = 0x8001000d;
    }
    _ZN12OnlineResultC1ERKj(output, &code);
}
}
