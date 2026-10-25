/* NON_MATCHING: compiler unrolls the eight-entry removal loop and uses different inner-loop termination/address scheduling. */
#include "shard/X14_StatusDown.h"

/* Remove the current selection from the recent list and close adjacent selection gaps. */
extern "C" void FUN_0023092c(void)
{
    /* A halfword view avoids changing the odd-aligned padding union in StatusDown. */
    struct SelectionHistoryView {
        u8 unk000[0x5BC];
        u16 selections[8];
        s16 recent[8];
    };
    SelectionHistoryView *history = reinterpret_cast<SelectionHistoryView *>(g_statusDown);
    for (s32 index = 0; index < 8; ++index) {
        if (history->recent[index] && history->recent[index] == history->selections[0]) {
            history->recent[index] = 0;
        }
    }
    history->selections[0] = 0;
    for (s32 first = 0; first < 7; ++first) {
        for (s32 offset = 0; offset < 7 - first; ++offset) {
            u16 *selection = &history->selections[first + offset];
            if (selection[0] == 0 && selection[1] != 0) {
                selection[0] = selection[1];
                selection[1] = 0;
            }
        }
    }
}
