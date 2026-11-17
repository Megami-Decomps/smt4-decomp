#include "common.h"
#include "Model/MoriModelManager.h"
#include "classes/Obj557d00.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {

typedef struct MoveCameraCtrl {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ MoriModelContent *entries[1];
} MoveCameraCtrl;

extern const char DAT_0053295c[]; /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp" */

extern void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
extern void FUN_0045b538(void *position);

/* Creates camera entry `index` (allocated at MoveCameraCtrl.cpp:0x1a3), initialises it and registers its body. */
void moveCameraCtrlCreateEntry(MoveCameraCtrl *ctrl, const char *name, s32 index)
{
    MoriModelContent *entry = static_cast<MoriModelContent *>(asdMemoryAllocTraced(0x20, DAT_0053295c, 0x1A3));
    Obj557b18 *child;

    if (entry != NULL) {
        entry = modelListInit(entry);
    }
    ctrl->entries[index] = entry;
    resourceOwnerLoadFileSync(entry, name);
    FUN_0040ab7c(ctrl->entries[index], 0);
    moriModelContentLoadBody(ctrl->entries[index], 0);
    FUN_0045b538(ctrl->entries[index]->resource->unk0C);
    child = ctrl->entries[index]->body;
    handleRegistryRegisterObject(g_handleRegistry, child);
    modelPlayClip(child, 0, 2, 0.0f, 0.0f);
    child->flags |= 1;
}

}
