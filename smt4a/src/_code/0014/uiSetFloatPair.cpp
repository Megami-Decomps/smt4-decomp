#include "common.h"

struct FloatPairOwner {
    u8 unk00[0x504];
    f32 secondValue; // 0x504
    f32 firstValue;  // 0x508
};

extern "C" void uiSetFloatPair(FloatPairOwner* owner, f32 firstValue, f32 secondValue)
{
    owner->firstValue = firstValue;
    owner->secondValue = secondValue;
}
