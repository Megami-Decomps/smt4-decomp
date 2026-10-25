/* NON_MATCHING: first scene-update saved registers and animation/model argument evaluation order differ; the recovered reference argument, stereo setter and pending-list snapshot now match retail. */
#include "camp/RenderCtx.h"
#include "util/FUN_00145e24.h"
#include "util/FUN_00145e24.h"
#include "util/CalleeContracts.h"

struct SlotOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 list[1];
};

struct ModelAnimationSet {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 matrices[1];
};

/* The override model state: when both low flag bits are set its embedded record stands in for the manager's animations. */
struct ModelOverride {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ ModelAnimationSet embedded;
};

struct SceneBlock {
    /* 0x00 */ u8 unk00[0xC4];
    /* 0xC4 */ u8 hasMatrices;
};

struct ModelSlot {
    /* 0x00 */ u8 unk00[0xA8];
    /* 0xA8 */ u32 matrixListA;
    /* 0xAC */ u32 matrixListB;
};

struct FrameModel {
    /* 0x00 */ u8 unk00[0xA8];
    /* 0xA8 */ u32 *firstValue;
};

struct CallbackSlot;

/* The model manager the frame process drives (the part it touches). */
struct HandleRegistry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SlotOwner *owner;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ ModelAnimationSet *animations;
    /* 0x10 */ ModelSlot *model;
    /* 0x14 */ SceneBlock *scene;
    /* 0x18 */ u32 *pendingBegin;
    /* 0x1C */ u32 *pendingEnd;
    /* 0x20 */ u8 unk20[0x1C];
    /* 0x3C */ CallbackSlot *reference;
};

/* A list of matrices built from a slot and an owner (0xB8 bytes). */
struct MatrixSlotList {
    MatrixSlotList(u32 matrices, SlotOwner *owner, u32 animations);
    u8 storage[0xB8];
};

extern "C" {
extern HandleRegistry *g_handleRegistry;
extern ModelOverride *DAT_0056fcb8;
extern FrameModel *DAT_0056fcbc;
extern RenderCtxA *g_renderCtx;

void FUN_0017d158(ModelSlot *model);
bool FUN_00158124(HandleRegistry *manager);
void FUN_00157050(SlotOwner *owner, ModelAnimationSet *animations);
void FUN_00156bfc(SceneBlock *scene, u8 *list);
s32 FUN_00156bec(SceneBlock *scene);
void FUN_00157c3c(ModelSlot *model, SceneBlock *scene);
void FUN_00157be4(ModelSlot *model);
void FUN_0016bad8(MatrixSlotList *list);
void FUN_00157520(MatrixSlotList *list);
void FUN_0016d304(ModelSlot *model);
void FUN_00157268(MatrixSlotList *list);
void FUN_001582a8(CallbackSlot *reference, u32 value);
u8 refValueIsSet(s32 *valueRef);
void gfxCommandSetFlushCursor(ModelSlot *model);
void objectListsClearActive(SlotOwner *owner);
void FUN_00144ab4(s32 value);
void FUN_0017dd80(void);
void FUN_001575cc(RenderCtxA *context);
void FUN_00157558(RenderCtxA *context);
s32 FUN_00157e98(ModelSlot *model, ModelAnimationSet *animations);
void renderCtxSetStereoMode(RenderCtxA *context, s32 mode);
void holderFlushPending(u32 handle);

/* The animation set in use: the override's embedded record when it is fully enabled, else the manager's own. */
static __inline ModelAnimationSet *activeAnimations(HandleRegistry *manager)
{
    ModelOverride *override = DAT_0056fcb8;
    if (override != NULL && (override->flags & 1) && (override->flags & 2)) {
        return &override->embedded;
    }
    return manager->animations;
}

/* The frame process: update the model manager's slot lists and scene, rebuild the matrix lists and flush the pending
 * holders. */
u32 FUN_00146048(void)
{
    FUN_0017d158(g_handleRegistry->model);
    HandleRegistry *manager = g_handleRegistry;
    if (FUN_00158124(manager)) {
        SlotOwner *owner = manager->owner;
        SceneBlock *scene = manager->scene;
        FUN_00157050(owner, activeAnimations(manager));
        FUN_00156bfc(scene, owner->list);
    }
    manager = g_handleRegistry;
    if (FUN_00158124(manager) && FUN_00156bec(manager->scene) != 0) {
        FUN_00157c3c(manager->model, manager->scene);
        if (manager->scene->hasMatrices != 0 && manager->model->matrixListB != 0) {
            MatrixSlotList list(manager->model->matrixListB, manager->owner,
                                (u32)activeAnimations(manager)->matrices);
            FUN_0016bad8(&list);
            FUN_00157520(&list);
        }
        FUN_00157be4(manager->model);
    }
    manager = g_handleRegistry;
    if (FUN_00158124(manager)) {
        FUN_0016d304(manager->model);
        MatrixSlotList list(g_handleRegistry->model->matrixListA, g_handleRegistry->owner,
                            (u32)activeAnimations(g_handleRegistry)->matrices);
        FUN_00157268(&list);
        FUN_00157520(&list);
        manager = g_handleRegistry;
        if (manager->reference != NULL && refValueIsSet(reinterpret_cast<s32 *>(manager->reference))) {
            u32 value = *DAT_0056fcbc->firstValue;
            FUN_001582a8(manager->reference, value);
        }
        manager = g_handleRegistry;
        gfxCommandSetFlushCursor(manager->model);
        objectListsClearActive(manager->owner);
    }
    FUN_00144ab4(0);
    renderCtxSetStereoMode(g_renderCtx, 0);
    FUN_0017dd80();
    FUN_001575cc(g_renderCtx);
    FUN_00157558(g_renderCtx);
    manager = g_handleRegistry;
    if (FUN_00158124(manager)) {
        ModelSlot *model = manager->model;
        if (FUN_00157e98(model, activeAnimations(manager)) == 0) {
            FUN_001575cc(g_renderCtx);
        }
    } else {
        FUN_001575cc(g_renderCtx);
    }
    FUN_00145e24(g_renderCtx, reinterpret_cast<void *>(FUN_00152f54()));
    u32 *pendingEnd = g_handleRegistry->pendingEnd;
    for (u32 *pending = g_handleRegistry->pendingBegin; pending != pendingEnd; pending++) {
        holderFlushPending(*pending);
    }
    return 0;
}
}
