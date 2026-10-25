#include "battle/BtlMainAccess.h"
#include "common.h"

namespace {
struct BattleMessages {
    /* 0x0000 */ u8 unk0000[0x2234];
    /* 0x2234 */ u32 message;
};
}

extern "C" {
u32 scrCommMessageDispatchWithTransition(u32 message, s32 mode);

/* Dispatches the current battle message using mode 5. */
u32 btlMessageDispatchCurrent(void)
{
    return scrCommMessageDispatchWithTransition(reinterpret_cast<BattleMessages *>(btlGetMainState())->message, 5);
}
}
