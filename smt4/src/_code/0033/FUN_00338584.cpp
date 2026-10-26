/* NON_MATCHING: loop exit sharing, merged flag tests, HP division argument scheduling and chance clamp differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/DevilRecord.h"
#include "shard/PadState.h"
#include "shard/W6_W6Match3_NameFormState.h"

extern "C" {
s32 playerPadTestBit(u32);
s32 gameFlagIsSet(u32);
PadState *gameGetPlayerData();
s32 randRange(u32);

/* Mark the first eligible low-HP enemy for its rare emergency action. */
u32 FUN_00338584(BtlMainState *state)
{
    if (playerPadTestBit(1) || (state->battleFlags & 0x40000) ||
        gameFlagIsSet(0x416) || state->emergencyAction.gate > 1)
        return 0;
    if (state->emergencyAction.gate == 0)
        return 0;

    for (s32 i = 4; i < 54; ++i) {
        BtlEntry *entry = &state->entries[i];
        if ((entry->flags & 1) && !(entry->flags & 0x40) && (entry->flags & 0x10)) {
            if (entry == NULL)
                return 0;
            DevilRecord *metadata = reinterpret_cast<DevilRecord *>(dataTable00FindById(entry->id));
            if (metadata->links.linkFlags & 0x10)
                return 0;
            if ((entry->flags & 0x100000) || (entry->flags & 0x10000000))
                return 0;
            entry->flags |= 0x10000000;
            if (entry->groupMask & 0x80)
                return 0;
            if (!(state->editorControl.flags & 0x200000)) {
                if (entry->hp * 100 / entry->maxHp >= 20)
                    return 0;
                PadState *player = gameGetPlayerData();
                s32 chance = ((u32(player->unk76) + u32(metadata->header.race)) >> 1) + 5;
                if (chance > 10)
                    chance = 10;
                if (randRange(99) > chance)
                    return 0;
            }
            entry->flags |= 0x100000;
            return 1;
        }
    }
    return 0;
}
}
