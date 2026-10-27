/* NON_MATCHING: kind/context locals match retail's saved registers; the two -1 stack arguments are materialised before the context load (retail: after) and the state base lands in r3 instead of r0. (Declaring context before kind matches, but that is an order flip.) */
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
    u32 kind = alternate != 0 ? 7 : 6;
    u32 context = state->helpMessages.context;
    CreatedBattleObject* object = FUN_00200a68(0, 0, kind, context, 0, argument, -1, -1);
    object->flags |= 1;
}
}
