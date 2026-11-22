#define EFFECT_EDITOR_STORAGE_DEFINITIONS
#include "gfx/EffectEditorStorage.h"
#include "shard/W6_W6Match6_EffectRender.h"
#include "AsdSDK/EffectEditorDefaults.h"
#include "sys/FileDialogResult.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include <math.h>
#include "title/titleMain.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_effMenu.h"
#include "util/Random_Smt4a.h"
#include "gfx/VectorScratch.h"

namespace {
/* The editor's scratch buffer is past the shared menu-state prefix. */
struct EditorResetStateView {
    u8 unk00, inhibited, unk02[5], flag7, flag8, mode, unk0A[2];
    u32 frame;
    u8 unk10[0x18];
    void *buffer;
    u8 unk2C[0xD64];
    u8 scratch[1];
};
}

extern "C" {
static EffectEditorSettings g_effectEditorSettings;
static char g_effectEditorResourceName[0x40];
static EffectEditorVector g_effectEditorInitialVector;
static EffectEditorSnapshot g_effectEditorWorkingSnapshot;
static EffectEditorSnapshot g_effectEditorSavedSnapshot;
static EffectEditorCamera g_effectEditorCamera;
static PhaseVector g_effectEditorCameraEye;
static PhaseVector g_effectEditorCameraUp;
static PhaseVector g_effectEditorCameraTarget;
static PhaseVector g_effectEditorCameraOffset;
static PhaseVector g_effectEditorCameraRotation;
/* Retail leaves 0xc bytes here in IV and 8 in Apocalypse: the vector is 16-byte aligned. */
__align(16) static EffectEditorVector g_effectEditorVector;
static EffectEditorVector g_effectEditorRotation;
extern EffectEditorDefaultSlot g_effectEditorState;
extern EffectSelectionCatalogEntry *DAT_0059e624[13];
void __aeabi_memcpy4(void *, const void *, u32);
char *libc_strcpy(char *, const char *);
EffectSelectionItem *linkedFindItemByIndex(void *, s32);
void *rt_memcpy(void *, const void *, u32);
EffectSelectionParts *FUN_002b30e4(EffectSelectionItem *);
void *resourceResolveHeaderPointer(EffectSelectionBlock *);
void effPartSetData(EffectSelectionBlock *, void *, u32, u16);
void *effBlockCreateFromBlock(EffectSelectionBlock *);
void objectRegistryInsert(void *, s32);
u32 effectEditorEditPositionVector(EffectEditorSnapshot *, s32);
void FUN_00390038(const EffectPositionControl *);
/* Release armlink removes this optional three-argument transform hook. */
__weak void effectEditorTransformPosition(const EffectPositionControl *, const EffMenuPosition *, EffMenuPosition *);
void resourceRunHandlerCallback(EffectHandlerRequest *, const EffMenuPosition *);
void FUN_002f8794();
void renderVectorOverrideResolve(EffectEditorSnapshot *, const EffMenuPosition *, EffectEditorWords *);
void gfxQuaternionScratchMultiply();
void handlerTableCallWithValueB(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCall(EffectHandlerRequest *, f32);
void effectResourceSetColor(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCallWithValue(EffectHandlerRequest *, u32);
void effectEditorApplyHandlerState(EffectHandlerRequest *);
void effectEditorPollTextRequest(const char *, u32, FileDialogResult *);
void *FUN_0029127c(const char *);
void asdEffectQueueRelease(u32, s32);
void effectTexturesLoadOnce();
void asdCameraInitializeDefaults(EffectEditorCamera *, s32);
void cameraMatrixCacheSetLookAt(void *, const PhaseVector *, const PhaseVector *, const PhaseVector *);
void stereoCameraSetPerspective(EffectEditorCamera *, s32, f32, f32, f32, f32);
void floatPairStore(f32, f32);
}

static __inline EffectSelectionTemplate *findEditorTemplate(EffectSelectionCatalogEntry **catalog, u16 type, u16 id, u16 groupCount)
{
    for (u16 group = 0; group < groupCount; ++group) {
        EffectSelectionCatalogEntry *entry = catalog[group];
        if (entry != NULL) {
            for (; entry->parts != NULL; ++entry) {
                if (entry->parts->type == type && entry->parts->id == id) {
                    return entry->object;
                }
            }
        }
    }
    return NULL;
}

extern "C" s32 effectEditorResetVector(void)
{
    g_effectEditorVector.value.x = 0.0f;
    g_effectEditorVector.value.y = 0.0f;
    g_effectEditorVector.value.z = 0.0f;
    g_effectEditorVector.value.w = 0.0f;
    g_effectEditorSettings.mode = 8;
    g_effectEditorSettings.flagA = 0;
    g_effectEditorSettings.flagB = 0;
    return 0;
}

extern "C" void effectEditorResetRotation(void)
{
    g_effectEditorSettings.mode = 8;
    g_effectEditorSettings.flagA = 0;
    g_effectEditorSettings.flagB = 0;
    g_effectEditorRotation.setIdentity();
}

extern "C" u32 effectPollResourceFileDialog(void)
{
    u32 state = 0x400001;
    FileDialogResult dialog;
    effectEditorPollTextRequest("effect_editor/", 0x10, &dialog);
    if (dialog.status == 2) {
        state = 0x400000;
    } else if (dialog.status == 1) {
        if (g_effectEditor.list != NULL) {
            asdEffectQueueRelease((u32)g_effectEditor.list, 3);
        }
        libc_strcpy(g_effectEditorResourceName, dialog.name);
        void* data = FUN_0029127c(dialog.path);
        g_effectEditor.list = data;
        __aeabi_memcpy4(&g_effectEditorWorkingSnapshot, data, 0x80);
        state = 0x400002;
        g_effectEditor.index = 0;
        g_effectEditorState.object.indices.extraOffset = 0;
    }
    return state;
}

/* Sets the three components of a camera vector. */
static void phaseVectorSet(PhaseVector *vector, f32 x, f32 y, f32 z)
{
    vector->x = x;
    vector->y = y;
    vector->z = z;
}

/* NON_MATCHING: 6 lines: everything but stereoCameraSetPerspective's argument schedule matches (retail moves the
 * pivot 1 into r1 between the aspect and far-plane literals, the build after all four). The callee's definition takes
 * a CameraPerspective by value; paramorder makes this IDENTICAL with the order (fieldOfView, camera, near, far,
 * enabled, aspect), which is not the definition's. The callee takes a by-value CameraPerspective (retail's definition stores it with two vstmia pairs); built as one
 * in field order here it is worse (10 lines), so the call keeps the scalar form (wave 74). */
extern "C" void FUN_002830cc(void)
{
    randomStateSeed(0, 0x12345678);
    effectTexturesLoadOnce();
    phaseVectorSet(&g_effectEditorCameraEye, 0.0f, 100.0f, 600.0f);
    phaseVectorSet(&g_effectEditorCameraUp, 0.0f, 1.0f, 0.0f);
    phaseVectorSet(&g_effectEditorCameraTarget, 0.0f, 0.0f, 0.0f);
    phaseVectorSet(&g_effectEditorCameraOffset, 0.0f, 0.0f, 0.0f);
    phaseVectorSet(&g_effectEditorCameraRotation, 0.0f, 0.0f, 0.0f);
    asdCameraInitializeDefaults(&g_effectEditorCamera, 1);
    cameraMatrixCacheSetLookAt(&g_effectEditorCamera, &g_effectEditorCameraEye, &g_effectEditorCameraTarget, &g_effectEditorCameraUp);
    stereoCameraSetPerspective(&g_effectEditorCamera, 1, 30.0f, 20.0f, 25600.0f, 5.0f / 3.0f);
    FUN_0036b824(reinterpret_cast<u32>(&g_effectEditorCamera));
    reinterpret_cast<EditorResetStateView *>(&g_effectEditor)->buffer =
        reinterpret_cast<EditorResetStateView *>(&g_effectEditor)->scratch;
    g_effectEditor.index = 0;
    g_effectEditorResourceName[0] = 0;
    g_effectEditor.unk08 = 0;
    g_effectEditor.dirty = 0;
    g_effectEditor.mode = 0;
    g_effectEditor.inhibited = 0;
    g_effectEditorInitialVector.setIdentity();
    floatPairStore(0.0f, 0.0f);
}

/* NON_MATCHING: 68 lines: retail copies the initial vector and the render source's origin into the
 * scratch with VFP vldmia/vstmia, copies the scratch into the locals as 12 + 4 bytes, and lowers the final branch differently. */
/* Apply the position override, optional source scale, and render transforms. */
extern "C" void FUN_00390038(const EffectPositionControl *control)
{
    if (control->flags & 0x18) {
        g_vectorScratch.first.position = g_effectEditorInitialVector.value;
        g_vectorScratch.second.position = effectRenderSource()->origin;
        FUN_002f8794();
        EffMenuPosition transformed = g_vectorScratch.first.position;
        EffMenuPosition position;
        effectEditorTransformPosition(control, &transformed, &position);
        g_vectorScratch.first.position = position;
    } else {
        g_vectorScratch.first.position = control->position;
    }
    if (control->flags & 0x80) {
        f32 scale = effectRenderSource()->scale;
        g_vectorScratch.first.position.x *= scale;
        g_vectorScratch.first.position.y *= scale;
        g_vectorScratch.first.position.z *= scale;
        g_vectorScratch.first.position.w *= scale;
    }
    g_vectorScratch.second.position = g_effectEditorInitialVector.value;
    FUN_002f8794();
    g_vectorScratch.second.position = effectRenderSource()->origin;
    FUN_002f8794();
    if (control->flags & 4) {
        g_vectorScratch.first.position.y = 5.0f;
    }
}

/* NON_MATCHING: 136 lines: retail copies the scratch value into each local as 12 + 4 bytes (each local in its own
 * slot: an 80-byte frame against 68), moves the initial vector and the render source's origin and position into the
 * scratch with VFP vldmia/vstmia (integer ldm/stm here), and reloads the saved snapshot's address after each call. */
extern "C" void effectEditorApplyHandlerState(EffectHandlerRequest *request)
{
    EffectEditorSnapshot *controls = &g_effectEditorSavedSnapshot;
    FUN_00390038(reinterpret_cast<const EffectPositionControl *>(controls));
    EffMenuPosition initial = g_vectorScratch.first.position;
    resourceRunHandlerCallback(request, &initial);
    if (controls->parameters.flags & 0x60) {
        g_vectorScratch.first.position = g_effectEditorInitialVector.value;
        g_vectorScratch.second.position = effectRenderSource()->origin;
        FUN_002f8794();
        EffMenuPosition transformed = g_vectorScratch.first.position;
        EffectEditorWords words;
        renderVectorOverrideResolve(controls, &transformed, &words);
        g_vectorScratch.first.position = effectRenderSource()->position;
        g_vectorScratch.second.words = words;
        gfxQuaternionScratchMultiply();
    } else {
        g_vectorScratch.first.position = effectRenderSource()->position;
        g_vectorScratch.second.words = controls->parameters.fallback;
        gfxQuaternionScratchMultiply();
    }
    EffMenuPosition position = g_vectorScratch.first.position;
    handlerTableCallWithValueB(request, &position);
    handlerTableCall(request, controls->parameters.scale * effectRenderSource()->scale);
    if (controls->parameters.flags & 0x100) {
        g_vectorScratch.first.position = controls->parameters.tint;
        f32 scale = controls->parameters.scale * effectRenderSource()->scale;
        g_vectorScratch.first.position.x *= scale;
        g_vectorScratch.first.position.y *= scale;
        g_vectorScratch.first.position.z *= scale;
        g_vectorScratch.first.position.w *= scale;
        EffMenuPosition tint = g_vectorScratch.first.position;
        effectResourceSetColor(request, &tint);
    }
    handlerTableCallWithValue(request, controls->parameters.value);
}

/* NON_MATCHING: catalog search register allocation and final reset-store grouping differ (retail keeps the group zero in r4 for the NULL result and the resets, and uses r9). */
extern "C" u32 effectEditorActivateSelection()
{
    s32 index = g_effectEditor.index + g_effectEditorState.object.indices.extraOffset;
    EffectSelectionItem *item = linkedFindItemByIndex(g_effectEditor.list, index);
    g_effectEditor.item = item;
    __aeabi_memcpy4(&g_effectEditorSettings, item, 0x90);
    __aeabi_memcpy4(&g_effectEditorSavedSnapshot, item, 0x80);
    g_effectEditor.block = item->block;
    EffectSelectionParts *parts = FUN_002b30e4(item);
    if (parts->type != 0x1b) {
        void *data = resourceResolveHeaderPointer(g_effectEditor.block);
        rt_memcpy(parts->data, data, parts->size);
    }
    if (parts->data != NULL) {
        effPartSetData(g_effectEditor.block, parts->data, parts->size, parts->id);
    }
    void *instance = effBlockCreateFromBlock(g_effectEditor.block);
    effectEditorApplyHandlerState(static_cast<EffectHandlerRequest *>(instance));
    g_effectEditor.instance = instance;
    g_effectEditor.object = findEditorTemplate(DAT_0059e624, item->block->type, item->block->id, 13);
    g_effectEditor.object->context = reinterpret_cast<EffectSelectionContext *>(&g_effectEditorState.object);
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.active = 1;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    if (g_effectEditor.resource != NULL) {
        objectRegistryInsert(g_effectEditor.resource, 3);
        g_effectEditor.resource = NULL;
    }
    return 0x800000;
}

extern "C" {
extern EffectEditorOptionNode DAT_0059ea50;
extern const char DAT_0053d0d8[];
EffectEditorOptions *FUN_00200bcc(EffectEditorOptions *options);
void effEditorNodeChainApply(EffectEditorOptions *options);
s32 padButtonIsPressed(u32 button);
__weak void effectEditorTransformPosition(const EffectPositionControl *control,
    const EffMenuPosition *position, EffMenuPosition *result);
void FUN_002ffe14(const EffMenuPosition *position, u32 color,
    const EffMenuMatrix *matrix, u32 resource, f32 scale);
void FUN_002b3ed8(const EffMenuPosition *first, const EffMenuPosition *second,
    u32 color, u32 resource);

/* NON_MATCHING: aggregate copy shapes and vector temporary allocation differ. */
// Edit the position vector, then draw its height, ground radius and transformed endpoint.
u32 effectEditorEditPositionVector(EffectEditorSnapshot *record, s32 relative)
{
    u32 result = 1;
    if (!(DAT_0059ea50.flags & 2)) {
        if (padButtonIsPressed(1) || padButtonIsPressed(FUN_00202178(1)))
            result = 0;
    }

    g_effectEditorVector.bits = record->payload.saved;
    if (!g_effectEditor.mode)
        FUN_00200bcc(&DAT_0059ea50);
    asdDebugHookVoid();
    effEditorNodeChainApply(&DAT_0059ea50);
    asdDebugHookVoid();
    record->payload.saved = g_effectEditorVector.bits;
    if (DAT_0059ea50.flags & 8)
        result |= 2;

    VectorScratch *globals = &g_vectorScratch;
    if ((result & 2) && (record->parameters.flags & 0x18)) {
        globals->first.position = g_effectEditorInitialVector.value;
        if (relative) {
            globals->second.position = g_effectEditorWorkingSnapshot.initialPosition;
            FUN_002f8794();
        }
        EffMenuPosition transformed = globals->first.position;
        EffMenuPosition position; // The release build omits the optional transform hook.
        effectEditorTransformPosition(reinterpret_cast<const EffectPositionControl *>(record),
            &transformed, &position);
        record->parameters.position = position;
    }

    if (relative) {
        FUN_00390038(reinterpret_cast<const EffectPositionControl *>(record));
        globals->second.position = g_effectEditorWorkingSnapshot.initialPosition;
        globals->first.position.x -= globals->second.position.x;
        globals->first.position.y -= globals->second.position.y;
        globals->first.position.z -= globals->second.position.z;
        globals->first.position.w -= globals->second.position.w;
    } else {
        globals->first.position = record->parameters.position;
    }

    EffMenuPosition offset = globals->first.position;
    globals->first.position.y = 0.0f;
    f32 radius = sqrtf(globals->first.position.x * globals->first.position.x +
        globals->first.position.y * globals->first.position.y + globals->first.position.z * globals->first.position.z);
    globals->first.position = g_effectEditorInitialVector.value;
    if (relative) {
        globals->second.position = g_effectEditorWorkingSnapshot.initialPosition;
        FUN_002f8794();
    }

    EffMenuPosition origin = globals->first.position;
    EffMenuPosition elevated = origin;
    elevated.y += offset.y;
    if (elevated.y == 0.0f)
        elevated.y = origin.y - 2.0f;
    if (radius > 0.0f)
        FUN_002ffe14(&elevated, 0xff00c0c0, NULL, 0, radius);

    EffMenuPosition ground = elevated;
    ground.y = origin.y - 2.0f;
    if (offset.y != origin.y) {
        FUN_002ffe14(&ground, 0xff808080, NULL, 0, radius);
        FUN_002b3ed8(&ground, &elevated, 0xff00c0c0, 0);
    }

    globals->first.position = offset;
    globals->second.position = origin;
    FUN_002f8794();
    EffMenuPosition endpoint = globals->first.position;
    FUN_002b3ed8(&elevated, &endpoint, 0xff00c0c0, 0);
    FUN_002b3ed8(&ground, &endpoint, 0xff00c0c0, 0);

    asdDebugTrace(DAT_0053d0d8, 735);
    EffMenuPointNode *point = static_cast<EffMenuPointNode *>(
        memAlloc(0x10000, 0x100, 0, sizeof(EffMenuPointNode), 16, 1));
    point->unk18 = 0;
    point->kind = 9;
    point->position = endpoint;
    effMenuListAppend(reinterpret_cast<EffMenuNode *>(point), 0);
    return result;
}
}
