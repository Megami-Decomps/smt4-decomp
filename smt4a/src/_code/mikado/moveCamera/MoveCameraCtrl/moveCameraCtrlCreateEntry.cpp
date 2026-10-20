#include "common.h"

extern "C" {

struct CameraChild;

typedef struct CameraLink {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 position[4];
} CameraLink;

typedef struct CameraChild {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 flags;
} CameraChild;

typedef struct CameraCtrlEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ CameraChild *child;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ CameraLink *link;
} CameraCtrlEntry;

typedef struct MoveCameraCtrl {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ CameraCtrlEntry *entries[1];
} MoveCameraCtrl;

extern const char DAT_0053295c[]; /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp" */
extern u32 g_handleRegistry;

extern CameraCtrlEntry *FUN_00178b04(u32 size, const char *file, s32 line);
extern CameraCtrlEntry *FUN_0040ac08(CameraCtrlEntry *memory);
extern void FUN_0040aa6c(CameraCtrlEntry *entry, u32 arg);
extern void FUN_0040ab7c(CameraCtrlEntry *entry, s32 arg);
extern void FUN_0040aad4(CameraCtrlEntry *entry, s32 arg);
extern void FUN_0045b538(void *position);
extern void FUN_0040ace8(u32 registry, CameraChild *child);
extern void FUN_003fe86c(CameraChild *child, s32 a, s32 b, f32 x, f32 y);

/* Creates camera entry `index` (allocated at MoveCameraCtrl.cpp:0x1a3), initialises it and registers its child. */
void moveCameraCtrlCreateEntry(MoveCameraCtrl *ctrl, u32 arg, s32 index)
{
    CameraCtrlEntry *entry = FUN_00178b04(0x20, DAT_0053295c, 0x1A3);
    CameraChild *child;

    if (entry != NULL) {
        entry = FUN_0040ac08(entry);
    }
    ctrl->entries[index] = entry;
    FUN_0040aa6c(entry, arg);
    FUN_0040ab7c(ctrl->entries[index], 0);
    FUN_0040aad4(ctrl->entries[index], 0);
    FUN_0045b538(ctrl->entries[index]->link->position);
    child = ctrl->entries[index]->child;
    FUN_0040ace8(g_handleRegistry, child);
    FUN_003fe86c(child, 0, 2, 0.0f, 0.0f);
    child->flags |= 1;
}

}
