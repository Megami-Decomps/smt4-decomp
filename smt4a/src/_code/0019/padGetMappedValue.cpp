#include "shard/PadState.h"
#include "code/Code0019_Smt4a.h"

struct PadMappingView {
    u8 unk00[0x34];
    u16 ids[8];
    s8 values[8];
};

extern "C" {
PadState* gameGetPlayerData(void);

s32 padGetMappedValue(u32 id)
{
    const PadMappingView* pad = reinterpret_cast<const PadMappingView*>(gameGetPlayerData());
    for (s32 slot = 0; slot < 8; ++slot) {
        if (pad->ids[slot] == id) {
            return pad->values[slot];
        }
    }
    return 0;
}
}
