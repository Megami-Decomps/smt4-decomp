/* NON_MATCHING: float constant pool/register allocation and grouped preset-store scheduling differ. */
#include "map/lmapMain.h"

extern "C" {
extern LmapExtraGlobalsA DAT_005806a0;

// Initialize the remaining per-camera preset columns after the base defaults.
void FUN_00352a14(void)
{
    struct CameraPresetView {
        u8 unk000[0xcc];
        f32 presets[5][16];
    };
    typedef char CameraPresetOffset[offsetof(CameraPresetView, presets) == 0xcc ? 1 : -1];
    CameraPresetView *camera = reinterpret_cast<CameraPresetView *>(DAT_005806a0.extra);
    camera->presets[0][1] = 145.0f;
    camera->presets[1][1] = 165.0f;
    camera->presets[2][1] = 40.0f;
    camera->presets[3][1] = 130.0f;
    camera->presets[4][1] = 42.0f;
    camera->presets[1][2] = 210.0f;
    camera->presets[2][2] = 0.0f;
    camera->presets[3][2] = 460.0f;
    camera->presets[4][2] = 43.0f;
    camera->presets[1][3] = 220.0f;
    camera->presets[2][3] = 0.0f;
    camera->presets[3][3] = 380.0f;
    camera->presets[4][3] = 42.0f;
    camera->presets[1][4] = 160.0f;
    camera->presets[2][4] = 40.0f;
    camera->presets[0][2] = 170.0f;
    camera->presets[0][3] = 100.0f;
    camera->presets[0][4] = 150.0f;
    camera->presets[3][4] = 150.0f;
    camera->presets[4][4] = 42.0f;
    camera->presets[1][5] = 200.0f;
    camera->presets[2][5] = 0.0f;
    camera->presets[3][5] = 50.0f;
    camera->presets[4][5] = 42.0f;
    camera->presets[1][6] = 50.0f;
    camera->presets[2][6] = 0.0f;
    camera->presets[0][5] = 150.0f;
    camera->presets[0][6] = 200.0f;
    camera->presets[3][6] = 150.0f;
    camera->presets[4][6] = 42.0f;
    camera->presets[0][7] = 160.0f;
    camera->presets[1][7] = 170.0f;
    camera->presets[2][7] = 0.0f;
    camera->presets[3][7] = 450.0f;
    camera->presets[4][7] = 42.0f;
    camera->presets[0][8] = 60.0f;
    camera->presets[1][8] = 250.0f;
    camera->presets[2][8] = 0.0f;
    camera->presets[3][8] = 100.0f;
    camera->presets[4][8] = 42.0f;
    camera->presets[0][9] = 105.0f;
    camera->presets[1][9] = 125.0f;
    camera->presets[2][9] = 0.0f;
    camera->presets[3][9] = 70.0f;
    camera->presets[4][9] = 42.0f;
    camera->presets[0][10] = 230.0f;
    camera->presets[1][10] = 160.0f;
    camera->presets[2][10] = 0.0f;
    camera->presets[4][10] = 42.0f;
    camera->presets[0][11] = 145.0f;
    camera->presets[1][11] = 165.0f;
    camera->presets[2][11] = 40.0f;
    camera->presets[4][11] = 42.0f;
    camera->presets[3][10] = 160.0f;
    camera->presets[3][11] = 230.0f;
}
}
