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
extern const ContentDispatchTable DAT_00404cd0;

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
        dispatch->entries[i] = DAT_00404cd0.state0;
    dispatch->entries[1] = DAT_00404cd0.state1;
    dispatch->entries[2] = DAT_00404cd0.state2;
    dispatch->entries[3] = DAT_00404cd0.state3;
    dispatch->entries[4] = DAT_00404cd0.state4;
    dispatch->entries[5] = DAT_00404cd0.state5;
    dispatch->entries[6] = DAT_00404cd0.state6;
    dispatch->entries[7] = DAT_00404cd0.state7;
    dispatch->entries[8] = DAT_00404cd0.state8;
    dispatch->entries[9] = DAT_00404cd0.state9;
    dispatch->entries[10] = DAT_00404cd0.state10;
    dispatch->entries[11] = DAT_00404cd0.state11;
    dispatch->entries[12] = DAT_00404cd0.state12;
    dispatch->entries[13] = DAT_00404cd0.state13;
    dispatch->entries[14] = DAT_00404cd0.state14;
    dispatch->entries[15] = DAT_00404cd0.state15;
    dispatch->entries[16] = DAT_00404cd0.state16;
    dispatch->entries[17] = DAT_00404cd0.state17;
}
}
