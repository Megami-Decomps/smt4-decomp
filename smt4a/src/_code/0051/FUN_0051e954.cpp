/* NON_MATCHING: decoder arithmetic matches semantically, but compiler schedules packed loads differently and tail-calls Hermite instead of returning through VPOP. */
#include "gfx/PackedHermiteByteKey.h"
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleValueDecoding;
extern "C" {
EncodedValue *FUN_0051d8a4(ValueDecoder *curve, f32 time);
f32 nn_math_ARMv6_HermiteC_FAST(f32 value, f32 outgoing, f32 nextValue, f32 incoming, f32 elapsed, f32 duration);

// Sample a six-byte Hermite key with sixteen-bit values and signed twelve-bit tangents.
f32 FUN_0051e954(ValueDecoder *decoder, f32 time)
{
    // Variable-length keys and the time scale extend beyond ValueDecoder's fixed header.
    struct CurveView {
        u16 count;
        u8 unk02[6];
        f32 scale;
        f32 base;
        f32 timeScale;
        PackedHermiteByteKey keys[1];
    };
    typedef char CurveOffsetsCheck[offsetof(CurveView, scale) == 8 &&
        offsetof(CurveView, timeScale) == 0x10 && offsetof(CurveView, keys) == 0x14 ? 1 : -1];
    CurveView *curve = (CurveView *)decoder;
    FUN_0051d8a4(decoder, time);
    PackedHermiteByteKey *last = &curve->keys[curve->count - 1];
    PackedHermiteByteKey *key = (PackedHermiteByteKey *)FUN_0051d8a4(decoder, time);
    f32 keyTime = curve->timeScale * (f32)key->frame;
    f32 value;
    if (keyTime == time || key == last) {
        value = (f32)(key->valueLow + key->valueHigh * 256u) * curve->scale + curve->base;
    } else {
        PackedHermiteByteKey *next = key + 1;
        f32 elapsed = time - keyTime;
        f32 interval = curve->timeScale * (f32)next->frame - keyTime;
        f32 firstValue = (f32)(key->valueLow + key->valueHigh * 256u) * curve->scale + curve->base;
        f32 nextValue = (f32)(next->valueLow + next->valueHigh * 256u) * curve->scale + curve->base;
        s32 outgoing = (s32)key->outgoingHigh * 16 + (key->tangentNibbles >> 4);
        s32 incoming = next->incomingLow + (s32)(s8)(next->tangentNibbles << 4) * 16;
        value = nn_math_ARMv6_HermiteC_FAST(firstValue, (f32)outgoing * 0.03125f,
            nextValue, (f32)incoming * 0.03125f, elapsed, interval);
    }
    return value;
}
}
