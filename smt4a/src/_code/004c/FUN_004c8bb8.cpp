/* NON_MATCHING: selector/argument saved-register roles and outgoing zero/-1 argument scheduling differ; compiled code emits one extra zero materialization. */
#include "battle/BtlMainAccess.h"
#include "common.h"

struct CreatedBattleObject {
    u8 unk00[6]; // 0x00
    u16 flags;    // 0x06
};

extern "C" {
CreatedBattleObject* FUN_00200a68(u32 first, u32 second, u32 kind, u32 context,
                                 u32 flags, u32 argument, s32 firstIndex, s32 secondIndex);

// Creates a kind-six or kind-seven battle object and marks its low flag.
void FUN_004c8bb8(s32 alternate, u32 argument)
{
    BtlMainStateA* state = btlGetMainState();
    CreatedBattleObject* object = FUN_00200a68(0, 0, alternate != 0 ? 7 : 6,
                                             state->helpMessages.context, 0, argument, -1, -1);
    object->flags |= 1;
}
}
