#ifndef NN_HID_ANALOGSTICKCLAMPER_H
#define NN_HID_ANALOGSTICKCLAMPER_H
#include "common.h"
#include <stddef.h>

namespace nn { namespace hid { namespace CTR {
class AnalogStickClamper {
public:
    AnalogStickClamper();
    s16 minimum[3];
    s16 maximum[3];
    u8 mode;
    u8 unk0D;
    u16 limit;
    f32 scale;
    f32 radius;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
typedef char AnalogStickClamperLayoutCheck[sizeof(AnalogStickClamper) == 0x24 &&
    offsetof(AnalogStickClamper, mode) == 0xc && offsetof(AnalogStickClamper, limit) == 0xe &&
    offsetof(AnalogStickClamper, scale) == 0x10 && offsetof(AnalogStickClamper, unk20) == 0x20 ? 1 : -1];
}}}
#endif
