/* NON_MATCHING: aggregate assignment uses strd rather than retail's str/stm sequence. */
#include "common.h"

namespace {
struct Position {
    u32 x, y, z;
};
struct NaviPosition {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 positionSet;
    /* 0x0a */ u8 unk0A[0x12];
    /* 0x1c */ Position position;
};
}

extern "C" {
extern NaviPosition *g_naviMain;

/* Sets and enables the navigation position. */
void FUN_002e0608(const Position *position)
{
    g_naviMain->position = *position;
    g_naviMain->positionSet = 1;
}
}
