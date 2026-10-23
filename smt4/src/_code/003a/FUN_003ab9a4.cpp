/* NON_MATCHING: error-store merging and confirmation result branch layout differ. */
#include "common.h"
#include <stddef.h>

extern "C" {
void messageMainSetTargetFlags(s32 flags);
void FUN_0029c43c(s32 amount, s32 notify);
s32 scrRunOpcodesStub(u32 script);
s32 FUN_00212088(void);
u32 gameSlotTableGetHeader(void);
s32 flaggedValueHolderGetTotal(const void *cursor);
s32 FUN_00262cb0(u16 id);
s32 statusGetAvailableChoiceCount(void);
s32 messageMainGetChoiceResult(void);

// Validate a confirmed summon against cost, ownership, and available party capacity.
void FUN_003ab9a4(void *context)
{
    struct SummonEntry {
        u32 unk00;
        u16 id;
        u8 unk06[6];
        u32 cost;
        u8 unk10[0x10];
    };
    struct SummonConfirmationView {
        u8 unk00[0x14];
        s32 state;
        s32 timer;
        u8 unk1c[4];
        u8 cursor[0x580];
        u32 script; // 0x5a0
        u32 unk5a4;
        union {
            u8 unk5a8[0xa008];
            SummonEntry entries[1]; // 0x5a8
        };
        u8 error; // 0xa5b0
    };
    typedef char LayoutCheck[sizeof(SummonEntry) == 0x20 &&
        offsetof(SummonConfirmationView, script) == 0x5a0 &&
        offsetof(SummonConfirmationView, error) == 0xa5b0 ? 1 : -1];
    SummonConfirmationView *work = static_cast<SummonConfirmationView *>(context);
    if (scrRunOpcodesStub(work->script) != 2)
        return;
    if (messageMainGetChoiceResult() != 0) {
        messageMainSetTargetFlags(0);
        work->state = 3;
        work->timer = 0;
        return;
    }
    work->error = 0;
    u32 cost = work->entries[flaggedValueHolderGetTotal(work->cursor)].cost;
    if (gameSlotTableGetHeader() < cost) {
        work->error = 1;
    } else {
        SummonEntry *entries = work->entries;
        if (FUN_00262cb0(entries[flaggedValueHolderGetTotal(work->cursor)].id)) {
            work->error = 2;
        } else {
            s32 occupied = FUN_00212088();
            s32 capacity = statusGetAvailableChoiceCount();
            if (occupied >= capacity)
                work->error = 5;
        }
    }
    if (work->error == 0) {
        FUN_0029c43c(-static_cast<s32>(work->entries[flaggedValueHolderGetTotal(work->cursor)].cost), 0);
        work->state = 6;
        work->timer = 0;
        return;
    }
    if (work->error == 5) {
        messageMainSetTargetFlags(0);
        work->state = 9;
        work->timer = 0;
        return;
    }
    messageMainSetTargetFlags(0);
    work->state = 8;
    work->timer = 0;
}
}
