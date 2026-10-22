/* NON_MATCHING: Outlined flag-reset target FUN_00156a90 is now resolved; armcc groups cursor pointer copies into VFP loads/stores instead of retail scalar LDR/STR pairs. */
#include "common.h"

struct ResetCursor {
    /* 0x00 */ void *begin;
    /* 0x04 */ void *current;
    /* 0x08 */ void *end;
    /* 0x0C */ u32 unk0c;
    void reset() { current = begin; }
};
struct CursorResetState {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ ResetCursor cursor0;
    /* 0x1C */ ResetCursor cursor1;
    /* 0x2C */ ResetCursor cursor2;
    /* 0x3C */ ResetCursor cursor3;
    /* 0x4C */ ResetCursor cursor4;
    /* 0x5C */ ResetCursor cursor5;
    /* 0x6C */ ResetCursor cursor6;
    /* 0x7C */ ResetCursor cursor7;
    /* 0x8C */ ResetCursor cursor8;
    /* 0x9C */ ResetCursor cursor9;
    /* 0xAC */ ResetCursor cursor10;
    /* 0xBC */ ResetCursor cursor11;
    /* 0xCC */ ResetCursor cursor12;
    /* 0xDC */ ResetCursor cursor13;
    /* 0xEC */ ResetCursor cursor14;
};
struct CursorResetOwnerData {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u8 flags[1];
};
struct CursorResetOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CursorResetOwnerData *data;
};
struct CursorResetView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CursorResetState *data;
};
struct ResetObjectRange {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 *begin;
    /* 0x08 */ u32 *end;
};
extern "C" void FUN_00156b54(u32 object);
extern "C" void FUN_00156a90(void *flags);

/* Reset each object's state, all cursor positions, and the owner's flag lists. */
extern "C" void FUN_001569d8(CursorResetOwner *owner, CursorResetView *view,
                             const ResetObjectRange *objects)
{
    u8 *flags = owner->data->flags;
    CursorResetState *cursors = view->data;
    for (u32 *object = objects->begin, *end = objects->end; object != end; ++object) {
        FUN_00156b54(*object);
    }
    cursors->cursor0.reset();
    cursors->cursor1.reset();
    cursors->cursor2.reset();
    cursors->cursor3.reset();
    cursors->cursor6.reset();
    cursors->cursor7.reset();
    cursors->cursor8.reset();
    cursors->cursor9.reset();
    cursors->cursor10.reset();
    cursors->cursor4.reset();
    cursors->cursor5.reset();
    cursors->cursor11.reset();
    cursors->cursor12.reset();
    cursors->cursor13.reset();
    cursors->cursor14.reset();
    FUN_00156a90(flags);
}
