#include "camp/CampCec/CampCecEdit.h"

struct CecEditCameraControl {
    u8 unk00[0x24];
    u8 active;       // 0x24
    u8 unk25[2];
    s8 mode;         // 0x27
};

union CecEditCameraState {
    CampCecEdit data;
    struct {
        u8 unk000[8];
        u32 target;       // 0x008
        u8 unk00c[4];
        u32 handle;       // 0x010
        f32 scale;        // 0x014
        u8 unk018[0xe8];
        CecEditCameraControl controls;  // 0x100
    } camera;
};

extern "C" {

extern CampCecEdit* g_campCecEdit;
s32 FUN_001ed80c(void);
void actorDetailsDrawPanel(u32 handle, u32 target, f32* scale, s32 flags, s32 value, s32 mode);

static inline void updateCecEditCamera(CecEditCameraState* edit, const CecEditCameraControl* controls)
{
    if (controls->active != 0) {
        actorDetailsDrawPanel(edit->camera.handle, edit->camera.target, &edit->camera.scale,
                     0, 0, controls->mode);
    }
}

u32 campCecEditUpdateCamera(void)
{
    CecEditCameraState* edit = (CecEditCameraState*)g_campCecEdit;
    if (FUN_001ed80c() == 0) {
        updateCecEditCamera(edit, &edit->camera.controls);
    }
    return 0;
}

} // extern "C"
