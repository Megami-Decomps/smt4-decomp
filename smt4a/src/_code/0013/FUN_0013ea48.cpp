#include "common.h"

struct StoredVector {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
    f32 w; // 0x0C
};

struct VectorState {
    u8 unk00[0x20];
    StoredVector first;  // 0x20
    StoredVector second; // 0x30
};

extern "C" {
extern VectorState g_allocationAddressRanges;

void __softfp FUN_0013ea48(f32 firstX, f32 secondX, f32 firstY, f32 secondY,
                         f32 firstZ, f32 secondZ, f32 firstW, f32 secondW)
{
    g_allocationAddressRanges.first.x = firstX;
    g_allocationAddressRanges.first.y = firstY;
    g_allocationAddressRanges.second.x = secondX;
    g_allocationAddressRanges.second.y = secondY;
    g_allocationAddressRanges.first.z = firstZ;
    g_allocationAddressRanges.second.z = secondZ;
    g_allocationAddressRanges.first.w = firstW;
    g_allocationAddressRanges.second.w = secondW;
}
}
