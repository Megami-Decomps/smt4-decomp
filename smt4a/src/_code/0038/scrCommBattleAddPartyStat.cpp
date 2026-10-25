#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

struct PartyMember {
    /* 0x00 */ u8 unk00[0x13c];
    /* 0x13c */ u16 stats[9];
};

s32 scrGetArg(u32 index);
PartyMember *FUN_003f0e20(void *state, u32 id);

/* Script command: adds the third argument to stat `index` (0..8) of the party member with the given id. */
u32 scrCommBattleAddPartyStat(void)
{
    u32 id = scrGetArg(0);
    s32 index = scrGetArg(1);
    s32 amount = scrGetArg(2);
    PartyMember *member = FUN_003f0e20(static_cast<void *>(btlGetMainState()), id);

    if (member != NULL && index >= 0 && index < 9) {
        member->stats[index] += amount;
    }
    return 1;
}

} /* extern "C" */
