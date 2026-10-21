/* NON_MATCHING: alternate/option saved registers and stacked argument setup order differ; compiler adds a separate zero setup. */
#include "common.h"

struct BattleHelpState {
    /* 0x0000 */ u8 unk0000[0x2230];
    /* 0x2230 */ u32 resource;
};

struct BattleHelpRequest {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 flags;
};

extern "C" {
BattleHelpState* btlGetMainState(void);
BattleHelpRequest* FUN_0022a4ac(u16 first, u16 second, u32 kind, u32 resource,
                              const void* data, u8 option, s32 last);

// Queue one of the two battle-help kinds and mark the request active.
void FUN_003c033c(u32 alternate, u8 option)
{
    BattleHelpState* state = btlGetMainState();
    BattleHelpRequest* request = FUN_0022a4ac(
        0, 0, alternate != 0 ? 7 : 6, state->resource, NULL, option, -1);
    request->flags |= 1;
}
}
