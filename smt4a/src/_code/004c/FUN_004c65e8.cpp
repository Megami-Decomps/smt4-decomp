/* NON_MATCHING: masked-pair loads and boolean result use different registers. */
#include "common.h"
struct FlagPair {u32 low,high;};
struct MaskOwner {u8 unk00[16];FlagPair mask;};
extern "C" {
extern MaskOwner DAT_005713f0;void *btlGetMainState();FlagPair *FUN_003f0e20(void*,u32 id);
/* Returns status 0x105 when either masked battle-state word is present. */
u32 FUN_004c65e8(u32 id){FlagPair *flags=FUN_003f0e20(btlGetMainState(),id);return ((flags->low&DAT_005713f0.mask.low)|(flags->high&DAT_005713f0.mask.high))!=0 ? 0x105 : 0;}
}
