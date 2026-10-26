/* NON_MATCHING: the entry shift is a struct assignment, so armcc now peels the first copy and unrolls the rest like retail; it still folds the second copy's address into the first (retail recomputes it from the incremented index). */
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

extern "C" {
extern RenderChannelState g_inputResetState;

void FUN_0019c9b4()
{
    // The history's pending word is beyond RenderChannelTable's known end.
    struct TextHistoryTableView {
        struct Entry {
            u8 active;
            u8 unk01[2];
            u8 type;
            u8 unk04[0x134];
        } entries[64];
        s16 selected;
        u16 cursor;
        u8 unk4e04[0x28];
        u32 pending;
    };
    typedef char TextHistoryLayoutCheck[sizeof(TextHistoryTableView::Entry) == 0x138 &&
        offsetof(TextHistoryTableView, pending) == 0x4e2c ? 1 : -1];
    if (g_inputResetState.enabled && g_inputResetState.ready) {
        TextHistoryTableView *history = (TextHistoryTableView *)g_inputResetState.table;
        history->cursor = 0;
        history->pending = 0;
        if (history->selected >= 64) {
            for (s32 i = 0; i < 63; ++i) {
                history = (TextHistoryTableView *)g_inputResetState.table;
                history->entries[i] = history->entries[i + 1];
            }
            ((TextHistoryTableView *)g_inputResetState.table)->selected = 63;
        }
        history = (TextHistoryTableView *)g_inputResetState.table;
        history->entries[history->selected].active = 0;
        history->entries[history->selected].type = 0xff;
    }
}
}
