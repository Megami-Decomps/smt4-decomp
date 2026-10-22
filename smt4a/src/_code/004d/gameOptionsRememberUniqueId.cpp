#include "shard/GameOptions.h"

struct OptionIdStorageView {
    u8 unk000[0x130]; // 0x000
    u16 flags;        // 0x130
    u16 ids[3];       // 0x132
};

extern "C" GameOptions* gameGetOptions();

// Preserve up to three unique IDs while the options record permits updates.
extern "C" void gameOptionsRememberUniqueId(u32 id)
{
    OptionIdStorageView* options = (OptionIdStorageView*)gameGetOptions();
    if ((options->flags & 1) == 0 && options->ids[0] != id) {
        if (options->ids[1] != id && options->ids[2] != id) {
            u16 storedId = (u16)id;
            if (options->ids[0] == 0) {
                options->ids[0] = storedId;
            } else if (options->ids[1] == 0) {
                options->ids[1] = storedId;
            } else if (options->ids[2] == 0) {
                options->ids[2] = storedId;
            }
        }
    }
}
