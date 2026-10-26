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
void naviMainSetPosition(const Position *position)
{
    NaviPosition *navi = g_naviMain;
    navi->position = *position;
    navi->positionSet = 1;
}
}
