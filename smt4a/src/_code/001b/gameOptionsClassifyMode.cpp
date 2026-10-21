#include "common.h"

struct GameOptionModeView {
    u8 unk000[0x62]; // 0x000
    u16 mode;          // 0x062
    u8 unk064[0xcc];  // 0x064
    u16 flags;         // 0x130
    u16 first;         // 0x132
    u16 second;        // 0x134
    u16 third;         // 0x136
};

extern "C" GameOptionModeView* gameGetOptions();

// Classify the option mode and its three secondary settings.
extern "C" u32 gameOptionsClassifyMode()
{
    GameOptionModeView* options = gameGetOptions();
    if ((options->flags & 1) != 0) {
        if (options->mode != 0) {
            return 2;
        }
    } else if (options->first != 0 || options->second != 0 || options->third != 0) {
        return 1;
    }
    return 0;
}
