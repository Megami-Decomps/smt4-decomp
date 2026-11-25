#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

/* Queues changes requested by active battle roster records, clearing each pending flag. */
u32 btlReflectQueuePendingRosterFade(s32 actorId, u32 argument, u32 duration)
{
    BtlMainStateA *state = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *record = &state->roster[index];
        if ((record->render.flags & 1) && (record->render.flags & 2) && (record->render.flags & 0x10000)) {
            if (record->render.value6c == 0x4C4C4CFF) {
                reflectCreateKind2b(actorId, argument, (u32)record, record->render.value70, duration, 0);
            } else {
                reflectCreateKind2c(actorId, argument, (u32)record, 0xFF, duration, 0);
            }
            record->render.flags &= ~0x10000;
        }
    }
    return 1;
}

} /* extern "C" */
