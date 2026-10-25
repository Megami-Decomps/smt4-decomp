#define EFFECT_EDITOR_STORAGE_DEFINITIONS
#include "gfx/EffectEditorStorage.h"
#include "shard/W6_W6Match6_EffectRender.h"
#include "AsdSDK/EffectEditorDefaults.h"
#include "sys/FileDialogResult.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include <math.h>

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
static EffectEditorCameraDefaults g_effectEditorCameraDefaults;
/* Retail leaves 0xc bytes here in IV and 8 in Apocalypse: the vector is 16-byte aligned. */
__align(16) static EffectEditorVector g_effectEditorVector;
static EffectEditorVector g_effectEditorRotation;
extern EffectEditorDefaultSlot DAT_0059e9a8;
extern EffectSelectionCatalogEntry *DAT_0059e624[13];
extern EffectRenderGlobals DAT_006471dc;
void __aeabi_memcpy4(void *, const void *, u32);
char *libc_strcpy(char *, const char *);
void randomStateSeed(u32, u32);
EffectSelectionItem *linkedFindItemByIndex(void *, s32);
void *rt_memcpy(void *, const void *, u32);
EffectSelectionParts *FUN_002b30e4(EffectSelectionItem *);
void *resourceResolveHeaderPointer(EffectSelectionBlock *);
void effPartSetData(EffectSelectionBlock *, void *, u32, u16);
void *FUN_00243c24(EffectSelectionBlock *);
void objectRegistryInsert(void *, s32);
u32 FUN_003c378c(EffectEditorSnapshot *, s32);
void FUN_00390038(const EffectPositionControl *);
void resourceRunHandlerCallback(EffectHandlerRequest *, const EffMenuPosition *);
void FUN_002f8794();
void FUN_001ad5ec(EffectEditorSnapshot *, const EffMenuPosition *, EffectEditorWords *);
void FUN_001bc3e4();
void handlerTableCallWithValueB(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCall(EffectHandlerRequest *, f32);
void FUN_00300908(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCallWithValue(EffectHandlerRequest *, u32);
void effectEditorApplyHandlerState(EffectHandlerRequest *);
void FUN_0037cdcc(const char *, u32, FileDialogResult *);
void *FUN_0029127c(const char *);
void asdEffectQueueRelease(u32, s32);
void FUN_00387454();
void asdCameraInitializeDefaults(EffectEditorCamera *, s32);
void FUN_0014f0dc(void *, const PhaseVector *, const PhaseVector *, const PhaseVector *);
void FUN_001523b8(EffectEditorCamera *, s32, f32, f32, f32, f32);
void FUN_0036b824(EffectEditorCamera *);
void FUN_003627ac(f32, f32);
}

static __inline EffectSelectionTemplate *findEditorTemplate(const EffectSelectionBlock *block)
{
    u16 type = block->type;
    u16 id = block->id;
    for (u16 group = 0; group < 13; ++group) {
        EffectSelectionCatalogEntry *entry = DAT_0059e624[group];
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
    FUN_0037cdcc("effect_editor/", 0x10, &dialog);
    if (dialog.status == 2) {
        state = 0x400000;
    } else if (dialog.status == 1) {
        if (g_effectEditor.selection.list != NULL) {
            asdEffectQueueRelease((u32)g_effectEditor.selection.list, 3);
        }
        libc_strcpy(g_effectEditorResourceName, dialog.name);
        void* data = FUN_0029127c(dialog.path);
        g_effectEditor.selection.list = data;
        __aeabi_memcpy4(&g_effectEditorWorkingSnapshot, data, 0x80);
        state = 0x400002;
        g_effectEditor.selection.index = 0;
        DAT_0059e9a8.object.indices.extraOffset = 0;
    }
    return state;
}

/* NON_MATCHING: vector initialization grouping and camera argument-base recovery differ. */
extern "C" void FUN_002830cc(void)
{
    randomStateSeed(0, 0x12345678);
    FUN_00387454();
    g_effectEditorCameraDefaults.eye.x = 0.0f;
    g_effectEditorCameraDefaults.eye.y = 100.0f;
    g_effectEditorCameraDefaults.eye.z = 600.0f;
    g_effectEditorCameraDefaults.up.x = 0.0f;
    g_effectEditorCameraDefaults.up.y = 1.0f;
    g_effectEditorCameraDefaults.up.z = 0.0f;
    g_effectEditorCameraDefaults.target.x = 0.0f;
    g_effectEditorCameraDefaults.target.y = 0.0f;
    g_effectEditorCameraDefaults.target.z = 0.0f;
    g_effectEditorCameraDefaults.offset.x = 0.0f;
    g_effectEditorCameraDefaults.offset.y = 0.0f;
    g_effectEditorCameraDefaults.offset.z = 0.0f;
    g_effectEditorCameraDefaults.rotation.x = 0.0f;
    g_effectEditorCameraDefaults.rotation.y = 0.0f;
    g_effectEditorCameraDefaults.rotation.z = 0.0f;
    asdCameraInitializeDefaults(&g_effectEditorCamera, 1);
    FUN_0014f0dc(&g_effectEditorCamera, &g_effectEditorCameraDefaults.eye, &g_effectEditorCameraDefaults.target, &g_effectEditorCameraDefaults.up);
    FUN_001523b8(&g_effectEditorCamera, 1, 30.0f, 20.0f, 25600.0f, 5.0f / 3.0f);
    FUN_0036b824(&g_effectEditorCamera);
    EditorResetStateView *startup = reinterpret_cast<EditorResetStateView *>(&g_effectEditor);
    startup->buffer = startup->scratch;
    g_effectEditor.selection.index = 0;
    g_effectEditorResourceName[0] = 0;
    g_effectEditor.unk00[8] = 0;
    g_effectEditor.unk00[7] = 0;
    g_effectEditor.dispatch.mode = 0;
    g_effectEditor.dispatch.inhibited = 0;
    g_effectEditorInitialVector.setIdentity();
    FUN_003627ac(0.0f, 0.0f);
}

/* NON_MATCHING: aggregate transfer classes and temporary/register allocation differ. */
extern "C" void effectEditorApplyHandlerState(EffectHandlerRequest *request)
{
    EffectRenderGlobals *globals = &DAT_006471dc;
    EffectEditorSnapshot *controls = &g_effectEditorSavedSnapshot;
    FUN_00390038(reinterpret_cast<const EffectPositionControl *>(controls));
    EffMenuPosition initial = globals->current;
    resourceRunHandlerCallback(request, &initial);
    if (controls->parameters.flags & 0x60) {
        globals->current = g_effectEditorInitialVector.value;
        globals->vector = effectRenderSource()->origin;
        FUN_002f8794();
        EffMenuPosition transformed = globals->current;
        EffectEditorWords words;
        FUN_001ad5ec(controls, &transformed, &words);
        globals->current = effectRenderSource()->position;
        globals->words = words;
        FUN_001bc3e4();
    } else {
        globals->current = effectRenderSource()->position;
        globals->words = controls->parameters.fallback;
        FUN_001bc3e4();
    }
    EffMenuPosition position = globals->current;
    handlerTableCallWithValueB(request, &position);
    handlerTableCall(request, controls->parameters.scale * effectRenderSource()->scale);
    if (controls->parameters.flags & 0x100) {
        globals->current = controls->parameters.tint;
        f32 scale = controls->parameters.scale * effectRenderSource()->scale;
        globals->current.x *= scale;
        globals->current.y *= scale;
        globals->current.z *= scale;
        globals->current.w *= scale;
        EffMenuPosition tint = globals->current;
        FUN_00300908(request, &tint);
    }
    handlerTableCallWithValue(request, controls->parameters.value);
}

/* NON_MATCHING: index scheduling, catalog bound materialization and register allocation differ. */
extern "C" u32 effectEditorActivateSelection()
{
    EffectSelectionItem *item = linkedFindItemByIndex(g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0059e9a8.object.indices.extraOffset);
    g_effectEditor.selection.item = item;
    __aeabi_memcpy4(&g_effectEditorSettings, item, 0x90);
    __aeabi_memcpy4(&g_effectEditorSavedSnapshot, item, 0x80);
    g_effectEditor.selection.block = item->block;
    EffectSelectionParts *parts = FUN_002b30e4(item);
    if (parts->type != 0x1b) {
        void *data = resourceResolveHeaderPointer(g_effectEditor.selection.block);
        rt_memcpy(parts->data, data, parts->size);
    }
    if (parts->data != NULL) {
        effPartSetData(g_effectEditor.selection.block, parts->data, parts->size, parts->id);
    }
    void *instance = FUN_00243c24(g_effectEditor.selection.block);
    effectEditorApplyHandlerState(static_cast<EffectHandlerRequest *>(instance));
    g_effectEditor.selection.instance = instance;
    g_effectEditor.selection.object = findEditorTemplate(item->block);
    g_effectEditor.selection.object->context = reinterpret_cast<EffectSelectionContext *>(&DAT_0059e9a8.object);
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.active = 1;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    if (g_effectEditor.selection.resource != NULL) {
        objectRegistryInsert(g_effectEditor.selection.resource, 3);
        g_effectEditor.selection.resource = NULL;
    }
    return 0x800000;
}

extern "C" {
extern EffectEditorOptionNode DAT_0059ea50;
extern const char DAT_0053d0d8[];
EffectEditorOptions *FUN_00200bcc(EffectEditorOptions *options);
void effEditorNodeChainApply(EffectEditorOptions *options);
s32 padButtonIsPressed(u32 button);
u32 FUN_00202178(u32 button);
__weak void effectEditorTransformPosition(const EffectPositionControl *control,
    const EffMenuPosition *position, EffMenuPosition *result);
void FUN_002ffe14(const EffMenuPosition *position, u32 color,
    const EffMenuMatrix *matrix, u32 resource, f32 scale);
void FUN_002b3ed8(const EffMenuPosition *first, const EffMenuPosition *second,
    u32 color, u32 resource);
void *memAlloc(u32 heap, u32 category, u32 flags, u32 size, u32 alignment, u32 clear);
void effMenuListAppend(EffMenuNode *node, u32 list);

/* NON_MATCHING: aggregate copy shapes and vector temporary allocation differ. */
// Edit the position vector, then draw its height, ground radius and transformed endpoint.
u32 FUN_003c378c(EffectEditorSnapshot *record, s32 relative)
{
    u32 result = 1;
    if (!(DAT_0059ea50.flags & 2)) {
        if (padButtonIsPressed(1) || padButtonIsPressed(FUN_00202178(1)))
            result = 0;
    }

    g_effectEditorVector.bits = record->payload.saved;
    if (!g_effectEditor.dispatch.mode)
        FUN_00200bcc(&DAT_0059ea50);
    asdDebugHookVoid();
    effEditorNodeChainApply(&DAT_0059ea50);
    asdDebugHookVoid();
    record->payload.saved = g_effectEditorVector.bits;
    if (DAT_0059ea50.flags & 8)
        result |= 2;

    EffectRenderGlobals *globals = &DAT_006471dc;
    if ((result & 2) && (record->parameters.flags & 0x18)) {
        globals->current = g_effectEditorInitialVector.value;
        if (relative) {
            globals->vector = g_effectEditorWorkingSnapshot.initialPosition;
            FUN_002f8794();
        }
        EffMenuPosition transformed = globals->current;
        EffMenuPosition position; // The release build omits the optional transform hook.
        effectEditorTransformPosition(reinterpret_cast<const EffectPositionControl *>(record),
            &transformed, &position);
        record->parameters.position = position;
    }

    if (relative) {
        FUN_00390038(reinterpret_cast<const EffectPositionControl *>(record));
        globals->vector = g_effectEditorWorkingSnapshot.initialPosition;
        globals->current.x -= globals->vector.x;
        globals->current.y -= globals->vector.y;
        globals->current.z -= globals->vector.z;
        globals->current.w -= globals->vector.w;
    } else {
        globals->current = record->parameters.position;
    }

    EffMenuPosition offset = globals->current;
    globals->current.y = 0.0f;
    f32 radius = sqrtf(globals->current.x * globals->current.x +
        globals->current.y * globals->current.y + globals->current.z * globals->current.z);
    globals->current = g_effectEditorInitialVector.value;
    if (relative) {
        globals->vector = g_effectEditorWorkingSnapshot.initialPosition;
        FUN_002f8794();
    }

    EffMenuPosition origin = globals->current;
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

    globals->current = offset;
    globals->vector = origin;
    FUN_002f8794();
    EffMenuPosition endpoint = globals->current;
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
