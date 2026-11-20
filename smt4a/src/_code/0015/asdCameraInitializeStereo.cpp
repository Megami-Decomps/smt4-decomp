/* NON_MATCHING: the calibration copy uses core registers, and the four vector clears share an integer zero. Retail copies calibration through VFP and reloads the float zero into the core register for each vector. */
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "nn/Result.h"
#include <string.h>

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

/* Loads the device's stereo calibration once and resets the camera's stereo parameters. */
extern "C" void asdCameraInitializeStereo(AsdCameraStereo *stereo)
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
    memset(stereo->state.stereo.vectors, 0, sizeof(stereo->state.stereo.vectors));
}
