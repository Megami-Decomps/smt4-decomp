/* NON_MATCHING: only the success tail differs: retail sets the 0x100000 flag through r1 with the return value moved into r0 between the load and the orr; the build uses r0 and then sets it to 1. */
#include "battle/BtlEntry.h"
#include "util/Random.h"
#include "battle/btlMain.h"
#include "gamedata/NkmBaseRecord.h"
#include "shard/W6_W6Match3_NameFormState.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 playerPadTestBit(u32);
s32 gameFlagIsSet(u32);

/* Mark the first eligible low-HP enemy for its rare emergency action. */
u32 FUN_00338584(BtlMainState *state)
{
    if (playerPadTestBit(1) || (state->battleFlags & 0x40000) ||
        gameFlagIsSet(0x416) || state->emergencyAction.gate > 1)
        return 0;
    if (state->emergencyAction.gate == 0)
        return 0;

    BtlEntry *entry = NULL;
    for (s32 i = 4; i < 54; ++i) {
        BtlEntry *candidate = &state->entries[i];
        if ((candidate->flags & 1) && !(candidate->flags & 0x40) && (candidate->flags & 0x10)) {
            entry = candidate;
            break;
        }
    }
    if (entry == NULL)
        return 0;
    NkmEnemyRecord *metadata = nkmEnemyFindById(entry->data.id);
    if (metadata->flags & 0x10)
        return 0;
    if (entry->flags & 0x100000)
        return 0;
    if (entry->flags & 0x10000000)
        return 0;
    entry->flagMask |= 0x10000000;
    if (entry->data.statusFlags & 0x80)
        return 0;
    if (!(state->editorControl.flags & 0x200000)) {
        if (entry->data.hp * 100 / entry->data.maxHp >= 20)
            return 0;
        PlayerDataIV *player = gameGetPlayerData();
        s32 chance = ((u32(player->level) + u32(metadata->level)) >> 1) + 5;
        if (chance < 0)
            chance = 0;
        else if (chance > 10)
            chance = 10;
        if ((s32)randRange(99) > chance)
            return 0;
    }
    entry->flags |= 0x100000;
    return 1;
}
}
