/* NON_MATCHING: retail peels the first history copy and unrolls the rest by two; the build retains a single-copy loop. */
#include "shard/W5_W5Match1_RecordKeys.h"

// This view includes trailing history state beyond RenderChannelTable's known end.
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

extern "C" {
extern RenderChannelState g_textRendererSettings;
void *__aeabi_memcpy4(void *destination, const void *source, u32 bytes);

// Make room for a new history record and reset its type marker.
void FUN_0014553c()
{
    if (g_textRendererSettings.enabled && g_textRendererSettings.ready) {
        TextHistoryTableView *history = (TextHistoryTableView *)g_textRendererSettings.table;
        history->cursor = 0;
        history->pending = 0;
        if (history->selected >= 64) {
            for (s32 i = 0; i < 63; ++i) {
                history = (TextHistoryTableView *)g_textRendererSettings.table;
                __aeabi_memcpy4(&history->entries[i], &history->entries[i + 1], sizeof(history->entries[i]));
            }
            ((TextHistoryTableView *)g_textRendererSettings.table)->selected = 63;
        }
        history = (TextHistoryTableView *)g_textRendererSettings.table;
        history->entries[history->selected].active = 0;
        history->entries[history->selected].type = 0xff;
    }
}
}
