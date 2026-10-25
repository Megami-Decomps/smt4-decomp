/* NON_MATCHING: direct resource-array accesses recover base arithmetic; resource index scratch and panel clear argument scheduling differ. */
#include "common.h"

extern "C" {
void asdMemFree(void *);
void sysMemClear(void *, u32);
void workOwnerRelease(void *);
void btlCameraFinishTransition(void *);
void obj4FSlots28Reset(void *);
void panelReset(void *);
void FUN_004f8fa0(void *);

void FUN_004f55c8(void *camera)
{
    struct CameraResourceSlot {
        s32 id;
        u32 state;
        u8 owner[0x30];
        u32 pending;
    };
    struct CameraPanelSlot {
        u8 kind;
        u8 unk01[3];
        void *allocation;
        u8 data[0x80];
        u8 active;
        u8 unk89[3];
    };
    // Resource arrays and the final scale lie beyond the shared camera prefix.
    struct CameraCleanupView {
        u8 unk0000[0x1398];
        CameraResourceSlot resources[50];
        u8 unk1F50[4];
        u32 active;
        u32 count;
        u8 unk1F5C[0x8C0];
        CameraPanelSlot panels[11];
        u8 unk2E20[0x57C];
        u32 flags;
        u8 unk33A0[0xC];
        u8 mode;
        u8 unk33AD[0xF];
        u32 pending;
        u8 unk33C0[0x1C8];
        u32 anchor;
        u8 unk358C[0x66E4];
        f32 scale;
    };
    CameraCleanupView *state = static_cast<CameraCleanupView *>(camera);
    state->pending = 0;
    panelReset(camera);
    btlCameraFinishTransition(camera);
    FUN_004f8fa0(camera);
    obj4FSlots28Reset(camera);
    for (s32 index = 0; index < 50; ++index) {
        state->resources[index].state = 0;
        state->resources[index].id = -1;
        workOwnerRelease(state->resources[index].owner);
        state->resources[index].pending = 0;
    }
    state->flags = 0;
    state->mode = 12;
    state->active = 0;
    state->count = 0;
    for (s32 index = 0; index < 11; ++index) {
        CameraPanelSlot *slot = &state->panels[index];
        slot->kind = 0xFF;
        sysMemClear(slot->data, sizeof(slot->data));
        if (slot->allocation != NULL) {
            asdMemFree(slot->allocation);
            slot->allocation = NULL;
        }
        slot->active = 0;
    }
    state->flags |= 0x100;
    state->anchor = 0;
    state->scale = 1.0f;
}
}
