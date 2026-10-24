/* NON_MATCHING: local-static storage/runtime relocations differ from retail's named reader/guard aliases, and VFP transform scheduling differs. */
#include "common.h"

namespace nn { namespace hid { namespace CTR {
class AccelerometerReader {
public:
    explicit AccelerometerReader(void *source);
    ~AccelerometerReader();
    /* 0x00 */ void *source;
    /* 0x04 */ u16 bias;
    /* 0x06 */ u16 sensitivity;
    /* 0x08 */ u8 state[0x50];
};
}}}

struct AccelerometerRawSample {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 y;
    /* 0x04 */ s16 z;
    /* 0x06 */ u16 auxiliary;
    /* 0x08 */ u32 reserved;
};
struct AccelerationVector { f32 x, y, z; };
struct AccelerometerState {
    /* 0x00 */ u16 bias;
    /* 0x02 */ u16 sensitivity;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 transformEnabled;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 calibrationPending;
    /* 0x0C */ AccelerometerRawSample sample;
    /* 0x18 */ AccelerationVector acceleration;
    /* 0x24 */ AccelerationVector previous;
    /* 0x30 */ f32 transform[3][4];
};

typedef char AccelerometerReaderSizeCheck[sizeof(nn::hid::CTR::AccelerometerReader) == 0x58 ? 1 : -1];
typedef char AccelerometerStateSizeCheck[sizeof(AccelerometerState) == 0x60 ? 1 : -1];

extern "C" {
extern AccelerometerState g_accelerometerState;
void *FUN_0011c454(void);
void FUN_002bd808(u16 *value);
bool nn_hid_CTR_AccelerometerReader_ReadLatest(nn::hid::CTR::AccelerometerReader *reader,
                                             AccelerometerRawSample *sample);
void nn_hid_CTR_AccelerometerReader_ConvertToAcceleration(nn::hid::CTR::AccelerometerReader *reader,
    AccelerationVector *output, u32 count, const AccelerometerRawSample *sample, s32 index);
f32 sqrtf(f32 value);
}

static inline f32 clampRawAcceleration(s32 value)
{
    if (value <= -930)
        return -930.0f;
    if (value >= 930)
        return 930.0f;
    return (f32)value;
}

/* Read, optionally rotate and clamp the sensor sample, then convert it to acceleration. */
extern "C" s32 accelerometerUpdate(void)
{
    static nn::hid::CTR::AccelerometerReader reader(FUN_0011c454());
    AccelerometerState *state = &g_accelerometerState;
    if (state->calibrationPending) {
        reader.bias = state->bias;
        reader.sensitivity = state->sensitivity;
        state->calibrationPending = 0;
    }
    FUN_002bd808(&state->sample.auxiliary);
    state->previous = state->acceleration;
    nn_hid_CTR_AccelerometerReader_ReadLatest(&reader, &state->sample);
    if (state->transformEnabled == 1) {
        f32 x = state->sample.x;
        f32 y = state->sample.y;
        f32 z = state->sample.z;
        f32 magnitude = sqrtf(x * x + y * y + z * z);
        f32 inverseMagnitude = 1.0f / magnitude;
        x *= inverseMagnitude;
        y *= inverseMagnitude;
        z *= inverseMagnitude;
        s16 transformedX = (s32)((state->transform[0][0] * x + state->transform[0][1] * y +
                                  state->transform[0][2] * z) * magnitude);
        s16 transformedY = (s32)((state->transform[1][0] * x + state->transform[1][1] * y +
                                  state->transform[1][2] * z) * magnitude);
        s16 transformedZ = (s32)((state->transform[2][0] * x + state->transform[2][1] * y +
                                  state->transform[2][2] * z) * magnitude);
        state->sample.x = transformedX;
        state->sample.y = transformedY;
        state->sample.z = transformedZ;
        state->sample.x = (s32)clampRawAcceleration(transformedX);
        state->sample.y = (s32)clampRawAcceleration(transformedY);
        state->sample.z = (s32)clampRawAcceleration(transformedZ);
    }
    nn_hid_CTR_AccelerometerReader_ConvertToAcceleration(&reader, &state->acceleration, 1,
                                                        &state->sample, -1);
    return 1;
}
