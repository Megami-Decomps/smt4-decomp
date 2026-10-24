/* NON_MATCHING: global-camera flag update uses a split address; final resource-loop base and registers differ. */
#include "battle/btlCamera.h"

extern "C" {
void asdMemFree(void *allocation);
void sysMemClear(void *buffer, u32 size);
void textureCacheReleaseAll();
void keyedRecordsFreeAll();
void workOwnerRelease(void *owner);
void btlCameraFinishTransition(void *controller);
void FUN_004f6e68(void *controller);
void obj4FSlots28Reset(void *controller);
void panelReset(void *controller);
void FUN_004f8fa0(void *controller);
extern BtlCameraA *g_btlCamera;

// Release transient camera panels and resources and clear the active transition state.
void FUN_004f5e6c(void *controller)
{
    struct ResourceSlot { s32 id; u32 state; u8 owner[0x30]; u32 pending; };
    struct PanelSlot {
        u8 kind;
        u8 unk01[3];
        void *allocation;
        u8 data[0x80];
        u8 active;
        u8 unk89[3];
    };
    // The controller's resource arrays extend well beyond the shared camera prefix.
    struct CleanupView {
        u8 unk0000[0x1398];
        ResourceSlot resources[50];
        CameraBackend *backend;
        u8 unk1F54[0x8C8];
        PanelSlot panels[11];
        u8 unk2E20[0x230];
        u32 animation;
        u8 unk3054[0x368];
        u32 pending;
    };
    CleanupView *state = static_cast<CleanupView *>(controller);
    state->pending = 0;
    panelReset(controller);
    FUN_004f6e68(controller);
    for (s32 index = 0; index < 11; ++index) {
        PanelSlot *panel = &state->panels[index];
        panel->kind = 0xff;
        sysMemClear(panel->data, sizeof(panel->data));
        if (panel->allocation != NULL) {
            asdMemFree(panel->allocation);
            panel->allocation = NULL;
        }
        panel->active = 0;
    }
    if (state->backend != NULL) {
        state->backend->release();
        state->backend = NULL;
    }
    btlCameraFinishTransition(controller);
    state->animation = 0;
    keyedRecordsFreeAll();
    textureCacheReleaseAll();
    BtlCameraA *camera = g_btlCamera;
    if (camera != NULL) {
        camera->flags &= ~0x8000000;
    }
    FUN_004f8fa0(controller);
    obj4FSlots28Reset(controller);
    for (s32 index = 0; index < 50; ++index) {
        ResourceSlot *resource = &state->resources[index];
        resource->id = -1;
        resource->state = 0;
        workOwnerRelease(resource->owner);
        resource->pending = 0;
    }
}
}
