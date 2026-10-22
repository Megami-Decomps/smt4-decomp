#ifndef SHARD_W9_W9MATCH8_WORK_RECORDS_H
#define SHARD_W9_W9MATCH8_WORK_RECORDS_H

#include "common.h"
#include <stddef.h>
#include "shard/W9_W9Match1_PositionedLayoutTask.h"
#include "camp/RenderCtx.h"
#include "ui/UiSpriteState.h"
#include "shard/S1GfxModel.h"

/* Apocalypse task work allocated by FUN_0031ba34.
 * Descriptive field meanings are provisional; the allocation size is explicit. */
struct SpatialTaskWorkA {
    /* 0x000 */ u32 *activeFlag;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 resolvedValue;
    /* 0x00C */ u8 unk00C[0x14];
    /* 0x020 */ f32 x;
    /* 0x024 */ f32 y;
    /* 0x028 */ f32 z;
    /* 0x02C */ f32 initialValue;
    /* 0x030 */ u8 selectorByte;
    /* 0x031 */ u8 unk031[0x14];
    /* 0x045 */ u8 option;
    /* 0x046 */ u8 unk046[2];
    /* 0x048 */ f32 currentValue;
    /* 0x04C */ u8 unk04C[0x104];
    /* 0x150 */ u8 mode;
    /* 0x151 */ u8 unk151[0xB];
    /* 0x15C */ u32 slotA;
    /* 0x160 */ u8 unk160[4];
    /* 0x164 */ u32 slotB;
};

typedef char SpatialTaskWorkASizeCheck[
    sizeof(SpatialTaskWorkA) == 0x168 ? 1 : -1];
typedef char SpatialTaskWorkAHeaderOffsetsCheck[
    offsetof(SpatialTaskWorkA, activeFlag) == 0 &&
    offsetof(SpatialTaskWorkA, resolvedValue) == 8 ? 1 : -1];
typedef char SpatialTaskWorkAFloatOffsetsCheck[
    offsetof(SpatialTaskWorkA, x) == 0x20 &&
    offsetof(SpatialTaskWorkA, y) == 0x24 &&
    offsetof(SpatialTaskWorkA, z) == 0x28 &&
    offsetof(SpatialTaskWorkA, initialValue) == 0x2C &&
    offsetof(SpatialTaskWorkA, currentValue) == 0x48 ? 1 : -1];
typedef char SpatialTaskWorkAByteOffsetsCheck[
    offsetof(SpatialTaskWorkA, selectorByte) == 0x30 &&
    offsetof(SpatialTaskWorkA, option) == 0x45 &&
    offsetof(SpatialTaskWorkA, mode) == 0x150 ? 1 : -1];
typedef char SpatialTaskWorkASlotOffsetsCheck[
    offsetof(SpatialTaskWorkA, slotA) == 0x15C &&
    offsetof(SpatialTaskWorkA, slotB) == 0x164 ? 1 : -1];

/* Observed prefixes only; these sizeof checks do not assert allocation sizes. */
struct ParameterTargetPrefixIV {
    u8 unk00[0x7C];
    u32 parameters[3];
    u32 flags;
};
struct ParameterCollectionPrefixIV {
    u8 unk00[0x24];
    ParameterTargetPrefixIV **targets;
};
struct ParameterBindingPrefixIV {
    u8 unk00[8];
    ParameterCollectionPrefixIV *collection;
};
struct ParameterUpdatePrefixIV {
    u8 unk00[4];
    u32 key;
    ParameterBindingPrefixIV *binding;
    u8 unk0C[0x24];
    f32 amount;
};

typedef char ParameterTargetPrefixIVLayout[
    offsetof(ParameterTargetPrefixIV, parameters) == 0x7C &&
    offsetof(ParameterTargetPrefixIV, flags) == 0x88 &&
    sizeof(ParameterTargetPrefixIV) == 0x8C ? 1 : -1];
typedef char ParameterCollectionPrefixIVLayout[
    offsetof(ParameterCollectionPrefixIV, targets) == 0x24 &&
    sizeof(ParameterCollectionPrefixIV) == 0x28 ? 1 : -1];
typedef char ParameterBindingPrefixIVLayout[
    offsetof(ParameterBindingPrefixIV, collection) == 8 &&
    sizeof(ParameterBindingPrefixIV) == 0xC ? 1 : -1];
typedef char ParameterUpdatePrefixIVLayout[
    offsetof(ParameterUpdatePrefixIV, key) == 4 &&
    offsetof(ParameterUpdatePrefixIV, binding) == 8 &&
    offsetof(ParameterUpdatePrefixIV, amount) == 0x30 &&
    sizeof(ParameterUpdatePrefixIV) == 0x34 ? 1 : -1];

/* Observed surface prefix only; the full allocation size is unknown. */
struct CaptureSurfacePrefixA {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
};

/* Observed job-work prefix only; sizeof is not a retail object boundary. */
struct SurfaceCaptureWorkPrefixA {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ CaptureSurfacePrefixA *surface;
    /* 0x000C */ u8 unk000C[0x1408];
    /* 0x1414 */ u8 captureRequested;
    /* 0x1415 */ u8 unk1415;
    /* 0x1416 */ u8 captureResult;
    /* 0x1417 */ u8 unk1417;
    /* 0x1418 */ u8 captureComplete;
    /* 0x1419 */ u8 captureSuppressed;
    /* 0x141A */ u8 unk141A[0x33];
    /* 0x144D */ u8 captureBlocked;
};

typedef char CaptureSurfacePrefixALayoutCheck[
    offsetof(CaptureSurfacePrefixA, width) == 0x14 &&
    offsetof(CaptureSurfacePrefixA, height) == 0x18 &&
    sizeof(CaptureSurfacePrefixA) == 0x1C ? 1 : -1];

typedef char SurfaceCaptureWorkPrefixALayoutCheck[
    offsetof(SurfaceCaptureWorkPrefixA, surface) == 8 &&
    offsetof(SurfaceCaptureWorkPrefixA, captureRequested) == 0x1414 &&
    offsetof(SurfaceCaptureWorkPrefixA, captureResult) == 0x1416 &&
    offsetof(SurfaceCaptureWorkPrefixA, captureComplete) == 0x1418 &&
    offsetof(SurfaceCaptureWorkPrefixA, captureSuppressed) == 0x1419 &&
    offsetof(SurfaceCaptureWorkPrefixA, captureBlocked) == 0x144D &&
    sizeof(SurfaceCaptureWorkPrefixA) == 0x1450 ? 1 : -1];

// Accessed prefix only; 0x18 is not an inferred allocation boundary.
// No supplied canonical type identifies the object behind g_popupState.
struct MapRandomPopupPrefixA {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 phase;
    /* 0x08 */ u8 unk08[0x0C];
    /* 0x14 */ s32 contentValue;
};
typedef char MapRandomPopupPrefixALayoutCheck[
    offsetof(MapRandomPopupPrefixA, state) == 0 &&
    offsetof(MapRandomPopupPrefixA, phase) == 4 &&
    offsetof(MapRandomPopupPrefixA, unk08) == 8 &&
    offsetof(MapRandomPopupPrefixA, contentValue) == 0x14 &&
    sizeof(MapRandomPopupPrefixA) == 0x18 ? 1 : -1];

// The reverb object is used only through the SDK's pointer interface.
struct SoundReverbEffect;

// Reverb parameters and the three integers their table pointer references.
struct SoundReverbParameters {
    /* 0x00 */ s32 integerParameters[3];
    /* 0x0C */ f32 scalarParameters[2];
    /* 0x14 */ const s32 *integerTable;
    /* 0x18 */ f32 additionalScalars[2];
    /* 0x20 */ u8 flags[2];
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ s32 integerValues[3];
};

typedef char SoundReverbParametersLayoutCheck[
    sizeof(SoundReverbParameters) == 0x30 &&
    offsetof(SoundReverbParameters, integerParameters) == 0 &&
    offsetof(SoundReverbParameters, scalarParameters) == 0x0C &&
    offsetof(SoundReverbParameters, integerTable) == 0x14 &&
    offsetof(SoundReverbParameters, additionalScalars) == 0x18 &&
    offsetof(SoundReverbParameters, flags) == 0x20 &&
    offsetof(SoundReverbParameters, integerValues) == 0x24 ? 1 : -1];

struct UiLayoutResourceIV;

// Accessed prefix of a lookup result; not the full record or its stride.
struct UiLayoutEntryPrefixIV {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};
typedef char UiLayoutEntryPrefixIVLayoutCheck[
    offsetof(UiLayoutEntryPrefixIV, unk00) == 0 &&
    offsetof(UiLayoutEntryPrefixIV, x) == 8 &&
    offsetof(UiLayoutEntryPrefixIV, y) == 0xA &&
    sizeof(UiLayoutEntryPrefixIV) == 0xC ? 1 : -1];

/* Apocalypse directory-display work: accessed prefix only.
 * 0x420 is the extent of this view, not a recovered owner boundary. */
struct DirectoryDisplayStateA {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x418];
    /* 0x41C */ u32 spriteHandle;
};
typedef char DirectoryDisplayStateAPrefixLayoutCheck[
    offsetof(DirectoryDisplayStateA, flags) == 0 &&
    offsetof(DirectoryDisplayStateA, unk004) == 4 &&
    offsetof(DirectoryDisplayStateA, spriteHandle) == 0x41C &&
    sizeof(DirectoryDisplayStateA) == 0x420 ? 1 : -1];

/* Pointer-only dependency; the context's layout is not recovered here. */
struct TextLayoutContextIV;

/* Accessed lookup-result prefix, not a recovered record stride. */
struct TextLayoutEntryPrefixIV {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

typedef char TextLayoutEntryPrefixIVLayoutCheck[
    offsetof(TextLayoutEntryPrefixIV, unk00) == 0 &&
    offsetof(TextLayoutEntryPrefixIV, x) == 8 &&
    offsetof(TextLayoutEntryPrefixIV, y) == 0xA &&
    sizeof(TextLayoutEntryPrefixIV) == 0xC ? 1 : -1];

struct AsdTexture;
struct MemoryAllocator;
struct TextureObject;

/* Observed upload-result prefix; not a recovered allocation boundary. */
struct TextureUploadResourcePrefixIV {
    u8 unk00[8];
    void *data;
    AsdTexture *texture;
};
typedef char TextureUploadResourcePrefixIVLayoutCheck[
    offsetof(TextureUploadResourcePrefixIV, data) == 8 &&
    offsetof(TextureUploadResourcePrefixIV, texture) == 0xC &&
    sizeof(TextureUploadResourcePrefixIV) == 0x10 ? 1 : -1];

/* Observed owner prefix; not a recovered allocation boundary. */
struct TextureBindingPrefixIV {
    u8 unk00[8];
    TextureUploadResourcePrefixIV *resource;
    TextureObject *object;
};
typedef char TextureBindingPrefixIVLayoutCheck[
    offsetof(TextureBindingPrefixIV, resource) == 8 &&
    offsetof(TextureBindingPrefixIV, object) == 0xC &&
    sizeof(TextureBindingPrefixIV) == 0x10 ? 1 : -1];

/* Descriptor passed to FUN_0036ec8c. The trailing bytes are not initialized. */
struct TextureCreateInfoIV {
    s32 height;
    s32 width;
    u32 unk08;
    u32 unk0C;
    void *data;
    u32 hardwareFormat;
    u8 flag18;
    u8 flag19;
};
typedef char TextureCreateInfoIVLayoutCheck[
    offsetof(TextureCreateInfoIV, height) == 0 &&
    offsetof(TextureCreateInfoIV, width) == 4 &&
    offsetof(TextureCreateInfoIV, unk08) == 8 &&
    offsetof(TextureCreateInfoIV, unk0C) == 0xC &&
    offsetof(TextureCreateInfoIV, data) == 0x10 &&
    offsetof(TextureCreateInfoIV, hardwareFormat) == 0x14 &&
    offsetof(TextureCreateInfoIV, flag18) == 0x18 &&
    offsetof(TextureCreateInfoIV, flag19) == 0x19 &&
    sizeof(TextureCreateInfoIV) == 0x1C ? 1 : -1];

/* Observed array element stride, not a subsystem identification. Float
 * triplets reflect the VFP stores; no particular vector-class identity is known. */
struct EntryPoolRecordA {
    /* 0x000 */ f32 primaryVectors[8][3];
    /* 0x060 */ u8 unk060[0xC];
    /* 0x06C */ f32 vector6C[3];
    /* 0x078 */ u8 unk078[4];
    /* 0x07C */ f32 secondaryVectors[6][3];
    /* 0x0C4 */ f32 scalars[6];
    /* 0x0DC */ u8 unk0DC[0x80];
    /* 0x15C */ u16 value15C;
    /* 0x15E */ u8 unk15E[8];
    /* 0x166 */ u16 value166;
    /* 0x168 */ u16 value168;
    /* 0x16A */ u16 value16A;
    /* 0x16C */ u8 value16C;
    /* 0x16D */ u8 value16D;
    /* 0x16E */ u8 unk16E[6];
    /* 0x174 */ u32 value174;
    /* 0x178 */ u16 value178;
    /* 0x17A */ u16 value17A;
};

/* Known two-word prefix at the relocated base; not a full global boundary. */
struct EntryPoolCountersA {
    u32 first;
    u32 second;
};

typedef char EntryPoolRecordALayoutCheck[
    sizeof(EntryPoolRecordA) == 0x17C &&
    offsetof(EntryPoolRecordA, primaryVectors) == 0 &&
    offsetof(EntryPoolRecordA, vector6C) == 0x6C &&
    offsetof(EntryPoolRecordA, secondaryVectors) == 0x7C &&
    offsetof(EntryPoolRecordA, scalars) == 0xC4 &&
    offsetof(EntryPoolRecordA, value15C) == 0x15C &&
    offsetof(EntryPoolRecordA, value166) == 0x166 &&
    offsetof(EntryPoolRecordA, value168) == 0x168 &&
    offsetof(EntryPoolRecordA, value16A) == 0x16A &&
    offsetof(EntryPoolRecordA, value16C) == 0x16C &&
    offsetof(EntryPoolRecordA, value16D) == 0x16D &&
    offsetof(EntryPoolRecordA, value174) == 0x174 &&
    offsetof(EntryPoolRecordA, value178) == 0x178 &&
    offsetof(EntryPoolRecordA, value17A) == 0x17A ? 1 : -1];
typedef char EntryPoolCountersALayoutCheck[
    sizeof(EntryPoolCountersA) == 8 &&
    offsetof(EntryPoolCountersA, first) == 0 &&
    offsetof(EntryPoolCountersA, second) == 4 ? 1 : -1];

struct RenderUpdateBatchA;

/* Observed destination prefix, not the destination's complete allocation. */
struct RenderUpdateOutputPrefixA {
    u8 enabled;
    u8 status;
    u8 attribute0;
    u8 attribute1;
    u8 attribute2;
};

/* Opaque source storage; no matrix representation is established here.
 * This prefix's end does not establish the context object's end. */
struct RenderUpdateContextPrefixA {
    u8 unk000[0xA8];
    u8 transform[0x40];
};

/* Observed Apocalypse state prefix, not a recovered allocation boundary. */
struct RenderUpdateStatePrefixA {
    u8 unk000[4];
    u32 flags;
    u8 unk008[0x10];
    RenderUpdateOutputPrefixA *output;
    u8 unk01C[0xB8];
    f32 value3;
    f32 value4;
    u8 unk0DC[4];
    RenderUpdateBatchA *batch;
    u8 unk0E4[0x98];
    f32 value0;
    f32 value1;
    u8 unk184[8];
    f32 value2;
    u8 attribute0;
    u8 attribute1;
    u8 attribute2;
    u8 mode;
};

typedef char RenderUpdateOutputPrefixALayoutCheck[
    sizeof(RenderUpdateOutputPrefixA) == 5 &&
    offsetof(RenderUpdateOutputPrefixA, enabled) == 0 &&
    offsetof(RenderUpdateOutputPrefixA, status) == 1 &&
    offsetof(RenderUpdateOutputPrefixA, attribute0) == 2 &&
    offsetof(RenderUpdateOutputPrefixA, attribute1) == 3 &&
    offsetof(RenderUpdateOutputPrefixA, attribute2) == 4 ? 1 : -1];
typedef char RenderUpdateContextPrefixALayoutCheck[
    sizeof(RenderUpdateContextPrefixA) == 0xE8 &&
    offsetof(RenderUpdateContextPrefixA, transform) == 0xA8 ? 1 : -1];
typedef char RenderUpdateStatePrefixALayoutCheck[
    sizeof(RenderUpdateStatePrefixA) == 0x194 &&
    offsetof(RenderUpdateStatePrefixA, flags) == 4 &&
    offsetof(RenderUpdateStatePrefixA, output) == 0x18 &&
    offsetof(RenderUpdateStatePrefixA, value3) == 0xD4 &&
    offsetof(RenderUpdateStatePrefixA, value4) == 0xD8 &&
    offsetof(RenderUpdateStatePrefixA, batch) == 0xE0 &&
    offsetof(RenderUpdateStatePrefixA, value0) == 0x17C &&
    offsetof(RenderUpdateStatePrefixA, value1) == 0x180 &&
    offsetof(RenderUpdateStatePrefixA, value2) == 0x18C &&
    offsetof(RenderUpdateStatePrefixA, attribute0) == 0x190 &&
    offsetof(RenderUpdateStatePrefixA, attribute1) == 0x191 &&
    offsetof(RenderUpdateStatePrefixA, attribute2) == 0x192 &&
    offsetof(RenderUpdateStatePrefixA, mode) == 0x193 ? 1 : -1];

/* Pointer-only dependency; allocation size does not recover its members. */
struct EnemyDrawResourcesA;

/* Observed EnemyDraw owner prefix, not the complete object's boundary. */
struct EnemyDrawResourceOwnerPrefixA {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ EnemyDrawResourcesA *resources;
};

typedef char EnemyDrawResourceOwnerPrefixAOffsetCheck[
    offsetof(EnemyDrawResourceOwnerPrefixA, resources) == 0x44 ? 1 : -1];
typedef char EnemyDrawResourceOwnerPrefixASizeCheck[
    sizeof(EnemyDrawResourceOwnerPrefixA) == 0x48 ? 1 : -1];

/* Accessed prefix only, not the boundary of the enclosing request.
 * The offset-4 value is kept as a raw ABI word; its pointee type is unknown.
 */
struct CecMessageBoxRequestPrefixIV {
    /* 0x00 */ u32 unknown00;
    /* 0x04 */ u32 messageData;
};

typedef char CecMessageBoxRequestPrefixIVLayoutCheck[
    offsetof(CecMessageBoxRequestPrefixIV, unknown00) == 0 &&
    offsetof(CecMessageBoxRequestPrefixIV, messageData) == 4 &&
    sizeof(CecMessageBoxRequestPrefixIV) == 8 ? 1 : -1];

// Observed prefix of the IV record returned by FUN_00267144.
// Neither the full record size nor its table stride is established here.
struct MapAvailabilityRecordPrefixIV {
    /* 0x00 */ s8 status;
    /* 0x01 */ u8 unk01[0x11];
    /* 0x12 */ s16 mapId;
    /* 0x14 */ s16 requiredFlag;
    /* 0x16 */ s16 blockingFlag;
};

typedef char MapAvailabilityRecordPrefixIVLayoutCheck[
    offsetof(MapAvailabilityRecordPrefixIV, status) == 0 &&
    offsetof(MapAvailabilityRecordPrefixIV, unk01) == 1 &&
    offsetof(MapAvailabilityRecordPrefixIV, mapId) == 0x12 &&
    offsetof(MapAvailabilityRecordPrefixIV, requiredFlag) == 0x14 &&
    offsetof(MapAvailabilityRecordPrefixIV, blockingFlag) == 0x16 &&
    sizeof(MapAvailabilityRecordPrefixIV) == 0x18 ? 1 : -1];

// Observed prefixes only; these sizes do not establish allocation boundaries.
// Role names describe this function's accesses, not recovered native classes.
struct JobAnimationTargetPrefixA {
    u8 unk00[0xE0];
    u32 enabled; // 0xE0
};

struct JobAnimationParametersPrefixA {
    u8 unk00[0x54];
    u32 enabled; // 0x54
    f32 phase;   // 0x58
    f32 angle;   // 0x5C
};

struct JobAnimationWorkPrefixA {
    JobAnimationTargetPrefixA *target; // 0x00
    JobAnimationParametersPrefixA *animation; // 0x04
    u8 mode; // 0x08
    u8 unk09[0x23];
    u8 unk2C[4]; // address passed to FUN_00163aa4; extent unknown
    s32 code; // 0x30
};

typedef char JobAnimationTargetPrefixALayoutCheck[
    offsetof(JobAnimationTargetPrefixA, enabled) == 0xE0 &&
    sizeof(JobAnimationTargetPrefixA) == 0xE4 ? 1 : -1];
typedef char JobAnimationParametersPrefixALayoutCheck[
    offsetof(JobAnimationParametersPrefixA, enabled) == 0x54 &&
    offsetof(JobAnimationParametersPrefixA, phase) == 0x58 &&
    offsetof(JobAnimationParametersPrefixA, angle) == 0x5C &&
    sizeof(JobAnimationParametersPrefixA) == 0x60 ? 1 : -1];
typedef char JobAnimationWorkPrefixALayoutCheck[
    offsetof(JobAnimationWorkPrefixA, target) == 0 &&
    offsetof(JobAnimationWorkPrefixA, animation) == 4 &&
    offsetof(JobAnimationWorkPrefixA, mode) == 8 &&
    offsetof(JobAnimationWorkPrefixA, unk2C) == 0x2C &&
    offsetof(JobAnimationWorkPrefixA, code) == 0x30 &&
    sizeof(JobAnimationWorkPrefixA) == 0x34 ? 1 : -1];

/* Observed prefixes only; these sizes do not establish allocation boundaries.
 * No identity with the supplied canonical graphics objects is established. */
struct GfxReleaseStatePrefixIV {
    /* 0x00 */ u32 primaryActive;
    /* 0x04 */ u32 secondaryActive;
    /* 0x08 */ u8 unk08[0x0C];
    /* 0x14 */ u32 releaseValue;
    /* 0x18 */ s32 mode;
};

struct GfxReleaseContextPrefixIV {
    /* 0x00 */ u32 owner;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ GfxReleaseStatePrefixIV *state;
};

/* Three explicit arguments in the supplied draft; result unused here.
 * The callback implementation is not available to verify its signature. */
extern "C" {
typedef void (*GfxReleaseCallbackIV)(u32 releaseValue, u32 operation,
                                     u32 owner);
}

typedef char GfxReleaseStatePrefixIVLayoutCheck[
    offsetof(GfxReleaseStatePrefixIV, primaryActive) == 0 &&
    offsetof(GfxReleaseStatePrefixIV, secondaryActive) == 4 &&
    offsetof(GfxReleaseStatePrefixIV, unk08) == 8 &&
    offsetof(GfxReleaseStatePrefixIV, releaseValue) == 0x14 &&
    offsetof(GfxReleaseStatePrefixIV, mode) == 0x18 &&
    sizeof(GfxReleaseStatePrefixIV) == 0x1C ? 1 : -1];

typedef char GfxReleaseContextPrefixIVLayoutCheck[
    offsetof(GfxReleaseContextPrefixIV, owner) == 0 &&
    offsetof(GfxReleaseContextPrefixIV, unk04) == 4 &&
    offsetof(GfxReleaseContextPrefixIV, state) == 8 &&
    sizeof(GfxReleaseContextPrefixIV) == 0x0C ? 1 : -1];

// Accessed request prefix, not the native object's full boundary.
struct ModelRemovalRequestPrefixIV {
    u8 unk00[0x0C];
    ModelSlot *entry;
};

typedef char ModelRemovalRequestPrefixIVLayoutCheck[
    offsetof(ModelRemovalRequestPrefixIV, entry) == 0x0C &&
    sizeof(ModelRemovalRequestPrefixIV) == 0x10 ? 1 : -1];

// Four-byte stride observed at block + 0x200; no entry count is recovered.
struct GameFlagEntryIV {
    u8 flags;
    u8 value;
    u8 secondaryFlags;
    u8 unk03;
};
typedef char GameFlagEntryIVLayoutCheck[
    sizeof(GameFlagEntryIV) == 4 &&
    offsetof(GameFlagEntryIV, flags) == 0 &&
    offsetof(GameFlagEntryIV, value) == 1 &&
    offsetof(GameFlagEntryIV, secondaryFlags) == 2 &&
    offsetof(GameFlagEntryIV, unk03) == 3 ? 1 : -1];

// Observed prefix only, not the size of the backing allocation.
// unk200 bridges to the independently observed halfword; it does not
// establish the extent or boundary of the indexed entry storage.
struct GameFlagBlockPrefixIV {
    /* 0x000 */ u8 packedFlags[0x200];
    /* 0x200 */ u8 unk200[0x640];
    /* 0x840 */ u16 selectedEntryIndex;
};
typedef char GameFlagBlockPrefixIVLayoutCheck[
    sizeof(GameFlagBlockPrefixIV) == 0x842 &&
    offsetof(GameFlagBlockPrefixIV, packedFlags) == 0 &&
    offsetof(GameFlagBlockPrefixIV, unk200) == 0x200 &&
    offsetof(GameFlagBlockPrefixIV, selectedEntryIndex) == 0x840 ? 1 : -1];

/* Apocalypse allocation initialized by FUN_00238e20.
 * Output addresses within unk000 do not establish output-object boundaries.
 */
struct InitializedLayoutTaskA {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ PositionedLayoutParameters parameters;
    /* 0x16C */ PositionedLayoutData layout;
    /* 0x21C */ u32 parameter4;
    /* 0x220 */ u32 parameter8;
    /* 0x224 */ u32 parameter1;
    /* 0x228 */ u32 parameter5;
    /* 0x22C */ u8 parameter6;
    /* 0x22D */ u8 unk22D[3];
    /* 0x230 */ u32 state230;
    /* 0x234 */ u32 state234;
    /* 0x238 */ u8 unk238[0xC8];
    /* 0x300 */ u16 frame;
    /* 0x302 */ u16 frameCopy;
};
typedef char InitializedLayoutTaskALayoutCheck[
    offsetof(InitializedLayoutTaskA, unk000) == 0 &&
    offsetof(InitializedLayoutTaskA, parameters) == 0x38 &&
    offsetof(InitializedLayoutTaskA, layout) == 0x16C &&
    offsetof(InitializedLayoutTaskA, parameter4) == 0x21C &&
    offsetof(InitializedLayoutTaskA, parameter8) == 0x220 &&
    offsetof(InitializedLayoutTaskA, parameter1) == 0x224 &&
    offsetof(InitializedLayoutTaskA, parameter5) == 0x228 &&
    offsetof(InitializedLayoutTaskA, parameter6) == 0x22C &&
    offsetof(InitializedLayoutTaskA, state230) == 0x230 &&
    offsetof(InitializedLayoutTaskA, state234) == 0x234 &&
    offsetof(InitializedLayoutTaskA, frame) == 0x300 &&
    offsetof(InitializedLayoutTaskA, frameCopy) == 0x302 &&
    sizeof(InitializedLayoutTaskA) == 0x304 ? 1 : -1];

/* Observed prefix of g_btlAction in Apocalypse, not its full extent. */
struct BattleActionSelectionMaskPrefixA {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u64 requiredAny;
    /* 0x18 */ u8 unk18[0x28];
    /* 0x40 */ u64 excluded;
};
typedef char BattleActionSelectionMaskPrefixALayoutCheck[
    offsetof(BattleActionSelectionMaskPrefixA, requiredAny) == 0x10 &&
    offsetof(BattleActionSelectionMaskPrefixA, excluded) == 0x40 &&
    sizeof(BattleActionSelectionMaskPrefixA) == 0x48 ? 1 : -1];

// Observed title-scene prefix, not the full scene allocation or its boundary.
struct TitleSceneRectanglePrefixIV {
    /* 0x0000 */ u8 unk0000[0x132C];
    /* 0x132C */ RenderStateStack rectangleOrigin;
    /* 0x134C */ RenderStateStack rectangleExtent;
};

typedef char TitleSceneRectangleStackLayoutCheck[
    sizeof(RenderStateStack) == 0x20 &&
    offsetof(RenderStateStack, count) == 0 &&
    offsetof(RenderStateStack, entries) == 8 &&
    offsetof(RenderStateStack, dirty) == 0x18 &&
    offsetof(RenderStateStack, apply) == 0x1C ? 1 : -1];
typedef char TitleSceneRectanglePrefixIVLayoutCheck[
    offsetof(TitleSceneRectanglePrefixIV, rectangleOrigin) == 0x132C &&
    offsetof(TitleSceneRectanglePrefixIV, rectangleExtent) == 0x134C &&
    sizeof(TitleSceneRectanglePrefixIV) == 0x136C ? 1 : -1];

/* Pointer-only dependency: this function does not recover its layout. */
struct FlaggedEntry;

/* Readable prefix only, not the extent of the containing object.
 * The callee argument is independently formed at object offset 0x10.
 */
struct EntryCountdownPrefixIV {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 resetSplit;
    /* 0x08 */ s32 resetTotal;
};

typedef char EntryCountdownPrefixIVLayoutCheck[
    offsetof(EntryCountdownPrefixIV, mode) == 0 &&
    offsetof(EntryCountdownPrefixIV, unk01) == 1 &&
    offsetof(EntryCountdownPrefixIV, resetSplit) == 4 &&
    offsetof(EntryCountdownPrefixIV, resetTotal) == 8 &&
    sizeof(EntryCountdownPrefixIV) == 0xC ? 1 : -1];

// Recovered prefix only, not a complete object or an operation-storage boundary.
// The role names describe this function's arithmetic, not recovered field names.
struct ResourceValueCyclePrefixA {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 split;
    /* 0x08 */ s32 total;
};

typedef char ResourceValueCyclePrefixALayoutCheck[
    offsetof(ResourceValueCyclePrefixA, mode) == 0 &&
    offsetof(ResourceValueCyclePrefixA, unk01) == 1 &&
    offsetof(ResourceValueCyclePrefixA, split) == 4 &&
    offsetof(ResourceValueCyclePrefixA, total) == 8 &&
    sizeof(ResourceValueCyclePrefixA) == 0xC ? 1 : -1];

/* Observed IV global prefixes, not recovered allocation boundaries.
 * The final padding in each sizeof is only natural C++ tail padding. */
struct NngxCommandPrefixIV {
    u32 word00;
    u32 word04;
    u32 word08;
    u8 unknown0c[0x20];
    u32 word2c;
    u32 word30;
    u32 word34;
    u32 word38;
    u32 word3c;
    u32 word40;
    u32 word44;
    u8 byte48;
    u8 unknown49[3];
    u32 word4c;
    u8 byte50;
    u8 unknown51[7];
    u32 word58;
    u32 word5c;
    u8 unknown60[4];
    u32 word64;
    u32 word68;
    u32 word6c;
    u8 byte70;
};

struct NngxInitializationPrefixIV {
    u8 initialized;
    u8 unknown01;
    s8 acquireMode;
    u8 configurationInitialized;
    const char *configuration;
    u8 unknown08[8];
    u32 configuredGpu; /* DAT_00471a80 aliases this member. */
    u32 acquiredGpu;   /* g_nngxGpu aliases this member. */
    u8 unknown18[4];
    NngxCommandPrefixIV *commandState;
};

typedef char NngxCommandPrefixIVLayoutCheck[
    sizeof(NngxCommandPrefixIV) == 0x74 &&
    offsetof(NngxCommandPrefixIV, word00) == 0x00 &&
    offsetof(NngxCommandPrefixIV, word04) == 0x04 &&
    offsetof(NngxCommandPrefixIV, word08) == 0x08 &&
    offsetof(NngxCommandPrefixIV, word2c) == 0x2c &&
    offsetof(NngxCommandPrefixIV, word30) == 0x30 &&
    offsetof(NngxCommandPrefixIV, word34) == 0x34 &&
    offsetof(NngxCommandPrefixIV, word38) == 0x38 &&
    offsetof(NngxCommandPrefixIV, word3c) == 0x3c &&
    offsetof(NngxCommandPrefixIV, word40) == 0x40 &&
    offsetof(NngxCommandPrefixIV, word44) == 0x44 &&
    offsetof(NngxCommandPrefixIV, byte48) == 0x48 &&
    offsetof(NngxCommandPrefixIV, word4c) == 0x4c &&
    offsetof(NngxCommandPrefixIV, byte50) == 0x50 &&
    offsetof(NngxCommandPrefixIV, word58) == 0x58 &&
    offsetof(NngxCommandPrefixIV, word5c) == 0x5c &&
    offsetof(NngxCommandPrefixIV, word64) == 0x64 &&
    offsetof(NngxCommandPrefixIV, word68) == 0x68 &&
    offsetof(NngxCommandPrefixIV, word6c) == 0x6c &&
    offsetof(NngxCommandPrefixIV, byte70) == 0x70 ? 1 : -1];

typedef char NngxInitializationPrefixIVLayoutCheck[
    sizeof(NngxInitializationPrefixIV) == 0x20 &&
    offsetof(NngxInitializationPrefixIV, initialized) == 0 &&
    offsetof(NngxInitializationPrefixIV, acquireMode) == 2 &&
    offsetof(NngxInitializationPrefixIV, configurationInitialized) == 3 &&
    offsetof(NngxInitializationPrefixIV, configuration) == 4 &&
    offsetof(NngxInitializationPrefixIV, configuredGpu) == 0x10 &&
    offsetof(NngxInitializationPrefixIV, acquiredGpu) == 0x14 &&
    offsetof(NngxInitializationPrefixIV, commandState) == 0x1c ? 1 : -1];

/* Accessed prefix of the Apocalypse game-over work allocation.
 * This caller allocates 0x3C bytes, but interprets only through 0x23.
 * sizeof this prefix is not the size of the complete work object. */
struct GameOverWorkPrefixA {
    /* 0x00 */ u32 processToken;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 flag08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 value0C;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 value18;
    /* 0x1C */ u32 value1C;
    /* 0x20 */ u32 value20;
};

typedef char GameOverWorkPrefixALayoutCheck[
    sizeof(GameOverWorkPrefixA) == 0x24 &&
    offsetof(GameOverWorkPrefixA, processToken) == 0x00 &&
    offsetof(GameOverWorkPrefixA, unk04) == 0x04 &&
    offsetof(GameOverWorkPrefixA, flag08) == 0x08 &&
    offsetof(GameOverWorkPrefixA, unk09) == 0x09 &&
    offsetof(GameOverWorkPrefixA, value0C) == 0x0C &&
    offsetof(GameOverWorkPrefixA, unk10) == 0x10 &&
    offsetof(GameOverWorkPrefixA, value18) == 0x18 &&
    offsetof(GameOverWorkPrefixA, value1C) == 0x1C &&
    offsetof(GameOverWorkPrefixA, value20) == 0x20 ? 1 : -1];

// Observed prefix returned by FUN_001834a4 for the selection layouts.
// Its end is not a recovered allocation size or table stride.
struct UniteSelectionLayoutPrefixA {
    u8 unk00[8];
    s16 x;
    s16 y;
};
typedef char UniteSelectionLayoutPrefixACheck[
    offsetof(UniteSelectionLayoutPrefixA, x) == 8 &&
    offsetof(UniteSelectionLayoutPrefixA, y) == 0xA &&
    sizeof(UniteSelectionLayoutPrefixA) == 0xC ? 1 : -1];

/* Accessed prefix only; sizeof is not an allocation boundary. */
struct SelectionStatePrefixIV {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 initialId;
    /* 0x08 */ s16 initialIndex;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 currentId;
    /* 0x10 */ s16 currentIndex;
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ u32 secondaryId;
    /* 0x18 */ s16 secondaryIndex;
};
typedef char SelectionStatePrefixIVLayoutCheck[
    offsetof(SelectionStatePrefixIV, initialId) == 4 &&
    offsetof(SelectionStatePrefixIV, initialIndex) == 8 &&
    offsetof(SelectionStatePrefixIV, currentId) == 0xC &&
    offsetof(SelectionStatePrefixIV, currentIndex) == 0x10 &&
    offsetof(SelectionStatePrefixIV, secondaryId) == 0x14 &&
    offsetof(SelectionStatePrefixIV, secondaryIndex) == 0x18 &&
    sizeof(SelectionStatePrefixIV) == 0x1C ? 1 : -1];

/* Prefix at the relocated g_countdown base; only +4 is read here. */
struct CountdownContextPrefixIV {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SelectionStatePrefixIV *selection;
};
typedef char CountdownContextPrefixIVLayoutCheck[
    offsetof(CountdownContextPrefixIV, selection) == 4 &&
    sizeof(CountdownContextPrefixIV) == 8 ? 1 : -1];

/* Recovered selection prefix, not the complete selected-slot record. */
struct SaveSlotSelectionPrefixA {
    u8 unk000[0x12c];
    u16 selectionId; /* 0x12c */
};
typedef char SaveSlotSelectionPrefixALayoutCheck[
    offsetof(SaveSlotSelectionPrefixA, selectionId) == 0x12c &&
    sizeof(SaveSlotSelectionPrefixA) == 0x12e ? 1 : -1];

/* Recovered UI prefix only; its sizeof is not a retail allocation boundary. */
struct SaveSlotTransitionPrefixA {
    u8 unk0000[0x1344];
    UiSpriteState firstSprite;  /* 0x1344 */
    UiSpriteState secondSprite; /* 0x13d0 */
    u8 unk145c[0x2420];
    s32 currentState; /* 0x387c */
    u8 unk3880[8];
    u32 pendingState; /* 0x3888 */
    u8 unk388c[4];
    u32 transitionMode; /* 0x3890 */
    u8 unk3894[0x1f];
    u8 transitionFlag; /* 0x38b3 */
    u8 unk38b4;
    u8 zeroInputCase; /* 0x38b5 */
    u8 option; /* 0x38b6 */
    u8 unk38b7[0x12f1];
    u8 selectedSlotEligible; /* 0x4ba8 */
};
typedef char SaveSlotTransitionPrefixALayoutCheck[
    offsetof(SaveSlotTransitionPrefixA, firstSprite) == 0x1344 &&
    offsetof(SaveSlotTransitionPrefixA, secondSprite) == 0x13d0 &&
    offsetof(SaveSlotTransitionPrefixA, currentState) == 0x387c &&
    offsetof(SaveSlotTransitionPrefixA, pendingState) == 0x3888 &&
    offsetof(SaveSlotTransitionPrefixA, transitionMode) == 0x3890 &&
    offsetof(SaveSlotTransitionPrefixA, transitionFlag) == 0x38b3 &&
    offsetof(SaveSlotTransitionPrefixA, zeroInputCase) == 0x38b5 &&
    offsetof(SaveSlotTransitionPrefixA, option) == 0x38b6 &&
    offsetof(SaveSlotTransitionPrefixA, selectedSlotEligible) == 0x4ba8 &&
    sizeof(SaveSlotTransitionPrefixA) == 0x4bac ? 1 : -1];

/* Observed prefix only, not a recovered allocation size or array boundary.
 * The work passed to the two callees remains opaque. */
struct SequentialAnimationPrefixA {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ u32 activeState;
    /* 0x000C */ u8 unk000C[0xBC];
    /* 0x00C8 */ u8 introWork[0x8A];
    /* 0x0152 */ s8 introFinished;
    /* 0x0153 */ u8 unk0153[0x89A];
    /* 0x09ED */ s8 completion;
    /* 0x09EE */ u8 unk09EE[0x626];
    /* 0x1014 */ s32 progress;
    /* 0x1018 */ u8 unk1018[8];
    /* 0x1020 */ s32 textureId;
};

typedef char SequentialAnimationPrefixAOffsetsCheck[
    offsetof(SequentialAnimationPrefixA, activeState) == 8 &&
    offsetof(SequentialAnimationPrefixA, introWork) == 0xC8 &&
    offsetof(SequentialAnimationPrefixA, introFinished) == 0x152 &&
    offsetof(SequentialAnimationPrefixA, completion) == 0x9ED &&
    offsetof(SequentialAnimationPrefixA, progress) == 0x1014 &&
    offsetof(SequentialAnimationPrefixA, textureId) == 0x1020 &&
    sizeof(SequentialAnimationPrefixA) == 0x1024 ? 1 : -1];

/* Eight opaque argument bytes; the VFP copy does not identify float data. */
struct TextureDrawPayloadIV {
    u32 words[2];
};

/* Observed prefix only; sizeof is not a recovered placement-record stride. */
struct TexturePlacementPrefixIV {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 y;
    /* 0x04 */ u16 mode;
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ u8 flags;
};

/* The indexing arithmetic establishes this table's 0x14-byte stride. */
struct TextureTableEntryIV {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ TexturePlacementPrefixIV *placement;
    /* 0x10 */ u8 unk10[4];
};

/* Observed file prefix, not a claim about the full file object's extent. */
struct TextureTableFilePrefixIV {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TextureTableEntryIV **entries;
};

/* Only the initialized request prefix is recovered. Bytes 0x1C..0x2B
 * are intentionally left indeterminate. The 0x40-byte stack allocation
 * does not establish the request's full extent. */
struct TextureDrawRequestPrefixIV {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 argument;
    /* 0x08 */ TextureDrawPayloadIV payload;
    /* 0x10 */ u32 reservedValue;
    /* 0x14 */ s32 x;
    /* 0x18 */ s32 y;
    /* 0x1C */ u8 untouched1C[0x10];
    /* 0x2C */ u16 horizontalUnit;
    /* 0x2E */ u16 verticalUnit;
};

typedef char TextureDrawPayloadIVLayoutCheck[
    sizeof(TextureDrawPayloadIV) == 8 &&
    offsetof(TextureDrawPayloadIV, words) == 0 ? 1 : -1];
typedef char TexturePlacementPrefixIVLayoutCheck[
    sizeof(TexturePlacementPrefixIV) == 0xE &&
    offsetof(TexturePlacementPrefixIV, x) == 0 &&
    offsetof(TexturePlacementPrefixIV, y) == 2 &&
    offsetof(TexturePlacementPrefixIV, mode) == 4 &&
    offsetof(TexturePlacementPrefixIV, unk06) == 6 &&
    offsetof(TexturePlacementPrefixIV, flags) == 0xC ? 1 : -1];
typedef char TextureTableEntryIVLayoutCheck[
    sizeof(TextureTableEntryIV) == 0x14 &&
    offsetof(TextureTableEntryIV, unk00) == 0 &&
    offsetof(TextureTableEntryIV, placement) == 0xC &&
    offsetof(TextureTableEntryIV, unk10) == 0x10 ? 1 : -1];
typedef char TextureTableFilePrefixIVLayoutCheck[
    sizeof(TextureTableFilePrefixIV) == 8 &&
    offsetof(TextureTableFilePrefixIV, unk00) == 0 &&
    offsetof(TextureTableFilePrefixIV, entries) == 4 ? 1 : -1];
typedef char TextureDrawRequestPrefixIVLayoutCheck[
    sizeof(TextureDrawRequestPrefixIV) == 0x30 &&
    offsetof(TextureDrawRequestPrefixIV, flags) == 0 &&
    offsetof(TextureDrawRequestPrefixIV, argument) == 4 &&
    offsetof(TextureDrawRequestPrefixIV, payload) == 8 &&
    offsetof(TextureDrawRequestPrefixIV, reservedValue) == 0x10 &&
    offsetof(TextureDrawRequestPrefixIV, x) == 0x14 &&
    offsetof(TextureDrawRequestPrefixIV, y) == 0x18 &&
    offsetof(TextureDrawRequestPrefixIV, untouched1C) == 0x1C &&
    offsetof(TextureDrawRequestPrefixIV, horizontalUnit) == 0x2C &&
    offsetof(TextureDrawRequestPrefixIV, verticalUnit) == 0x2E ? 1 : -1];

// Observed prefixes, not recovered allocation sizes or sprite-array bounds.
// Sprite storage overlaps the opaque regions and some named transition storage.
struct SaveLoadTransitionPrefixA {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 completionFlag;
    /* 0x005 */ u8 unk005[2];
    /* 0x007 */ u8 currentState;
    /* 0x008 */ u32 stateCounter;
    /* 0x00C */ u8 pendingState;
    /* 0x00D */ u8 previousState;
    /* 0x00E */ u8 unk00E[0xA];
    /* 0x018 */ s32 spriteCount;
    /* 0x01C */ u8 unk01C[0x2DC];
    /* 0x2F8 */ u32 selectedValue;
    /* 0x2FC */ u8 unk2FC[0x324];
    /* 0x620 */ u32 transitionCounter;
    /* 0x624 */ u8 unk624[0xC8];
    /* 0x6EC */ u32 transitionValue0;
    /* 0x6F0 */ u32 transitionValue1;
    /* 0x6F4 */ f32 transitionProgress;
};

struct SaveLoadUiSharedPrefixA {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 selectedValue;
};

typedef char SaveLoadTransitionPrefixAHeadCheck[
    offsetof(SaveLoadTransitionPrefixA, completionFlag) == 4 &&
    offsetof(SaveLoadTransitionPrefixA, currentState) == 7 &&
    offsetof(SaveLoadTransitionPrefixA, stateCounter) == 8 &&
    offsetof(SaveLoadTransitionPrefixA, pendingState) == 0xC &&
    offsetof(SaveLoadTransitionPrefixA, previousState) == 0xD &&
    offsetof(SaveLoadTransitionPrefixA, spriteCount) == 0x18 ? 1 : -1];
typedef char SaveLoadTransitionPrefixATailCheck[
    offsetof(SaveLoadTransitionPrefixA, selectedValue) == 0x2F8 &&
    offsetof(SaveLoadTransitionPrefixA, transitionCounter) == 0x620 &&
    offsetof(SaveLoadTransitionPrefixA, transitionValue0) == 0x6EC &&
    offsetof(SaveLoadTransitionPrefixA, transitionValue1) == 0x6F0 &&
    offsetof(SaveLoadTransitionPrefixA, transitionProgress) == 0x6F4 &&
    sizeof(SaveLoadTransitionPrefixA) == 0x6F8 ? 1 : -1];
typedef char SaveLoadUiSharedPrefixACheck[
    offsetof(SaveLoadUiSharedPrefixA, selectedValue) == 0x14 &&
    sizeof(SaveLoadUiSharedPrefixA) == 0x18 ? 1 : -1];

/* Observed input prefixes only: sizeof does not establish retail object bounds.
 * Count-related names describe this caller's use, not a recovered API contract. */
struct ParticleDefinitionPrefixIV {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 primaryCount;
    /* 0x24 */ u32 countMultiplier;
    /* 0x28 */ u8 unk28[0x90];
    /* 0xB8 */ u32 fallbackCount;
};

struct ParticleResourcePrefixIV {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u8 unk02[0x22];
    /* 0x24 */ ParticleDefinitionPrefixIV *definition;
};

struct ParticleSourcePrefixIV {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ ParticleResourcePrefixIV *resource;
    /* 0x50 */ void *auxiliary;
};

/* This caller allocates and clears exactly 0x5C bytes. */
struct ParticleInstanceIV {
    /* 0x00 */ u32 count;
    /* 0x04 */ s32 index;
    /* 0x08 */ f32 scale;
    /* 0x0C */ u8 unk0C[2];
    /* 0x0E */ u8 flags;
    /* 0x0F */ u8 unk0F[0x3D];
    /* 0x4C */ void *objectBuffer;
    /* 0x50 */ void *auxiliary;
    /* 0x54 */ u8 unk54[8];
};

typedef char ParticleDefinitionPrefixIVLayoutCheck[
    offsetof(ParticleDefinitionPrefixIV, primaryCount) == 0x20 &&
    offsetof(ParticleDefinitionPrefixIV, countMultiplier) == 0x24 &&
    offsetof(ParticleDefinitionPrefixIV, fallbackCount) == 0xB8 &&
    sizeof(ParticleDefinitionPrefixIV) == 0xBC ? 1 : -1];
typedef char ParticleResourcePrefixIVLayoutCheck[
    offsetof(ParticleResourcePrefixIV, kind) == 0 &&
    offsetof(ParticleResourcePrefixIV, definition) == 0x24 &&
    sizeof(ParticleResourcePrefixIV) == 0x28 ? 1 : -1];
typedef char ParticleSourcePrefixIVLayoutCheck[
    offsetof(ParticleSourcePrefixIV, resource) == 0x4C &&
    offsetof(ParticleSourcePrefixIV, auxiliary) == 0x50 &&
    sizeof(ParticleSourcePrefixIV) == 0x54 ? 1 : -1];
typedef char ParticleInstanceIVLayoutCheck[
    offsetof(ParticleInstanceIV, count) == 0 &&
    offsetof(ParticleInstanceIV, index) == 4 &&
    offsetof(ParticleInstanceIV, scale) == 8 &&
    offsetof(ParticleInstanceIV, flags) == 0x0E &&
    offsetof(ParticleInstanceIV, objectBuffer) == 0x4C &&
    offsetof(ParticleInstanceIV, auxiliary) == 0x50 &&
    sizeof(ParticleInstanceIV) == 0x5C ? 1 : -1];

/* Observed prefixes, not recovered native object boundaries.
 * Names describe use in FUN_002720d4, not native type identity. */
struct ParticleCapacityPrefixA {
    u8 unk00[0x20];
    u32 primaryCount;
    u32 countMultiplier;
    u8 unk28[0x90];
    u32 fallbackCount;
};

struct ParticleResourcePrefixA {
    u16 resourceId;
    u8 unk02[0x22];
    ParticleCapacityPrefixA *capacity;
};

struct ParticleSourcePrefixA {
    u8 unk00[0x4C];
    ParticleResourcePrefixA *resource;
    void *auxiliary;
};

/* This function allocates and clears exactly 0x5C bytes. */
struct ParticleInstanceA {
    u32 count;
    s32 index;
    f32 scale;
    u8 unk0C[2];
    u8 flags;
    u8 unk0F[0x3D];
    void *objectBuffer;
    void *auxiliary;
    u8 unk54[8];
};

typedef char ParticleCapacityPrefixALayoutCheck[
    offsetof(ParticleCapacityPrefixA, primaryCount) == 0x20 &&
    offsetof(ParticleCapacityPrefixA, countMultiplier) == 0x24 &&
    offsetof(ParticleCapacityPrefixA, fallbackCount) == 0xB8 &&
    sizeof(ParticleCapacityPrefixA) == 0xBC ? 1 : -1];
typedef char ParticleResourcePrefixALayoutCheck[
    offsetof(ParticleResourcePrefixA, resourceId) == 0 &&
    offsetof(ParticleResourcePrefixA, capacity) == 0x24 &&
    sizeof(ParticleResourcePrefixA) == 0x28 ? 1 : -1];
typedef char ParticleSourcePrefixALayoutCheck[
    offsetof(ParticleSourcePrefixA, resource) == 0x4C &&
    offsetof(ParticleSourcePrefixA, auxiliary) == 0x50 &&
    sizeof(ParticleSourcePrefixA) == 0x54 ? 1 : -1];
typedef char ParticleInstanceALayoutCheck[
    offsetof(ParticleInstanceA, count) == 0 &&
    offsetof(ParticleInstanceA, index) == 4 &&
    offsetof(ParticleInstanceA, scale) == 8 &&
    offsetof(ParticleInstanceA, flags) == 0x0E &&
    offsetof(ParticleInstanceA, objectBuffer) == 0x4C &&
    offsetof(ParticleInstanceA, auxiliary) == 0x50 &&
    sizeof(ParticleInstanceA) == 0x5C ? 1 : -1];

/* Observed command-submission prefix in Apocalypse.
 * This is not a recovered full object size or a resource-array boundary.
 * Selector names describe their uses in FUN_00157e98 only.
 */
struct ModelCommandPrefixA {
    /* 0x000 */ u8 unk000[0x9c];
    /* 0x09c */ s32 resourceIndex;
    /* 0x0a0 */ u32 count;
    /* 0x0a4 */ u8 unk0a4[0x0e];
    /* 0x0b2 */ u8 longCommandSelector;
    /* 0x0b3 */ u8 unk0b3[7];
    /* 0x0ba */ u8 shortCommandSelector;
};

typedef char ModelCommandPrefixALayoutCheck[
    offsetof(ModelCommandPrefixA, resourceIndex) == 0x9c &&
    offsetof(ModelCommandPrefixA, count) == 0xa0 &&
    offsetof(ModelCommandPrefixA, longCommandSelector) == 0xb2 &&
    offsetof(ModelCommandPrefixA, shortCommandSelector) == 0xba &&
    sizeof(ModelCommandPrefixA) == 0xbc ? 1 : -1];

/* Observed prefix of the record returned by FUN_002e26c4 in Apocalypse.
 * This describes the accessed prefix, not the complete allocation extent. */
struct FlagGatePrefixA {
    /* 0x00 */ u8 unk00[0x56];
    /* 0x56 */ u16 flagId;
};
typedef char FlagGatePrefixALayoutCheck[
    offsetof(FlagGatePrefixA, flagId) == 0x56 &&
    sizeof(FlagGatePrefixA) == 0x58 ? 1 : -1];

/* Observed prefix of the record returned by FUN_001ad9b4 in Apocalypse.
 * This describes the accessed prefix, not the complete allocation extent. */
struct EntryAttributePrefixA {
    /* 0x00 */ u8 unk00[7];
    /* 0x07 */ u8 attributeFlags;
};
typedef char EntryAttributePrefixALayoutCheck[
    offsetof(EntryAttributePrefixA, attributeFlags) == 7 &&
    sizeof(EntryAttributePrefixA) == 8 ? 1 : -1];

struct TextLayoutContextA;

/* Accessed owner prefix only; not a complete object or an embedding boundary. */
struct PanelTextOwnerPrefixA {
    u8 unk00[0x95];
    u8 allowTextLookup; /* 0x95 */
};
typedef char PanelTextOwnerPrefixALayoutCheck[
    offsetof(PanelTextOwnerPrefixA, allowTextLookup) == 0x95 &&
    sizeof(PanelTextOwnerPrefixA) == 0x96 ? 1 : -1];

/* Accessed layout-entry prefix only; sizeof is not a record stride. */
struct PanelTextLayoutEntryPrefixA {
    u8 unk00[8];
    s16 x; /* 0x08 */
    s16 y; /* 0x0A */
};
typedef char PanelTextLayoutEntryPrefixALayoutCheck[
    offsetof(PanelTextLayoutEntryPrefixA, x) == 8 &&
    offsetof(PanelTextLayoutEntryPrefixA, y) == 0xA &&
    sizeof(PanelTextLayoutEntryPrefixA) == 0xC ? 1 : -1];

/* Accessed prefix at DAT_0057f0ac; the complete global extent is unknown. */
struct PanelTextDefaultsPrefixA {
    u32 unk00;
    u32 fallbackTextValue; /* 0x04 */
};
typedef char PanelTextDefaultsPrefixALayoutCheck[
    offsetof(PanelTextDefaultsPrefixA, fallbackTextValue) == 4 &&
    sizeof(PanelTextDefaultsPrefixA) == 8 ? 1 : -1];

/* Observed input prefix only; the complete caller-owned object's extent is unknown. */
struct RectangleDrawInputPrefixIV {
    /* 0x00 */ u32 color;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ f32 left;
    /* 0x0C */ f32 top;
    /* 0x10 */ f32 right;
    /* 0x14 */ f32 bottom;
};
typedef char RectangleDrawInputPrefixIVLayoutCheck[
    offsetof(RectangleDrawInputPrefixIV, color) == 0 &&
    offsetof(RectangleDrawInputPrefixIV, unk04) == 4 &&
    offsetof(RectangleDrawInputPrefixIV, left) == 8 &&
    offsetof(RectangleDrawInputPrefixIV, top) == 0xC &&
    offsetof(RectangleDrawInputPrefixIV, right) == 0x10 &&
    offsetof(RectangleDrawInputPrefixIV, bottom) == 0x14 &&
    sizeof(RectangleDrawInputPrefixIV) == 0x18 ? 1 : -1];

// Observed prefix of SMT IV's g_camp object; not its complete extent.
// The supplied CampStateA is an Apocalypse layout, not this object layout.
struct CampHelpPrefixIV {
    /* 0x00 */ u8 unknown00[0x98];
    /* 0x98 */ u8 navigationMode;
    /* 0x99 */ u8 unknown99[0x12];
    /* 0xAB */ u8 specialHelpActive;
    /* 0xAC */ s8 helpCategory;
    /* 0xAD */ s8 helpSelection;
};

typedef char CampHelpPrefixIVLayoutCheck[
    offsetof(CampHelpPrefixIV, navigationMode) == 0x98 &&
    offsetof(CampHelpPrefixIV, specialHelpActive) == 0xAB &&
    offsetof(CampHelpPrefixIV, helpCategory) == 0xAC &&
    offsetof(CampHelpPrefixIV, helpSelection) == 0xAD &&
    sizeof(CampHelpPrefixIV) == 0xAE ? 1 : -1];

// Accessed prefix of a table 05 combination result, not a full table stride.
struct DevilCombinationTableEntryPrefixIV {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 result;
};
typedef char DevilCombinationTableEntryPrefixIVLayoutCheck[
    offsetof(DevilCombinationTableEntryPrefixIV, unk00) == 0 &&
    offsetof(DevilCombinationTableEntryPrefixIV, result) == 2 &&
    sizeof(DevilCombinationTableEntryPrefixIV) == 4 ? 1 : -1];

/* Observed text-draw prefix only; text[1] does not establish capacity
 * or the end of the owning allocation. */
struct TextDrawStatePrefixA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 resource;
    /* 0x54 */ u32 enabled;
    /* 0x58 */ f32 scale;
    /* 0x5C */ char text[1];
};
typedef char TextDrawStatePrefixALayoutCheck[
    offsetof(TextDrawStatePrefixA, unk00) == 0 &&
    offsetof(TextDrawStatePrefixA, resource) == 0x50 &&
    offsetof(TextDrawStatePrefixA, enabled) == 0x54 &&
    offsetof(TextDrawStatePrefixA, scale) == 0x58 &&
    offsetof(TextDrawStatePrefixA, text) == 0x5C &&
    sizeof(TextDrawStatePrefixA) == 0x60 ? 1 : -1];

/* Observed prefix of the defaults global, not its complete extent. */
struct TextDrawDefaultsPrefixA {
    /* 0x00 */ u8 adjustmentEnabled;
    /* 0x01 */ u8 unk01[11];
    /* 0x0C */ u32 colorBits;
};
typedef char TextDrawDefaultsPrefixALayoutCheck[
    offsetof(TextDrawDefaultsPrefixA, adjustmentEnabled) == 0 &&
    offsetof(TextDrawDefaultsPrefixA, unk01) == 1 &&
    offsetof(TextDrawDefaultsPrefixA, colorBits) == 0xC &&
    sizeof(TextDrawDefaultsPrefixA) == 0x10 ? 1 : -1];

// Observed button-help state prefix in Apocalypse, not an allocation boundary.
struct ButtonHelpStatePrefixA {
    /* 0x000 */ u8 unk000[0x5ea];
    /* 0x5EA */ u8 selectionActive;
    /* 0x5EB */ u8 unk5EB[0x8d];
    /* 0x678 */ u32 directory;
    /* 0x67C */ u8 refreshRequested;
};

typedef char ButtonHelpStatePrefixALayoutCheck[
    offsetof(ButtonHelpStatePrefixA, selectionActive) == 0x5ea &&
    offsetof(ButtonHelpStatePrefixA, directory) == 0x678 &&
    offsetof(ButtonHelpStatePrefixA, refreshRequested) == 0x67c &&
    sizeof(ButtonHelpStatePrefixA) == 0x680 ? 1 : -1];

// Only the global's observed prefix is represented.
struct ButtonHelpGlobalsPrefixA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ButtonHelpStatePrefixA *state;
};

typedef char ButtonHelpGlobalsPrefixALayoutCheck[
    offsetof(ButtonHelpGlobalsPrefixA, state) == 4 &&
    sizeof(ButtonHelpGlobalsPrefixA) == 8 ? 1 : -1];

/* Accessed prefix only; neither the record extent nor its trailing text length is known. */
struct ResourceDescriptorRecordPrefixA {
    u8 unk00[0x0c];
    u32 identifier;
    u32 attributes;
};
typedef char ResourceDescriptorRecordPrefixALayoutCheck[
    offsetof(ResourceDescriptorRecordPrefixA, unk00) == 0 &&
    offsetof(ResourceDescriptorRecordPrefixA, identifier) == 0x0c &&
    offsetof(ResourceDescriptorRecordPrefixA, attributes) == 0x10 &&
    sizeof(ResourceDescriptorRecordPrefixA) == 0x14 ? 1 : -1];

/* Accessed prefix of DAT_0061b000, not the extent initialized by initBlockE30. */
struct ResourceDescriptorPrefixA {
    u8 unk00[8];
    u32 packedIdentifier;
    u32 formatFlags;
    u32 parsedLow;
    u32 parsedHigh;
    u32 value;
};
typedef char ResourceDescriptorPrefixALayoutCheck[
    offsetof(ResourceDescriptorPrefixA, unk00) == 0 &&
    offsetof(ResourceDescriptorPrefixA, packedIdentifier) == 8 &&
    offsetof(ResourceDescriptorPrefixA, formatFlags) == 0x0c &&
    offsetof(ResourceDescriptorPrefixA, parsedLow) == 0x10 &&
    offsetof(ResourceDescriptorPrefixA, parsedHigh) == 0x14 &&
    offsetof(ResourceDescriptorPrefixA, value) == 0x18 &&
    sizeof(ResourceDescriptorPrefixA) == 0x1c ? 1 : -1];

// Table 4, subtable 1: the search stride is explicitly 0x3C.
// This is not the canonical 0x40-byte Table04Record or Table04ExtraRecord.
struct Table4SearchRecordIV {
    u8 unk00[0x20];
    u16 id;
    u8 unk22[0x16];
    u32 flags;
};
typedef char Table4SearchRecordIVLayoutCheck[
    offsetof(Table4SearchRecordIV, id) == 0x20 &&
    offsetof(Table4SearchRecordIV, flags) == 0x38 &&
    sizeof(Table4SearchRecordIV) == 0x3C ? 1 : -1];

// Observed prefix returned by FUN_002ae164, not a recovered object boundary.
// Only even byte positions in slotBytes are read here; no slot semantics
// or independent two-byte record boundaries are asserted.
struct RecordSlotQueryPrefixIV {
    u8 unk00[0x38];
    u32 flags;
    u8 unk3C[0x1C];
    u8 slotBytes[0x10];
};
typedef char RecordSlotQueryPrefixIVLayoutCheck[
    offsetof(RecordSlotQueryPrefixIV, flags) == 0x38 &&
    offsetof(RecordSlotQueryPrefixIV, slotBytes) == 0x58 &&
    sizeof(RecordSlotQueryPrefixIV) == 0x68 ? 1 : -1];

/* Observed prefix of g_btlTalkBustUp's IV object, not its allocation size.
 * No identified canonical type describes this object. */
struct BattleTalkBustUpPrefixIV {
    /* 0x000 */ u8 unk000[0x2E8];
    /* 0x2E8 */ u32 state;
    /* 0x2EC */ u32 stateCounter;
    /* 0x2F0 */ u32 recordValue;
    /* 0x2F4 */ u8 unk2F4[4];
    /* 0x2F8 */ u32 textureEntry;
    /* 0x2FC */ u8 unk2FC[0xC];
    /* 0x308 */ s32 devilId;
};
typedef char BattleTalkBustUpPrefixIVLayoutCheck[
    offsetof(BattleTalkBustUpPrefixIV, state) == 0x2E8 &&
    offsetof(BattleTalkBustUpPrefixIV, stateCounter) == 0x2EC &&
    offsetof(BattleTalkBustUpPrefixIV, recordValue) == 0x2F0 &&
    offsetof(BattleTalkBustUpPrefixIV, textureEntry) == 0x2F8 &&
    offsetof(BattleTalkBustUpPrefixIV, devilId) == 0x308 &&
    sizeof(BattleTalkBustUpPrefixIV) == 0x30C ? 1 : -1];

// Accessed prefix of FUN_00184310's returned record in Apocalypse.
// Comparison-role names do not imply recovered database field meanings.
// sizeof describes this view, not the full underlying record or its stride.
struct UniteSortRecordPrefixA {
    /* 0x00 */ u16 descendingKey;
    /* 0x02 */ u8 categoryKey;
    /* 0x03 */ u8 unk03[3];
    /* 0x06 */ u16 ascendingKey;
};

typedef char UniteSortRecordPrefixALayoutCheck[
    offsetof(UniteSortRecordPrefixA, descendingKey) == 0 &&
    offsetof(UniteSortRecordPrefixA, categoryKey) == 2 &&
    offsetof(UniteSortRecordPrefixA, unk03) == 3 &&
    offsetof(UniteSortRecordPrefixA, ascendingKey) == 6 &&
    sizeof(UniteSortRecordPrefixA) == 8 ? 1 : -1];

/* Accessed prefix of the Apocalypse pick-object controller.
 * The native allocation boundary is not recovered. The script pointer
 * exposes only the first word read by this caller, not a complete script.
 */
struct PickObjectEndPrefixA {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 phase;
    /* 0x00C */ u8 unk00C[0x2A8];
    /* 0x2B4 */ u32 *script;
};

typedef char PickObjectEndPrefixALayoutCheck[
    offsetof(PickObjectEndPrefixA, unk000) == 0 &&
    offsetof(PickObjectEndPrefixA, state) == 4 &&
    offsetof(PickObjectEndPrefixA, phase) == 8 &&
    offsetof(PickObjectEndPrefixA, unk00C) == 0xC &&
    offsetof(PickObjectEndPrefixA, script) == 0x2B4 &&
    sizeof(PickObjectEndPrefixA) == 0x2B8 ? 1 : -1];

#endif
