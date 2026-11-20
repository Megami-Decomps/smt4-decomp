#include "common.h"

struct ResetCursor {
    /* 0x00 */ void *begin;
    /* 0x04 */ void *current;
    /* 0x08 */ void *end;
    /* 0x0C */ u32 unk0c;
};
struct CursorResetState {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ ResetCursor cursors[15];
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

/* Moves a cursor back to its first element. */
static void resetCursorRewind(ResetCursor *cursor)
{
    cursor->current = cursor->begin;
}

/* Resets each object's state, all cursor positions and the owner's flag lists. */
extern "C" void FUN_001569d8(CursorResetOwner *owner, CursorResetView *view,
                             const ResetObjectRange *objects)
{
    u8 *flags = owner->data->flags;
    CursorResetState *cursors = view->data;
    for (u32 *object = objects->begin, *end = objects->end; object != end; ++object) {
        FUN_00156b54(*object);
    }
    resetCursorRewind(&cursors->cursors[0]);
    resetCursorRewind(&cursors->cursors[1]);
    resetCursorRewind(&cursors->cursors[2]);
    resetCursorRewind(&cursors->cursors[3]);
    resetCursorRewind(&cursors->cursors[6]);
    resetCursorRewind(&cursors->cursors[7]);
    resetCursorRewind(&cursors->cursors[8]);
    resetCursorRewind(&cursors->cursors[9]);
    resetCursorRewind(&cursors->cursors[10]);
    resetCursorRewind(&cursors->cursors[4]);
    resetCursorRewind(&cursors->cursors[5]);
    resetCursorRewind(&cursors->cursors[11]);
    resetCursorRewind(&cursors->cursors[12]);
    resetCursorRewind(&cursors->cursors[13]);
    resetCursorRewind(&cursors->cursors[14]);
    FUN_00156a90(flags);
}
