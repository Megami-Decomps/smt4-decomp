/* NON_MATCHING: only the load form of the packed 64-bit result differs: retail reads it with ldm in the owned-demon compare and ldr/ldr elsewhere, the build uses ldr/ldr and ldrd; prologue, callee contracts, the 24-slot search loop and the 64-bit compare match. */
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/FusionAvailability.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/SaveSlotTable.h"
#include "util/BitsAndBytes.h"
#include "gamedata/PackedIdentifiers.h"

extern "C" {
s32 fusionClassifyPair(UniteWorkA *, u32, u32);
s32 entryDefIsAvailable(UniteWorkA *, u32);
s32 FUN_004db65c(UniteWorkA *, u32, u32, PackedIdentifiers *);
s32 FUN_004dc3b4(UniteWorkA *, u32, u32, PackedIdentifiers *);

// Resolve a fusion result and reject unavailable, over-level or already-owned demons.
u8 fusionCheckPairAvailability(UniteWorkA *work, u32 first, u32 second, s32 special, FusionAvailability *output)
{
    struct StockView { u8 prefix[0x1C88]; s8 slots[24]; };
    struct FusionStateView { u8 prefix[0x1B0]; u32 state; };
    u8 available = 1;
    StockView *stock = reinterpret_cast<StockView *>(gameGetSlotTable());
    if (output != NULL) {
        output->reason = FUSION_REFUSAL_NONE;
        output->resultId = 0;
    }
    PackedIdentifiers result;
    if (special != 0) {
        reinterpret_cast<FusionStateView *>(work)->state = 0;
        if (!FUN_004db65c(work, first, second, &result)) {
            available = 0;
            if (output != NULL)
                output->reason = FUSION_REFUSAL_NO_RESULT;
        }
    } else {
        if (!FUN_004dc3b4(work, first, second, &result)) {
            available = 0;
            if (output != NULL)
                output->reason = FUSION_REFUSAL_NO_RESULT;
        }
    }
    if (output != NULL)
        output->resultId = result.resultIdentifier;
    const NkmBaseRecordA *record = nkmBaseGetRecord(result.resultIdentifier);
    if (record != NULL && computeCountLimit() < record->level) {
        available = 0;
        if (output != NULL)
            output->reason = FUSION_REFUSAL_LEVEL;
    }
    s32 slot;
    for (slot = 0; slot < 24; ++slot) {
        if (stock->slots[slot] >= 0) {
            u64 owned = gameGetSlotRecord(stock->slots[slot])->id;
            if (owned == result.resultIdentifier)
                break;
        }
    }
    if (slot < 24) {
        available = 0;
        if (output != NULL)
            output->reason = FUSION_REFUSAL_OWNED;
    }
    if (output != NULL) {
        if (fusionClassifyPair(work, first, second) == 5 || !entryDefIsAvailable(work, result.resultIdentifier))
            output->reason = FUSION_REFUSAL_NO_RESULT;
        output->available = available;
    }
    return available;
}
}
