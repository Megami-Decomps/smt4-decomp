#include "shard/GameModeFlags.h"
#include "status/StatusCamera.h"

extern "C" {

// Test the stored enable byte for the four supported modes.
u8 FUN_002240b4(u32 mode)
{
    GameModeFlagGroup *flags =
        &reinterpret_cast<GameModeFlags *>(FUN_002a0d0c())->modes;
    switch (mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        break;
    case 6:
        return flags->mode6 == 1;
    case 7:
        return flags->mode7 == 1;
    case 8:
        return flags->mode8 == 1;
    case 9:
        return flags->mode9 == 1;
    }
    return 0;
}
}
