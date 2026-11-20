#include "shard/Shard0044.h"

struct MaterialCommitData {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ MaterialFlagArrays flags;
};

struct MaterialCommitOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MaterialCommitData *data;
};

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

struct CursorResetView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CursorResetState *data;
};

struct MaterialUpdateList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void **begin;
    /* 0x08 */ void **end;
};

extern "C" {
void FUN_0044d750(void *piece);
void FUN_004492b4(MaterialFlagArrays *arrays);
}

/* Moves a cursor back to its first element. */
static void resetCursorRewind(ResetCursor *cursor)
{
    cursor->current = cursor->begin;
}

/* Updates the material pieces, rewinds all cursor positions and clears the dirty flag arrays. */
extern "C" void FUN_004491fc(MaterialCommitOwner *owner, CursorResetView *view,
                            MaterialUpdateList *updates)
{
    void **end = updates->end;
    MaterialFlagArrays *flags = &owner->data->flags;
    CursorResetState *cursors = view->data;
    for (void **piece = updates->begin; piece != end; ++piece)
        FUN_0044d750(*piece);
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
    FUN_004492b4(flags);
}
