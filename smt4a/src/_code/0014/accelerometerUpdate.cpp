/* NON_MATCHING: accelerometer state-base addressing, vector copies, and rotation arithmetic use different VFP/register scheduling. */
#include "shard/GlobalBlocks.h"
#include <math.h>

extern "C" {
extern u32 g_accelerometerInitGuard;
extern AccelerometerFullState g_accelerometerState;
extern AccelerometerLiveState g_accelerometerLiveState;
extern AccelerometerRawState g_accelerometerRawSample;
extern u8 entry[];
s32 __cxa_guard_acquire(u32 *guard);
__weak void __cxa_guard_release(u32 *guard);
__weak s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *module);
u32 FUN_0015959c(void);
AccelerometerFullState *FUN_0015976c(AccelerometerFullState *state, u32 handle);
void FUN_001597f4(void *state);
void FUN_001d1438(void *status);
void nn_hid_CTR_AccelerometerReader_ReadLatest(AccelerometerFullState *reader, s16 *raw);
void nn_hid_CTR_AccelerometerReader_ConvertToAcceleration(
    AccelerometerFullState *reader, f32 *acceleration, u32 count, const s16 *raw, s32 scale);
}

static __inline f32 accelerometerClamp(s16 value)
{
    if (value <= -930) {
        return -930.0f;
    }
    if (value >= 930) {
        return 930.0f;
    }
    return (f32)value;
}

/* Refresh the accelerometer sample, optionally rotating and clamping its raw axes. */
extern "C" bool accelerometerUpdate(void)
{
    if ((g_accelerometerInitGuard & 1) == 0 && __cxa_guard_acquire(&g_accelerometerInitGuard) != 0) {
        __aeabi_atexit(FUN_0015976c(&g_accelerometerState, FUN_0015959c()), FUN_001597f4, entry);
        __cxa_guard_release(&g_accelerometerInitGuard);
    }
    if (g_accelerometerLiveState.calibrationPending != 0) {
        g_accelerometerState.reader.centerX = g_accelerometerLiveState.centerX;
        g_accelerometerState.reader.centerY = g_accelerometerLiveState.centerY;
        g_accelerometerLiveState.calibrationPending = 0;
    }
    FUN_001d1438(&g_accelerometerRawSample.status);
    g_accelerometerState.live.previousAcceleration[0] = g_accelerometerState.live.acceleration[0];
    g_accelerometerState.live.previousAcceleration[1] = g_accelerometerState.live.acceleration[1];
    g_accelerometerState.live.previousAcceleration[2] = g_accelerometerState.live.acceleration[2];
    nn_hid_CTR_AccelerometerReader_ReadLatest(&g_accelerometerState, g_accelerometerLiveState.raw);
    if (g_accelerometerLiveState.transform == 1) {
        f32 x = g_accelerometerLiveState.raw[0];
        f32 y = g_accelerometerLiveState.raw[1];
        f32 z = g_accelerometerLiveState.raw[2];
        f32 length = sqrtf(x * x + y * y + z * z);
        f32 inverseLength = 1.0f / length;
        x *= inverseLength;
        y *= inverseLength;
        z *= inverseLength;
        g_accelerometerLiveState.raw[0] = (s16)(s32)((g_accelerometerLiveState.basisX[0] * x
            + g_accelerometerLiveState.basisX[1] * y + g_accelerometerLiveState.basisX[2] * z) * length);
        g_accelerometerLiveState.raw[1] = (s16)(s32)((g_accelerometerLiveState.basisY[0] * x
            + g_accelerometerLiveState.basisY[1] * y + g_accelerometerLiveState.basisY[2] * z) * length);
        g_accelerometerLiveState.raw[2] = (s16)(s32)((g_accelerometerLiveState.basisZ[0] * x
            + g_accelerometerLiveState.basisZ[1] * y + g_accelerometerLiveState.basisZ[2] * z) * length);
        g_accelerometerLiveState.raw[0] = (s16)accelerometerClamp(g_accelerometerLiveState.raw[0]);
        g_accelerometerLiveState.raw[1] = (s16)accelerometerClamp(g_accelerometerLiveState.raw[1]);
        g_accelerometerLiveState.raw[2] = (s16)accelerometerClamp(g_accelerometerLiveState.raw[2]);
    }
    nn_hid_CTR_AccelerometerReader_ConvertToAcceleration(
        &g_accelerometerState, g_accelerometerLiveState.acceleration, 1, g_accelerometerLiveState.raw, -1);
    return true;
}
