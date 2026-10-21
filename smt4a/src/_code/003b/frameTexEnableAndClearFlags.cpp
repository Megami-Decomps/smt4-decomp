#include "shard/JobBlock43e278.h"

struct FrameTexFlagsA {
    u8 unk0000[0x1414]; // 0x0000
    u8 enabled;         // 0x1414
    u8 unk1415[2];      // 0x1415
    u8 first;           // 0x1417
    u8 second;          // 0x1418
    u8 third;           // 0x1419
    u8 unk141a[0x33];  // 0x141a
    u8 dirty;           // 0x144d
};

// Enable the frame-texture state, clear its three flags, and mark it dirty.
extern "C" void frameTexEnableAndClearFlags()
{
    FrameTexFlagsA* state = (FrameTexFlagsA*)g_frameTex;
    state->enabled = 1;
    state->first = 0;
    state->second = 0;
    state->third = 0;
    state->dirty = 1;
}
