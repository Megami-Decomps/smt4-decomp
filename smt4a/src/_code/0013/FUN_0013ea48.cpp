/* NON_MATCHING: retail uses str r1, [ip, #48] where the compiled block uses add r0, ip, #48. */
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
extern VectorState DAT_005b4028;

void __softfp FUN_0013ea48(f32 firstX, f32 secondX, f32 firstY, f32 secondY,
                         f32 firstZ, f32 secondZ, f32 firstW, f32 secondW)
{
    DAT_005b4028.first.x = firstX;
    DAT_005b4028.first.y = firstY;
    DAT_005b4028.second.x = secondX;
    DAT_005b4028.second.y = secondY;
    DAT_005b4028.first.z = firstZ;
    DAT_005b4028.second.z = secondZ;
    DAT_005b4028.first.w = firstW;
    DAT_005b4028.second.w = secondW;
}
}
