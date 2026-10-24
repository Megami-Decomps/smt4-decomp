#include "shard/Shard0033.h"

extern "C" {

s32 FUN_0029f848(void *selection, s32 count, u32 kind, s32 a, s32 b, s32 c);
extern Obj7ECRef g_useCounter;

// Append a value to the counter's value list (up to 20) and refresh the selection that shows it.
void FUN_0029e328(u8 value)
{
    // The list and selection extend beyond the shared Obj7EC prefix.
    struct CounterListView {
        u8 unk000[0x74e];
        u8 mode;               // 0x74e
        u8 unk74f;
        s32 valueOffset;       // 0x750
        s32 count;             // 0x754
        u8 values[0x30];       // 0x758
        u8 selection[0x64];    // 0x788
    };
    CounterListView *work = reinterpret_cast<CounterListView *>(g_useCounter.instance);
    if (work->count < 20) {
        work->values[work->count] = value;
        s32 count = work->count + 1;
        work->count = count;
        u32 kind;
        if (work->mode == 2) {
            kind = 10;
        } else {
            kind = 9;
        }
        FUN_0029f848(work->selection, count, kind, 1, 1, 1);
    }
}

} /* extern "C" */
