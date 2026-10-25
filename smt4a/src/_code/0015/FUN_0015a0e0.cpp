/* NON_MATCHING: calibration copy and aggregate vector clears use different ARM/VFP stores. */
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "nn/Result.h"

struct StereoCalibrationConfig {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 separation;
    /* 0x14 */ u8 unk14[0xc];
};
extern "C" u8 DAT_00589504;
extern "C" StereoCalibrationConfig DAT_0062d6d8;
extern "C" void nn_cfg_CTR_Initialize();
extern "C" s32 FUN_00189738(void *data, u32 size, u32 blockId);
extern "C" void sysFatalBreak();
extern "C" void FUN_001a0eb0();

static __inline AsdCameraVec3 cameraFilledVector(f32 value)
{
    AsdCameraVec3 vector;
    vector.x = value;
    vector.y = value;
    vector.z = value;
    return vector;
}

// Load the device's stereo calibration once and reset per-camera stereo parameters.
extern "C" void FUN_0015a0e0(AsdCameraStereo *stereo)
{
    if (DAT_00589504 == 0) {
        nn_cfg_CTR_Initialize();
        if (nnResultIsFailure(FUN_00189738(&DAT_0062d6d8, 0x20, 0x50005)))
            sysFatalBreak();
        FUN_001a0eb0();
        DAT_00589504 = 1;
    }
    stereo->state.stereo.calibration = DAT_0062d6d8.separation;
    stereo->state.stereo.offset = 0.0f;
    stereo->state.first = 0.0f;
    stereo->state.middleOffsets[0] = 0.0f;
    stereo->state.middleOffsets[1] = 0.0f;
    stereo->state.second = 0.0f;
    stereo->offset5 = 0.0f;
    stereo->state.stereo.parameters[0] = 0.0f;
    stereo->state.stereo.parameters[1] = 0.0f;
    stereo->state.stereo.parameters[2] = 0.0f;
    stereo->state.stereo.parameters[3] = 0.0f;
    stereo->state.stereo.parameters[4] = 0.0f;
    stereo->state.stereo.parameters[5] = 0.0f;
    stereo->state.stereo.vectors[0] = cameraFilledVector(0.0f);
    stereo->state.stereo.vectors[1] = cameraFilledVector(0.0f);
    stereo->state.stereo.vectors[2] = cameraFilledVector(0.0f);
    stereo->state.stereo.vectors[3] = cameraFilledVector(0.0f);
}
