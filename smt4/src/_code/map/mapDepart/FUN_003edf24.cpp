/* NON_MATCHING: generated static-initialization boundaries and the registered destructor are not recovered. */
#include "common.h"

struct DepartureArguments {
    u8 unk00[0x18]; // 0x00
    u32 first;      // 0x18
    u32 second;     // 0x1c
};

struct DepartureCounters {
    u32 first;  // 0x00
    u32 second; // 0x04
};

struct DepartureState {
    u8 unk00[0x50]; // 0x00
    f32 first;      // 0x50
    u8 unk54[8];    // 0x54
    f32 second;     // 0x5c
    u8 unk60[8];    // 0x60
    f32 x;          // 0x68
    f32 y;          // 0x6c
    f32 z;          // 0x70
};

extern "C" {
extern DepartureCounters DAT_00447510;
extern DepartureState DAT_0049f890;
void _ZN10FloatStateC1Ev(DepartureState* state);

// Reset the shared departure state and its initial position.
void FUN_003edf24(u32 first, u32 second, DepartureArguments* arguments)
{
    arguments->first = first;
    arguments->second = second;
    DAT_00447510.first = 0;
    DAT_00447510.second = 0;
    _ZN10FloatStateC1Ev(&DAT_0049f890);
    DAT_0049f890.x = 310.0f;
    DAT_0049f890.y = 45.0f;
    DAT_0049f890.z = 0.0f;
}
}
