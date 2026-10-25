#include "util/EffMenuListAppend.h"
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
extern EffectEditorDefaultSlot DAT_0044f858;
extern EffectSelectionCatalogEntry *DAT_0044f4d4[13];
extern EffectRenderGlobals DAT_004ea81c;
void __aeabi_memcpy4(void *, const void *, u32);
void randomStateSeed(u32, u32);
EffectSelectionItem *linkedFindItemByIndex(void *, s32);
void *rt_memcpy(void *, const void *, u32);
EffectSelectionParts *FUN_00246854(EffectSelectionItem *);
void *resourceResolveHeaderPointer(EffectSelectionBlock *);
void effPartsSetData(EffectSelectionBlock *, void *, u32, u16);
void *effBlockCreateFromBlock(EffectSelectionBlock *);
void resourceQueueDeferredDestroy(void *, s32);
u32 FUN_00323a08(EffectEditorSnapshot *, s32);
void FUN_002496cc(const EffectPositionControl *);
void requestHandlerDispatch(EffectHandlerRequest *, const EffMenuPosition *);
void FUN_00249678();
void FUN_0025c8f0(EffectEditorSnapshot *, const EffMenuPosition *, EffectEditorWords *);
void FUN_002a2c00();
void handlerTableCallWithValueB(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCall(EffectHandlerRequest *, f32);
void FUN_0021a4dc(EffectHandlerRequest *, const EffMenuPosition *);
void handlerTableCallWithValue(EffectHandlerRequest *, u32);
void effectEditorApplyHandlerState(EffectHandlerRequest *);
extern const u8 DAT_00400001;
extern const u8 DAT_00400002;
void FUN_002430c8(const char *, u32, FileDialogResult *);
void *FUN_001e1a70(const char *);
void registrationEntryInsert(u32, s32);
void FUN_002fc1a8();
void FUN_002c2044(void *, s32);
void FUN_002c1edc(void *, const PhaseVector *, const PhaseVector *, const PhaseVector *);
void FUN_002c1e30(void *, u32, f32, f32, f32, f32);
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
    FUN_002430c8("effect_editor/", 0x10, &dialog);
    if (dialog.status == 2) {
        state = 0x400000;
    } else if (dialog.status == 1) {
        if (g_effectEditor.selection.list != NULL) {
            registrationEntryInsert((u32)g_effectEditor.selection.list, 3);
        }
        libc_strcpy(reinterpret_cast<unsigned int *>(g_effectEditorResourceName), reinterpret_cast<unsigned int *>(dialog.name));
        void* data = FUN_001e1a70(dialog.path);
        g_effectEditor.selection.list = data;
        __aeabi_memcpy4(&g_effectEditorWorkingSnapshot, data, 0x80);
        state = (u32)&DAT_00400002;
        g_effectEditor.selection.index = 0;
        DAT_0044f858.object.indices.extraOffset = 0;
    }
    return state;
}

/* NON_MATCHING: vector initialization grouping and camera argument-base recovery differ. */
extern "C" void FUN_001dce30()
{
    randomStateSeed(0, 0x12345678);
    FUN_002fc1a8();
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
    FUN_002c2044(&g_effectEditorCamera, 1);
    FUN_002c1edc(&g_effectEditorCamera, &g_effectEditorCameraDefaults.eye, &g_effectEditorCameraDefaults.target, &g_effectEditorCameraDefaults.up);
    FUN_002c1e30(&g_effectEditorCamera, 1, 30.0f, 20.0f, 25600.0f, 5.0f / 3.0f);
    FUN_00298d50(&g_effectEditorCamera);
    struct StartupView {
        u8 unk00[7];
        u8 first;
        u8 second;
        u8 unk09[0x1f];
        void *resource;
    };
    // The default resource's storage extends past the shared menu-state prefix.
    struct StorageView { u8 unk000[0xda0]; u8 resource[1]; };
    typedef char EditorStartupOffsets[offsetof(StartupView, first) == 7 &&
        offsetof(StartupView, second) == 8 && offsetof(StartupView, resource) == 0x28 &&
        offsetof(StorageView, resource) == 0xda0 ? 1 : -1];
    StartupView *startup = reinterpret_cast<StartupView *>(&g_effectEditor);
    startup->resource = reinterpret_cast<StorageView *>(&g_effectEditor)->resource;
    g_effectEditor.selection.index = 0;
    g_effectEditorResourceName[0] = 0;
    startup->second = 0;
    startup->first = 0;
    g_effectEditor.dispatch.mode = 0;
    g_effectEditor.dispatch.inhibited = 0;
    g_effectEditorInitialVector.setIdentity();
    floatPairStore(0.0f, 0.0f);
}

/* NON_MATCHING: aggregate transfer classes and temporary/register allocation differ. */
extern "C" void effectEditorApplyHandlerState(EffectHandlerRequest *request)
{
    EffectRenderGlobals *globals = &DAT_004ea81c;
    EffectEditorSnapshot *controls = &g_effectEditorSavedSnapshot;
    FUN_002496cc(reinterpret_cast<const EffectPositionControl *>(controls));
    EffMenuPosition initial = globals->current;
    requestHandlerDispatch(request, &initial);
    if (controls->parameters.flags & 0x60) {
        globals->current = g_effectEditorInitialVector.value;
        globals->vector = effectRenderSource()->origin;
        FUN_00249678();
        EffMenuPosition transformed = globals->current;
        EffectEditorWords words;
        FUN_0025c8f0(controls, &transformed, &words);
        globals->current = effectRenderSource()->position;
        globals->words = words;
        FUN_002a2c00();
    } else {
        globals->current = effectRenderSource()->position;
        globals->words = controls->parameters.fallback;
        FUN_002a2c00();
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
        FUN_0021a4dc(request, &tint);
    }
    handlerTableCallWithValue(request, controls->parameters.value);
}

/* NON_MATCHING: catalog search register allocation and final reset-store grouping differ. */
extern "C" u32 effectEditorActivateSelection()
{
    s32 index = g_effectEditor.selection.index + DAT_0044f858.object.indices.extraOffset;
    EffectSelectionItem *item = linkedFindItemByIndex(g_effectEditor.selection.list, index);
    g_effectEditor.selection.item = item;
    __aeabi_memcpy4(&g_effectEditorSettings, item, 0x90);
    __aeabi_memcpy4(&g_effectEditorSavedSnapshot, item, 0x80);
    g_effectEditor.selection.block = item->block;
    EffectSelectionParts *parts = FUN_00246854(item);
    if (parts->type != 0x1b) {
        void *data = resourceResolveHeaderPointer(g_effectEditor.selection.block);
        rt_memcpy(parts->data, data, parts->size);
    }
    if (parts->data != NULL) {
        effPartsSetData(g_effectEditor.selection.block, parts->data, parts->size, parts->id);
    }
    void *instance = effBlockCreateFromBlock(g_effectEditor.selection.block);
    effectEditorApplyHandlerState(static_cast<EffectHandlerRequest *>(instance));
    g_effectEditor.selection.instance = instance;
    g_effectEditor.selection.object = findEditorTemplate(DAT_0044f4d4, item->block->type, item->block->id, 13);
    g_effectEditor.selection.object->context = reinterpret_cast<EffectSelectionContext *>(&DAT_0044f858.object);
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.active = 1;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    if (g_effectEditor.selection.resource != NULL) {
        resourceQueueDeferredDestroy(g_effectEditor.selection.resource, 3);
        g_effectEditor.selection.resource = NULL;
    }
    return 0x800000;
}

extern "C" {
extern EffectEditorOptionNode DAT_0044f900;
extern const char DAT_0040930c[];
EffectEditorOptions *FUN_0024dd90(EffectEditorOptions *options);
void effEditorNodeChainApply(EffectEditorOptions *options);
s32 padIsButtonPressed(u32 button);
u32 padAlternateButtonIndex(u32 button);
__weak void effectEditorTransformPosition(const EffectPositionControl *control,
    const EffMenuPosition *position, EffMenuPosition *result);
void FUN_0021a250(const EffMenuPosition *position, u32 color,
    const EffMenuMatrix *matrix, u32 resource, f32 scale);
void FUN_00243224(const EffMenuPosition *first, const EffMenuPosition *second,
    u32 color, u32 resource);
void *memAlloc(u32 heap, u32 category, u32 flags, u32 size, u32 alignment, u32 clear);

/* NON_MATCHING: aggregate copy shapes and vector temporary allocation differ. */
// Edit the position vector, then draw its height, ground radius and transformed endpoint.
u32 FUN_00323a08(EffectEditorSnapshot *record, s32 relative)
{
    u32 result = 1;
    if (!(DAT_0044f900.flags & 2)) {
        if (padIsButtonPressed(1) || padIsButtonPressed(padAlternateButtonIndex(1)))
            result = 0;
    }

    g_effectEditorVector.bits = record->payload.saved;
    if (!g_effectEditor.dispatch.mode)
        FUN_0024dd90(&DAT_0044f900);
    asdDebugHookVoid();
    effEditorNodeChainApply(&DAT_0044f900);
    asdDebugHookVoid();
    record->payload.saved = g_effectEditorVector.bits;
    if (DAT_0044f900.flags & 8)
        result |= 2;

    EffectRenderGlobals *globals = &DAT_004ea81c;
    if ((result & 2) && (record->parameters.flags & 0x18)) {
        globals->current = g_effectEditorInitialVector.value;
        if (relative) {
            globals->vector = g_effectEditorWorkingSnapshot.initialPosition;
            FUN_00249678();
        }
        EffMenuPosition transformed = globals->current;
        EffMenuPosition position; // The release build omits the optional transform hook.
        effectEditorTransformPosition(reinterpret_cast<const EffectPositionControl *>(record),
            &transformed, &position);
        record->parameters.position = position;
    }

    if (relative) {
        FUN_002496cc(reinterpret_cast<const EffectPositionControl *>(record));
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
        FUN_00249678();
    }

    EffMenuPosition origin = globals->current;
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
        FUN_00243224(&ground, &elevated, 0xff00c0c0, 0);
    }

    globals->current = offset;
    globals->vector = origin;
    FUN_00249678();
    EffMenuPosition endpoint = globals->current;
    FUN_00243224(&elevated, &endpoint, 0xff00c0c0, 0);
    FUN_00243224(&ground, &endpoint, 0xff00c0c0, 0);

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
