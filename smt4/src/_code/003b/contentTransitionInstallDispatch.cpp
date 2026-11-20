#include "shard/W6_W6Match6_ContentTransition.h"

/* One state handler of the content transition: its callback and the state it serves. */
struct ContentDispatchEntry {
    void (*callback)(ContentTransition *);
    u32 state;
};

/* The transition's default handlers, one named entry per state. */
struct ContentDispatchTable {
    ContentDispatchEntry state0;
    ContentDispatchEntry state1;
    ContentDispatchEntry state2;
    ContentDispatchEntry state3;
    ContentDispatchEntry state4;
    ContentDispatchEntry state5;
    ContentDispatchEntry state6;
    ContentDispatchEntry state7;
    ContentDispatchEntry state8;
    ContentDispatchEntry state9;
    ContentDispatchEntry state10;
    ContentDispatchEntry state11;
    ContentDispatchEntry state12;
    ContentDispatchEntry state13;
    ContentDispatchEntry state14;
    ContentDispatchEntry state15;
    ContentDispatchEntry state16;
    ContentDispatchEntry state17;
};

extern "C" {
extern const ContentDispatchTable g_contentDispatchTable;

/* Installs the content transition's state dispatch table: every slot gets the idle handler, then each
 * state its own. */
void contentTransitionInstallDispatch(ContentTransition *transition)
{
    // Dispatch storage lies past the shared transition prefix.
    struct DispatchView {
        u8 prefix[0xDC0];
        ContentDispatchEntry entries[19];
    };
    DispatchView *dispatch = reinterpret_cast<DispatchView *>(transition);
    for (s32 i = 0; i < 19; ++i)
        dispatch->entries[i] = g_contentDispatchTable.state0;
    dispatch->entries[1] = g_contentDispatchTable.state1;
    dispatch->entries[2] = g_contentDispatchTable.state2;
    dispatch->entries[3] = g_contentDispatchTable.state3;
    dispatch->entries[4] = g_contentDispatchTable.state4;
    dispatch->entries[5] = g_contentDispatchTable.state5;
    dispatch->entries[6] = g_contentDispatchTable.state6;
    dispatch->entries[7] = g_contentDispatchTable.state7;
    dispatch->entries[8] = g_contentDispatchTable.state8;
    dispatch->entries[9] = g_contentDispatchTable.state9;
    dispatch->entries[10] = g_contentDispatchTable.state10;
    dispatch->entries[11] = g_contentDispatchTable.state11;
    dispatch->entries[12] = g_contentDispatchTable.state12;
    dispatch->entries[13] = g_contentDispatchTable.state13;
    dispatch->entries[14] = g_contentDispatchTable.state14;
    dispatch->entries[15] = g_contentDispatchTable.state15;
    dispatch->entries[16] = g_contentDispatchTable.state16;
    dispatch->entries[17] = g_contentDispatchTable.state17;
}
}
