#include "battle/BtlMainAccess.h"
#include "common.h"

namespace {
struct BattleState { u8 padding[0x2248]; u32 message; };
}

extern "C" {
u32 FUN_0024b96c(void);
u32 messageAuxDispatch(u32 message, u32 argument);

/* Dispatches the current battle message with its current argument. */
u32 messageAuxDispatchBtlMessage(void)
{
    u32 message = reinterpret_cast<BattleState *>(btlGetMainState())->message;
    return messageAuxDispatch(message, FUN_0024b96c());
}
}
