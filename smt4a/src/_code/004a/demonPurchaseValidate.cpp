/* NON_MATCHING: armcc keeps the first failure's store (6) predicated and shares the last (5), where retail shares the
   first four and predicates the fifth; the mode test reads into r2 instead of r1. */
#include "shard/Shard004A.h"
#include "gamedata/NkmBaseRecordA.h"
#include "code/Code002a_Smt4a.h"

extern "C" {
u32 compendiumComputeSummonCost(u32 id, u32 mode, s32 first, s32 special, s32 second);
u32 FUN_004d05b4();
s32 flagValueRead(u32 flag);
s32 gameStockContainsEntry(u32 id);
s32 partyFindFirstUnusedEntry();

/* Set the reason a stock selection cannot proceed, allowing the override-warning result. */
u32 demonPurchaseValidate(Screen4A *screen, u32 id)
{
    struct Candidate { u16 id; u8 unk02[0x1e]; };
    // Naming fields in the shared byte span beginning at 0x861 would raise its alignment.
    struct ValidationView {
        u8 prefix[0x20];
        u8 selection[0x74];
        s8 rank;
        u8 unk095[0x7cc];
        u8 mode;
        u8 unk862[6];
        Candidate candidates[1];
    };
    typedef char ValidationViewLayout[offsetof(ValidationView, mode) == 0x861 &&
        offsetof(ValidationView, candidates) == 0x868 ? 1 : -1];
    ValidationView *view = reinterpret_cast<ValidationView *>(screen);
    u32 cost = compendiumComputeSummonCost(id, view->mode, 0, view->rank >= 100, 0);
    s32 selection = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(view->selection));
    Candidate *selected = &view->candidates[selection];
    if (view->mode == 0) {
        nkmBaseGetRecord(selected->id);
    }
    if (!compendiumEntryIsRegistered(id)) {
        screen->unkA870 = 6;
    } else if (FUN_004d05b4() < cost && flagValueRead(0x7c3) <= 0) {
        screen->unkA870 = 1;
    } else if (gameStockContainsEntry(id)) {
        screen->unkA870 = 2;
    } else if (view->mode == 2) {
        screen->unkA870 = 3;
    } else if (partyFindFirstUnusedEntry() == -1) {
        screen->unkA870 = 5;
    } else {
        if (screen->unkA870 == 0 && FUN_004d05b4() < cost && flagValueRead(0x7c3) > 0) {
            screen->unkA870 = 7;
        }
        if (screen->unkA870 == 0 || screen->unkA870 == 7) {
            return 1;
        }
    }
    return 0;
}
}
