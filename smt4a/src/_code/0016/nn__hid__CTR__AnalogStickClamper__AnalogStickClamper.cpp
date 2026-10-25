/* NON_MATCHING: halfword-default register allocation adds an r4 save; float defaults and all recovered fields agree. */
#include "nn/hid/AnalogStickClamper.h"

namespace nn { namespace hid { namespace CTR {
AnalogStickClamper::AnalogStickClamper()
{
    minimum[0] = 0x28;
    minimum[1] = 0x24;
    minimum[2] = 0x28;
    maximum[0] = 0x91;
    maximum[1] = 0x91;
    maximum[2] = 0x91;
    mode = 0;
    limit = 0x8d;
    unk18 = 0;
    unk1C = 0;
    unk20 = 0;
    scale = 1.5f;
    radius = 141.0f;
}
}}}
