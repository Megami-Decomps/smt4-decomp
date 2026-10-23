#include "gfx/TransformHistory.h"
extern "C" {
extern void (*FUN_001ed7bc)(TransformHistoryWork *work);
extern void (*FUN_001f3dbc)(TransformHistoryWork *work);
extern void (*FUN_001e71bc)(TransformHistoryWork *work);

// Prepare six recent and following block addresses, then dispatch the block transform.
u32 transformPrepareBlockHistory(TransformHistory *history, const u16 *input)
{
    TransformHistoryWork *work = history->work;
    for (s32 index = 0; index < 6; ++index) {
        s32 slot = history->cursor - index;
        if (slot < 0)
            slot += history->capacity;
        work->recent[index] = history->entries[slot];
        work->next[index] = history->entries[slot] + history->blockSize * work->stride;
    }
    ++history->cursor;
    if (history->cursor == history->capacity)
        history->cursor = 0;
    history->sign = (*input & 0x8000) >> 15;
    work->input = input;
    if (history->blockSize == 256) {
        if (history->enabled != 1 || history->mode != 0)
            return work->recent[0];
        FUN_001ed7bc(work);
    }
    if (history->blockSize == 512) {
        if (history->enabled != 1 || history->mode != 0)
            return work->recent[0];
        FUN_001f3dbc(work);
    }
    if (history->blockSize == 1024 && history->enabled == 1 && history->mode == 0)
        FUN_001e71bc(work);
    return work->recent[0];
}
}
