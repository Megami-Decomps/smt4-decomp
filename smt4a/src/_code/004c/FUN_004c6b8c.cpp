/* NON_MATCHING: mask loads and sign test use different instruction forms. */
#include "common.h"
struct FlagPair {u32 low,high;};struct MaskOwner {u8 unk00[24];FlagPair mask;};struct BattleEntry {FlagPair flags;u8 unk008[1012];void *owner;};
extern "C" {extern MaskOwner DAT_005713f0;s32 FUN_004bd098(void*,u32);
/* Tests for a negative indexed status only in the masked battle state. */
int FUN_004c6b8c(BattleEntry *entry,u32 id){if(((entry->flags.low&DAT_005713f0.mask.low)|(entry->flags.high&DAT_005713f0.mask.high))==0)return 0;return FUN_004bd098(entry->owner,id)<0;}}
