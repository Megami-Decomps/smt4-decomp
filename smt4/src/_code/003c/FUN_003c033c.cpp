/* NON_MATCHING: alternate/option saved registers and stacked argument setup order differ; compiler adds a separate zero setup. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlHelp.h"

struct BattleHelpState {
    /* 0x0000 */ u8 unk0000[0x2230];
    /* 0x2230 */ u32 resource;
};


extern "C" {

// Queue one of the two battle-help kinds and mark the request active.
void FUN_003c033c(u32 alternate, u8 option)
{
    BattleHelpState* state = reinterpret_cast<BattleHelpState *>(btlGetMainState());
    BtlHelpEntryIV* request = FUN_0022a4ac(
        0, 0, alternate != 0 ? 7 : 6, state->resource, NULL, option, -1);
    request->flags |= 1;
}
}
