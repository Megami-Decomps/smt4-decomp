/* NON_MATCHING: validation result-code merging, predicate formation and register lifetimes differ. */
#include "shard/Shard004A.h"
#include "shard/FUN_00184310.h"

extern "C" {
u32 FUN_004a8750(u32 id, u32 mode, s32 first, s32 special, s32 second);
s32 FUN_002a4b28(u32 id);
u32 FUN_004d05b4();
s32 FUN_001ba3d4(u32 flag);
s32 gameStockContainsEntry(u32 id);
s32 FUN_004d0cd4();

/* Set the reason a stock selection cannot proceed, allowing the override-warning result. */
u32 FUN_004a34a0(Screen4A *screen, u32 id)
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
    u32 cost = FUN_004a8750(id, view->mode, 0, view->rank >= 100, 0);
    s32 selection = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(view->selection));
    Candidate *selected = &view->candidates[selection];
    if (view->mode == 0) {
        FUN_00184310(selected->id);
    }
    u8 reason;
    if (!FUN_002a4b28(id)) {
        reason = 6;
    } else if (FUN_004d05b4() < cost && FUN_001ba3d4(0x7c3) <= 0) {
        reason = 1;
    } else if (gameStockContainsEntry(id)) {
        reason = 2;
    } else if (view->mode == 2) {
        reason = 3;
    } else {
        if (FUN_004d0cd4() == -1) {
            screen->unkA870 = 5;
            return 0;
        }
        reason = screen->unkA870;
        if (reason == 0) {
            if (FUN_004d05b4() < cost && FUN_001ba3d4(0x7c3) > 0) {
                screen->unkA870 = 7;
                return 1;
            }
            reason = screen->unkA870;
            if (reason == 0) {
                return 1;
            }
        }
        return reason == 7;
    }
    screen->unkA870 = reason;
    return 0;
}
}
