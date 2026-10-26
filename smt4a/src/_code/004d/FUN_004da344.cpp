/* NON_MATCHING: packed result ID is cached instead of retail's repeated cross-word extraction; branch layout differs. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"
#include "util/BitsAndBytes.h"

struct FusionAvailability {
    u8 available;
    u8 unk01[3];
    u32 reason;
    u16 resultId;
};
extern "C" {
s32 FUN_004da980(UniteWork *, u32, u32);
s32 entryDefIsAvailable(UniteWork *, u32);
s32 FUN_004db65c(UniteWork *, u32, u32, u64 *);
s32 FUN_004dc3b4(UniteWork *, u32, u32, u64 *);

// Resolve a fusion result and reject unavailable, over-level or already-owned demons.
u8 FUN_004da344(UniteWork *work, u32 first, u32 second, s32 special, FusionAvailability *output)
{
    struct StockView { u8 prefix[0x1C88]; s8 slots[24]; };
    struct LevelView { u8 prefix[6]; u16 level; };
    struct FusionStateView { u8 prefix[0x1B0]; u32 state; };
    u8 available = 1;
    StockView *stock = reinterpret_cast<StockView *>(gameGetSlotTable());
    if (output != NULL) {
        output->reason = 0;
        output->resultId = 0;
    }
    u64 result;
    s32 resolved;
    if (special != 0) {
        reinterpret_cast<FusionStateView *>(work)->state = 0;
        resolved = FUN_004db65c(work, first, second, &result);
    } else {
        resolved = FUN_004dc3b4(work, first, second, &result);
    }
    if (!resolved) {
        available = 0;
        if (output != NULL)
            output->reason = 1;
    }
    u32 resultId = (result >> 34) & 0x7FFF;
    if (output != NULL)
        output->resultId = resultId;
    const LevelView *record = reinterpret_cast<LevelView *>(FUN_00184310(resultId));
    if (record != NULL && computeCountLimit() < record->level) {
        available = 0;
        if (output != NULL)
            output->reason = 2;
    }
    for (s32 i = 0; i < 24; ++i) {
        if (stock->slots[i] >= 0 && gameGetSlotRecord(stock->slots[i])->entryId == resultId) {
            available = 0;
            if (output != NULL)
                output->reason = 3;
            break;
        }
    }
    if (output != NULL) {
        if (FUN_004da980(work, first, second) == 5 || !entryDefIsAvailable(work, resultId))
            output->reason = 1;
        output->available = available;
    }
    return available;
}
}
