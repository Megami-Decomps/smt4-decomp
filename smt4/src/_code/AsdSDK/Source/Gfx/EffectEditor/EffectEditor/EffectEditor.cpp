#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_effMenu.h"
#define EFFECT_EDITOR_STORAGE_DEFINITIONS
#include "gfx/EffectEditorStorage.h"
#include "shard/W6_W6Match6_EffectRender.h"
#include "AsdSDK/EffectEditorDefaults.h"
#include "sys/FileDialogResult.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include <math.h>
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/AsdMemCopy.h"
#include "gfx/VectorScratch.h"

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
extern EffectSelectionCatalogEntry *DAT_0044f4d4[13];
void __aeabi_memcpy4(void *, const void *, u32);
void randomStateSeed(u32, u32);
EffectSelectionItem *linkedFindItemByIndex(void *, s32);
EffectSelectionParts *FUN_00246854(EffectSelectionItem *);
void *resourceResolveHeaderPointer(EffectSelectionBlock *);
void effPartsSetData(EffectSelectionBlock *, void *, u32, u16);
void *effBlockCreateFromBlock(EffectSelectionBlock *);
void resourceQueueDeferredDestroy(void *, s32);
u32 effectEditorEditPositionVector(EffectEditorSnapshot *, s32);
void FUN_002496cc(const EffectPositionControl *);
void requestHandlerDispatch(EffectHandlerRequest *, const EffMenuPosition *);
void FUN_00249678();
void renderVectorOverrideResolve(EffectEditorSnapshot *, const EffMenuPosition *, EffectEditorWords *);
void gfxQuaternionScratchMultiply();
void handlerTableCallWithValueB(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCall(EffectHandlerRequest *, f32);
void effectResourceSetColor(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCallWithValue(EffectHandlerRequest *, u32);
void effectEditorApplyHandlerState(EffectHandlerRequest *);
extern const u8 DAT_00400001;
extern const u8 DAT_00400002;
void effectEditorPollTextRequest(const char *, u32, FileDialogResult *);
void *FUN_001e1a70(const char *);
void registrationEntryInsert(u32, s32);
void effectTexturesLoadOnce();
void cameraMatrixCacheReset(void *, s32);
void cameraMatrixCacheSetLookAt(void *, const PhaseVector *, const PhaseVector *, const PhaseVector *);
void stereoCameraSetPerspective(void *, u32, f32, f32, f32, f32);
void FUN_00298d50(void *);
void floatPairStore(f32, f32);
}

static __inline EffectSelectionTemplate *findEditorTemplate(
    EffectSelectionCatalogEntry **catalog, u16 type, u16 id, u16 groupCount)
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
    u32 state = (u32)&DAT_00400001;
    FileDialogResult dialog;
    effectEditorPollTextRequest("effect_editor/", 0x10, &dialog);
    if (dialog.status == 2) {
        state = 0x400000;
    } else if (dialog.status == 1) {
        if (g_effectEditor.list != NULL) {
            registrationEntryInsert((u32)g_effectEditor.list, 3);
        }
        libc_strcpy(reinterpret_cast<unsigned int *>(g_effectEditorResourceName), reinterpret_cast<unsigned int *>(dialog.name));
        void* data = FUN_001e1a70(dialog.path);
        g_effectEditor.list = data;
        __aeabi_memcpy4(&g_effectEditorWorkingSnapshot, data, 0x80);
        state = (u32)&DAT_00400002;
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
 * pivot 1 into r1 between the aspect and far-plane literals, the build after all four); see smt4a FUN_002830cc. */
extern "C" void effectEditorInitialize()
{
    randomStateSeed(0, 0x12345678);
    effectTexturesLoadOnce();
    phaseVectorSet(&g_effectEditorCameraEye, 0.0f, 100.0f, 600.0f);
    phaseVectorSet(&g_effectEditorCameraUp, 0.0f, 1.0f, 0.0f);
    phaseVectorSet(&g_effectEditorCameraTarget, 0.0f, 0.0f, 0.0f);
    phaseVectorSet(&g_effectEditorCameraOffset, 0.0f, 0.0f, 0.0f);
    phaseVectorSet(&g_effectEditorCameraRotation, 0.0f, 0.0f, 0.0f);
    cameraMatrixCacheReset(&g_effectEditorCamera, 1);
    cameraMatrixCacheSetLookAt(&g_effectEditorCamera, &g_effectEditorCameraEye, &g_effectEditorCameraTarget, &g_effectEditorCameraUp);
    stereoCameraSetPerspective(&g_effectEditorCamera, 1, 30.0f, 20.0f, 25600.0f, 5.0f / 3.0f);
    FUN_00298d50(&g_effectEditorCamera);
    /* The default resource pointer (0x28) and its storage extend past the shared menu-state prefix. */
    struct StartupView { u8 unk00[0x28]; void *resource; };
    struct StorageView { u8 unk000[0xda0]; u8 resource[1]; };
    typedef char EditorStartupOffsets[offsetof(StartupView, resource) == 0x28 &&
        offsetof(StorageView, resource) == 0xda0 ? 1 : -1];
    reinterpret_cast<StartupView *>(&g_effectEditor)->resource =
        reinterpret_cast<StorageView *>(&g_effectEditor)->resource;
    g_effectEditor.index = 0;
    g_effectEditorResourceName[0] = 0;
    g_effectEditor.unk08 = 0;
    g_effectEditor.dirty = 0;
    g_effectEditor.mode = 0;
    g_effectEditor.inhibited = 0;
    g_effectEditorInitialVector.setIdentity();
    floatPairStore(0.0f, 0.0f);
}

/* NON_MATCHING: aggregate transfer classes and temporary/register allocation differ. */
extern "C" void effectEditorApplyHandlerState(EffectHandlerRequest *request)
{
    VectorScratch *globals = &g_vectorScratch;
    EffectEditorSnapshot *controls = &g_effectEditorSavedSnapshot;
    FUN_002496cc(reinterpret_cast<const EffectPositionControl *>(controls));
    EffMenuPosition initial = globals->first.position;
    requestHandlerDispatch(request, &initial);
    if (controls->parameters.flags & 0x60) {
        globals->first.position = g_effectEditorInitialVector.value;
        globals->second.position = effectRenderSource()->origin;
        FUN_00249678();
        EffMenuPosition transformed = globals->first.position;
        EffectEditorWords words;
        renderVectorOverrideResolve(controls, &transformed, &words);
        globals->first.position = effectRenderSource()->position;
        globals->second.words = words;
        gfxQuaternionScratchMultiply();
    } else {
        globals->first.position = effectRenderSource()->position;
        globals->second.words = controls->parameters.fallback;
        gfxQuaternionScratchMultiply();
    }
    EffMenuPosition position = globals->first.position;
    handlerTableCallWithValueB(request, &position);
    handlerTableCall(request, controls->parameters.scale * effectRenderSource()->scale);
    if (controls->parameters.flags & 0x100) {
        globals->first.position = controls->parameters.tint;
        f32 scale = controls->parameters.scale * effectRenderSource()->scale;
        globals->first.position.x *= scale;
        globals->first.position.y *= scale;
        globals->first.position.z *= scale;
        globals->first.position.w *= scale;
        EffMenuPosition tint = globals->first.position;
        effectResourceSetColor(request, &tint);
    }
    handlerTableCallWithValue(request, controls->parameters.value);
}

/* NON_MATCHING: catalog search register allocation and final reset-store grouping differ. */
extern "C" u32 effectEditorActivateSelection()
{
    s32 index = g_effectEditor.index + g_effectEditorState.object.indices.extraOffset;
    EffectSelectionItem *item = linkedFindItemByIndex(g_effectEditor.list, index);
    g_effectEditor.item = item;
    __aeabi_memcpy4(&g_effectEditorSettings, item, 0x90);
    __aeabi_memcpy4(&g_effectEditorSavedSnapshot, item, 0x80);
    g_effectEditor.block = item->block;
    EffectSelectionParts *parts = FUN_00246854(item);
    if (parts->type != 0x1b) {
        void *data = resourceResolveHeaderPointer(g_effectEditor.block);
        rt_memcpy(parts->data, data, parts->size);
    }
    if (parts->data != NULL) {
        effPartsSetData(g_effectEditor.block, parts->data, parts->size, parts->id);
    }
    void *instance = effBlockCreateFromBlock(g_effectEditor.block);
    effectEditorApplyHandlerState(static_cast<EffectHandlerRequest *>(instance));
    g_effectEditor.instance = instance;
    g_effectEditor.object = findEditorTemplate(DAT_0044f4d4, item->block->type, item->block->id, 13);
    g_effectEditor.object->context = reinterpret_cast<EffectSelectionContext *>(&g_effectEditorState.object);
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.active = 1;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    if (g_effectEditor.resource != NULL) {
        resourceQueueDeferredDestroy(g_effectEditor.resource, 3);
        g_effectEditor.resource = NULL;
    }
    return 0x800000;
}

extern "C" {
extern EffectEditorOptionNode DAT_0044f900;
extern const char DAT_0040930c[];
EffectEditorOptions *FUN_0024dd90(EffectEditorOptions *options);
void effEditorNodeChainApply(EffectEditorOptions *options);
s32 padIsButtonPressed(u32 button);
__weak void effectEditorTransformPosition(const EffectPositionControl *control,
    const EffMenuPosition *position, EffMenuPosition *result);
void FUN_0021a250(const EffMenuPosition *position, u32 color,
    const EffMenuMatrix *matrix, u32 resource, f32 scale);
void effMenuQueueVectorEffect(const EffMenuPosition *first, const EffMenuPosition *second,
    u32 color, u32 resource);

/* NON_MATCHING: aggregate copy shapes and vector temporary allocation differ. */
// Edit the position vector, then draw its height, ground radius and transformed endpoint.
u32 effectEditorEditPositionVector(EffectEditorSnapshot *record, s32 relative)
{
    u32 result = 1;
    if (!(DAT_0044f900.flags & 2)) {
        if (padIsButtonPressed(1) || padIsButtonPressed(padAlternateButtonIndex(1)))
            result = 0;
    }

    g_effectEditorVector.bits = record->payload.saved;
    if (!g_effectEditor.mode)
        FUN_0024dd90(&DAT_0044f900);
    asdDebugHookVoid();
    effEditorNodeChainApply(&DAT_0044f900);
    asdDebugHookVoid();
    record->payload.saved = g_effectEditorVector.bits;
    if (DAT_0044f900.flags & 8)
        result |= 2;

    VectorScratch *globals = &g_vectorScratch;
    if ((result & 2) && (record->parameters.flags & 0x18)) {
        globals->first.position = g_effectEditorInitialVector.value;
        if (relative) {
            globals->second.position = g_effectEditorWorkingSnapshot.initialPosition;
            FUN_00249678();
        }
        EffMenuPosition transformed = globals->first.position;
        EffMenuPosition position; // The release build omits the optional transform hook.
        effectEditorTransformPosition(reinterpret_cast<const EffectPositionControl *>(record),
            &transformed, &position);
        record->parameters.position = position;
    }

    if (relative) {
        FUN_002496cc(reinterpret_cast<const EffectPositionControl *>(record));
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
        FUN_00249678();
    }

    EffMenuPosition origin = globals->first.position;
    EffMenuPosition elevated = origin;
    elevated.y += offset.y;
    if (elevated.y == 0.0f)
        elevated.y = origin.y - 2.0f;
    if (radius > 0.0f)
        FUN_0021a250(&elevated, 0xff00c0c0, NULL, 0, radius);

    EffMenuPosition ground = elevated;
    ground.y = origin.y - 2.0f;
    if (offset.y != origin.y) {
        FUN_0021a250(&ground, 0xff808080, NULL, 0, radius);
        effMenuQueueVectorEffect(&ground, &elevated, 0xff00c0c0, 0);
    }

    globals->first.position = offset;
    globals->second.position = origin;
    FUN_00249678();
    EffMenuPosition endpoint = globals->first.position;
    effMenuQueueVectorEffect(&elevated, &endpoint, 0xff00c0c0, 0);
    effMenuQueueVectorEffect(&ground, &endpoint, 0xff00c0c0, 0);

    asdDebugTrace(DAT_0040930c, 729);
    EffMenuPointNode *point = static_cast<EffMenuPointNode *>(
        memAlloc(0x10000, 0x100, 0, sizeof(EffMenuPointNode), 16, 1));
    point->unk18 = 0;
    point->kind = 9;
    point->position = endpoint;
    effMenuListAppend(reinterpret_cast<EffMenuNode *>(point), 0);
    return result;
}
}
