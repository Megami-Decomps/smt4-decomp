/* NON_MATCHING: player skill search uses one induction variable rather than retail's separate slot/count pair; final state stores merge differently. */
#include "result/ResultInput.h"
#include "shard/W5_W5Match2_PairedIds.h"
#include "gamedata/PlayerDataBlock.h"

extern "C" {
s32 loadSlotIsLoaded(u32 slot);
void FUN_00416d30(ResultInputWork *work);
u32 FUN_00275bc8(const void *script, const void *messages);
u32 FUN_003df4a4(u32 skill);
s32 playerStockHasFreeSlot(void);
s32 countUnlockedSlots(void);
}

namespace {
inline s32 findPlayerSkillSlot(ResultInputWork *work)
{
    PairedIdList *player = reinterpret_cast<PairedIdList *>(gameGetPlayerData());
    const s32 count = countUnlockedSlots();
    s32 slot = 0;
    for (; slot < count; ++slot) {
        const u16 skill = player->ids[slot];
        if (skill == work->preparation.skill || skill == 0) {
            break;
        }
    }
    return slot;
}
}

extern "C" u32 FUN_00416e60(ResultInputWork *work)
{
    switch (work->preparation.phase) {
    case 0:
        if (loadSlotIsLoaded(0x25) == 0) {
            return 0;
        }
        FUN_00416d30(work);
        ++work->preparation.phase;
        // Fall through once the load request has been submitted.
    case 1:
        if (work->resources.resultScript == NULL || work->resources.resultMessages == NULL) {
            return 0;
        }
        if (work->preparation.player == 0 &&
            (work->resources.levelUpScript == NULL || work->resources.demonMessages == NULL)) {
            return 0;
        }
        work->resources.resultHandle = FUN_00275bc8(work->resources.resultScript, work->resources.resultMessages);
        if (work->preparation.player != 0) {
            work->resources.messageMode = 13;
            work->resources.selectedHandle = FUN_00275bc8(work->resources.resultScript, work->resources.resultMessages);
        } else {
            work->resources.messageMode = 18;
            work->resources.selectedHandle = FUN_00275bc8(work->resources.levelUpScript, work->resources.demonMessages);
        }
        // Fall through to select the next result-screen state.
    case 2:
        if (!(work->preparation.player != 0)) {
            work->preparation.nextState = 3;
            work->preparation.state = 2;
            work->preparation.phase = 0;
        } else {
            s32 slot;
            if (FUN_003df4a4(work->preparation.skill) != 0) {
                slot = findPlayerSkillSlot(work);
            } else {
                if (playerStockHasFreeSlot() == 0) {
                    work->preparation.nextState = 4;
                    work->preparation.state = 2;
                    work->preparation.phase = 0;
                    return 0;
                }
                slot = findPlayerSkillSlot(work);
            }
            work->preparation.nextState = 3;
            work->preparation.slot = slot;
            work->preparation.state = 2;
            work->preparation.phase = 0;
        }
        break;
    }
    return 0;
}
