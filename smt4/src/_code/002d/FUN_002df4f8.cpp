/* NON_MATCHING: vector assignments use core-register block copies instead of retail's component-wise VFP stores. */
#include "common.h"

struct CameraRestoreVector {
    f32 x;
    f32 y;
    f32 z;
};
struct CameraRestoreSnapshot {
    /* 0x00 */ CameraRestoreVector vectors[2];
    /* 0x18 */ u8 unk18[0x2c];
};
struct CameraRestoreState {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ CameraRestoreVector currentVectors[2];
    /* 0x04c */ CameraRestoreVector savedVectors[2];
    /* 0x064 */ u8 unk064[0x24c];
    /* 0x2b0 */ u8 active;
    /* 0x2b1 */ u8 unk2b1[3];
    /* 0x2b4 */ void *object;
};
struct CameraRestoreGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CameraRestoreState *state;
};

extern "C" {
extern CameraRestoreGlobals DAT_004474f0;
void FUN_002adf00(CameraRestoreSnapshot *snapshot, void *object);
void FUN_0029c2cc(void *object, u32 value);
void gfxObjectDestroy(void *object);
void FUN_00276a3c();

void FUN_002df4f8()
{
    CameraRestoreSnapshot snapshot;
    FUN_002adf00(&snapshot, DAT_004474f0.state->object);
    CameraRestoreState *state = DAT_004474f0.state;
    state->currentVectors[0] = snapshot.vectors[0];
    state->currentVectors[1] = snapshot.vectors[1];
    state->savedVectors[0] = snapshot.vectors[0];
    state->savedVectors[1] = snapshot.vectors[1];
    FUN_0029c2cc(state->object, 0);
    gfxObjectDestroy(DAT_004474f0.state->object);
    state = DAT_004474f0.state;
    state->object = NULL;
    state->active = 0;
    FUN_00276a3c();
}
}
