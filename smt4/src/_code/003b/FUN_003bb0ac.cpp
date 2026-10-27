/* NON_MATCHING: compiler folds consecutive dispatch assignments into a copy loop; retail uses individual copies. */
#include "shard/W6_W6Match6_ContentTransition.h"

struct ContentDispatchEntry {
    void (*callback)(ContentTransition *);
    u32 state;
};
extern "C" {
extern const ContentDispatchEntry DAT_00404cd0[18];

// Install the content transition's state dispatch table.
void FUN_003bb0ac(ContentTransition *transition)
{
    // Dispatch storage lies past the shared transition prefix.
    struct DispatchView {
        u8 prefix[0xDC0];
        ContentDispatchEntry entries[19];
    };
    DispatchView *dispatch = reinterpret_cast<DispatchView *>(transition);
    for (s32 i = 0; i < 19; ++i)
        dispatch->entries[i] = DAT_00404cd0[0];
    dispatch->entries[1] = DAT_00404cd0[1];
    dispatch->entries[2] = DAT_00404cd0[2];
    dispatch->entries[3] = DAT_00404cd0[3];
    dispatch->entries[4] = DAT_00404cd0[4];
    dispatch->entries[5] = DAT_00404cd0[5];
    dispatch->entries[6] = DAT_00404cd0[6];
    dispatch->entries[7] = DAT_00404cd0[7];
    dispatch->entries[8] = DAT_00404cd0[8];
    dispatch->entries[10] = DAT_00404cd0[10];
    dispatch->entries[9] = DAT_00404cd0[9];
    dispatch->entries[12] = DAT_00404cd0[12];
    dispatch->entries[11] = DAT_00404cd0[11];
    dispatch->entries[14] = DAT_00404cd0[14];
    dispatch->entries[13] = DAT_00404cd0[13];
    dispatch->entries[15] = DAT_00404cd0[15];
    dispatch->entries[16] = DAT_00404cd0[16];
    dispatch->entries[17] = DAT_00404cd0[17];
}
}
