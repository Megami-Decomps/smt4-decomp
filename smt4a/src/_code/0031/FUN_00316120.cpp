#include "common.h"

struct NameFormWork {
    u8 unk00[0xd];
    u8 mode; // 0x0d
    u8 unk0e[2];
    u32 form; // 0x10
};
struct NameFormGlobals {
    u32 unk00;
    NameFormWork *work; // 0x04
};
extern "C" NameFormGlobals g_name;
extern "C" void FUN_00483b78(u32 *form);

// Update the name form while its active mode is selected.
extern "C" s32 FUN_00316120()
{
    if (g_name.work->mode == 1)
        FUN_00483b78(&g_name.work->form);
    return 0;
}
