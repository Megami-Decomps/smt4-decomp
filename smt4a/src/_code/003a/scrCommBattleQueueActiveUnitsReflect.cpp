#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

void FUN_004fd204(s32 actor, u32 flags, u32 target, u32 parameter, u32 payload, s32 enabled);
s32 scrGetArg(u32 index);

/* Script command: queues reflection action 44 for every active roster unit, with parameter 0xFF when argument 0 is set. */
u32 scrCommBattleQueueActiveUnitsReflect(void)
{
    s32 enable = scrGetArg(0);
    s32 index = 0;
    BtlMainStateA *battle = btlGetMainState();

    for (; index < 0x6D; index++) {
        BattleRosterRecordA *unit = &battle->roster[index];
        u32 flags = unit->liveFlags.unk50;
        if ((flags & 1) && (flags & 0x80) && (flags & 0x400) &&
            (!(flags & 0x10) || !(unit->liveFlags.unk10C & 2))) {
            if (enable == 0) {
                FUN_004fd204(0, 0, (u32)unit, 0, 20, 0);
            } else {
                FUN_004fd204(0, 0, (u32)unit, 0xFF, 20, 0);
            }
        }
    }
    return 1;
}

} /* extern "C" */
