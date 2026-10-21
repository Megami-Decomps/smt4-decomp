/* NON_MATCHING: compiler preserves data+0x2000 and uses a literal 0x1374 offset; retail preserves the raw data base, computes data+0x1000 early, and shares a differently placed return tail. */
#include "shard/Shard0033.h"

struct ModeResetView {
    u8 unk0000[0x1374]; // 0x0000
    u32 step;            // 0x1374
    u8 unk1378[0xc9c]; // 0x1378
    u8 pending;          // 0x2014
    u8 unk2015[2];      // 0x2015
    u8 mode;             // 0x2017
};

extern "C" {
extern ObjBRef g_gameGlobals;
void FUN_0021af2c(void);

// Resets mode-specific state when leaving mode eight or nine.
void FUN_002c8550(s32 mode)
{
    ModeResetView* data = reinterpret_cast<ModeResetView*>(g_gameGlobals.instance);
    u8 previous = data->mode;
    data->mode = static_cast<u8>(mode);
    if (previous != 9) {
        if (previous != 8 || mode == 8) {
            return;
        }
    } else if (mode == 9) {
        return;
    }
    data->step = 0;
    FUN_0021af2c();
    data->pending = 0;
}
}
