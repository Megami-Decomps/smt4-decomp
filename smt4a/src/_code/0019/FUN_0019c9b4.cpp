/* NON_MATCHING: retail peels the first history copy and unrolls the remaining copies. */
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

extern "C" {
extern RenderChannelState g_inputResetState;
void *__aeabi_memcpy4(void *destination, const void *source, u32 bytes);

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
                __aeabi_memcpy4(&history->entries[i], &history->entries[i + 1], sizeof(history->entries[i]));
            }
            ((TextHistoryTableView *)g_inputResetState.table)->selected = 63;
        }
        history = (TextHistoryTableView *)g_inputResetState.table;
        history->entries[history->selected].active = 0;
        history->entries[history->selected].type = 0xff;
    }
}
}
