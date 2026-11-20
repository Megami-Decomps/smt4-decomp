/* NON_MATCHING: all 33 instructions match; only the constructor/destructor symbol names differ
 * because FUN_003f2be4 (_ZN7Item548C1Ev) and objFillFromTemplate (_ZN8ItemPairD1Ev) are not
 * yet mangled C++ class names in symbols.txt. */
#include "common.h"

struct CameraVec3 {
    f32 x;
    f32 y;
    f32 z;
    CameraVec3(f32 x_, f32 y_, f32 z_) : x(x_), y(y_), z(z_) {}
};

struct Item548 {
    u8 data[0x548];
    Item548();
};

struct ItemPair {
    u32 unk00;
    Item548 items[2];
    ~ItemPair();
};

CameraVec3 g_camPos(0.0f, 100.0f, 1280.0f);
CameraVec3 g_camTarget(0.0f, 0.0f, 0.0f);
CameraVec3 g_camUp(0.0f, 1.0f, 0.0f);
ItemPair g_itemPair;
