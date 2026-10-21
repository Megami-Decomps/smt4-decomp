#include "common.h"

class ListRangeRenderer {
public:
    virtual void reserved00() = 0;
    virtual void reserved04() = 0;
    virtual void reserved08() = 0;
    virtual void reserved0c() = 0;
    virtual void apply(u32 argument) = 0;
};

struct ListRange {
    /* 0x00 */ u32 tag;
    /* 0x04 */ s32 low;
    /* 0x08 */ s32 high;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ u8 body[1];
};

struct ListRefreshState {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[4];
    /* 0x0008 */ s32 mode;
    /* 0x000c */ u8 unk000c[0x394];
    /* 0x03a0 */ u32 argument;
    /* 0x03a4 */ u8 transition[40];
    /* 0x03cc */ u8 unk03cc[0x770];
    /* 0x0b3c */ ListRangeRenderer *renderer;
    /* 0x0b40 */ u8 unk0b40[0x9448];
    /* 0x9f88 */ ListRange range;
};

extern "C" {
void FUN_0049339c(void *transition, s32 steps, s32 start, s32 end, u32 argument);
s32 FUN_002a482c(ListRange *);
s32 rangeGetMinimumLimit(ListRange *);
s32 FUN_0031d174(ListRange *);
u32 flaggedValueHolderGetTotal(ListRange *);
void FUN_00497d20(ListRefreshState *, s32 row, s32 selected, u32 value);
void size40Set(ListRangeRenderer *, u32 start, u32 selection);
void FUN_004986b0(ListRefreshState *);
void FUN_00497874(ListRefreshState *);
void FUN_00497a6c(ListRefreshState *);
void FUN_004957b4(ListRefreshState *);

// Refresh visible list rows and the selected renderer, then handle other dirty-state modes.
void listRefreshDirtyRows(ListRefreshState *state)
{
    if (state->flags & 0x100) {
        u32 argument = state->argument;
        FUN_0049339c(state->transition, 10, 0, 0, argument);
        bool selectedMode = false;
        if (state->mode == 4) {
            selectedMode = true;
        }
        ListRange *range = &state->range;
        s32 start = FUN_002a482c(range);
        s32 visible = rangeGetMinimumLimit(range);
        for (s32 row = 0; row < visible; ++row) {
            if (!selectedMode || FUN_0031d174(range) != row) {
                FUN_00497d20(state, row + 1, 0, start + row);
            }
        }
        if (selectedMode && range->high > 0) {
            u32 value = flaggedValueHolderGetTotal(range);
            s32 row = FUN_0031d174(range);
            FUN_00497d20(state, row + 1, 1, value);
        }
        s32 selection = FUN_0031d174(range);
        s32 first = FUN_002a482c(range);
        size40Set(state->renderer, first, selection);
        state->renderer->apply(argument);
    } else if (state->flags & 0x200) {
        FUN_004986b0(state);
    } else if (state->flags & 0x400) {
        FUN_00497874(state);
    } else if (state->flags & 0x800) {
        FUN_00497a6c(state);
    }
    if (state->flags & 0x1000) {
        FUN_004957b4(state);
    }
}
}
