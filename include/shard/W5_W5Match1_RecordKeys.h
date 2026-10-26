#ifndef SHARD_W5_W5MATCH1_RECORDKEYS_H
#define SHARD_W5_W5MATCH1_RECORDKEYS_H

#include "common.h"
#include "shard/FloatSortRecord.h"

struct ByteStateWork {
    /* 0x00 */ u8 padding[0x85];
    /* 0x85 */ u8 state;
};

struct SignedRecordKey32 {
    /* 0x00 */ u8 padding[0x20];
    /* 0x20 */ s16 key;
};

struct SoundVolumeState {
    /* 0x00 */ u8 padding;
    /* 0x01 */ u8 volume;
};

struct AsyncRequestResult {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 result;
    /* 0x08 */ u32 detail;
};

struct GxPresetState {
    /* 0x000 */ u8 padding[0x1BC];
    /* 0x1BC */ u32 nextPreset;
};

struct UnsignedRecordKey32 {
    /* 0x00 */ u8 padding[0x20];
    /* 0x20 */ u16 key;
};

struct JobStatusState {
    /* 0x00 */ u8 padding[0x10];
    /* 0x10 */ void *work;
};

struct CallbackListNode {
    /* 0x00 */ CallbackListNode *next;
    /* 0x04 */ CallbackListNode *previous;
};

struct CallbackList {
    /* 0x00 */ u32 count;
    /* 0x04 */ CallbackListNode sentinel;
};

struct CameraResourceState {
    /* 0x00 */ u32 state;
    /* 0x04 */ void *work;
};

struct MapEnemyState {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 timer;
};


struct Point2 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
};

struct SignedBytePriority {
    /* 0x00 */ u8 flags;
    /* 0x01 */ s8 primary;
    /* 0x02 */ s8 secondary;
};

struct MapObjectRequest {
    /* 0x00 */ u32 job;
    /* 0x04 */ u16 map;
    /* 0x06 */ u16 object;
    /* 0x08 */ u16 mode;
    /* 0x0A */ u16 timer;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 state;
};

struct UnsignedDivisionResult {
    u32 quotient;
    u32 remainder;
};

struct WorkCommandState {
    /* 0x00 */ u8 state;
    /* 0x01 */ u8 unk01[0x43];
    /* 0x44 */ u32 command;
    union {
        /* 0x48 */ u32 unk48;
        /* 0x48 */ void *object;
    };
    /* 0x4C */ u32 argument;
    union {
        /* 0x50 */ u8 unk50[0x18];
        struct {
            /* 0x50 */ s32 phase;
        } playback;
    };
    /* 0x68 */ u32 flags;
    /* 0x6C */ u8 unk6C[0x0A];
    /* 0x76 */ u8 complete;
};

static __inline WorkCommandState *workCommandGetSlot(WorkCommandState *slots, u32 index)
{
    return index < 4 ? &slots[index] : NULL;
}

/* The aligned timer word is inside the opaque tail; a u32 union over that odd-sized
 * array would round it up and move complete. */
static __inline u32 &workCommandTimer(WorkCommandState *slot)
{
    return *(u32 *)(slot->unk6C + 4);
}

struct GraphicsPoolEntry {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 dirty;
    /* 0x02 */ u8 unk02[0x1A];
};

struct FloatPriorityRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ f32 secondary;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ f32 primary;
};

struct LightCountState {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ s32 secondaryCount;
};

struct LightEnableState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[0x83];
    /* 0x84 */ u32 flags[2];
};

struct MapWorkEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ u32 third;
    /* 0x10 */ u16 id;
    /* 0x12 */ u16 kind;
    /* 0x14 */ f32 x;
    /* 0x18 */ f32 y;
    /* 0x1C */ f32 z;
};

struct MapWorkEntries {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 count;
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 ready;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ MapWorkEntry entries[32];
};

struct DistanceSortRecord {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 z;
    /* 0x18 */ u8 unk18[0xE4];
    /* 0xFC */ s32 height;
};

struct MapTimerEntry {
    /* 0x00 */ u32 active;
    /* 0x04 */ u8 unk04[0x24];
};

struct MapTimerBank {
    /* 0x000 */ MapTimerEntry entries[16];
    /* 0x280 */ u32 count;
};

struct MapTimerSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x2B];
    /* 0x2C */ s32 id;
};

struct MapTimerBanks {
    /* 0x0000 */ MapTimerBank banks[16];
    /* 0x2840 */ u32 count;
    /* 0x2844 */ MapTimerSlot slots[32];
};

struct GxPresetDepth {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ f32 depth;
};

struct CallbackBinding {
    /* 0x00 */ void (*callback)(void *);
    /* 0x04 */ void *context;
};

struct WorkScalar {
    /* 0x000 */ u8 unk000[0x49C];
    /* 0x49C */ f32 value;
};

struct OptionalWorkValue {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 value;
};

struct ParameterTriple {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 third;
    /* 0x0C */ u32 state;
};

struct OptionalValueOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 *value;
};

struct FixedRecord {
    u8 data[32];
};

struct FixedRecordTable {
    FixedRecord *records;
};

struct Vector4 {
    f32 x, y, z, w;
};

struct GxPresetVectors {
    /* 0x000 */ u8 unk000[0x174];
    /* 0x174 */ Vector4 vectors[4];
};

struct GfxCallbackPrefix {
    /* 0x000 */ u8 unk000[0x170];
};

/* The enable flag and callback binding at the end of the graphics context. */
struct GfxCallbackSlot {
    /* 0x0 */ u32 enabled;
    /* 0x4 */ u32 unk04;
    /* 0x8 */ CallbackBinding binding;
};

/* The slot is a second base at 0x170. */
struct GfxCallbackState : GfxCallbackPrefix, GfxCallbackSlot {
};
typedef char GfxCallbackStateSizeCheck[sizeof(GfxCallbackState) == 0x180 ? 1 : -1];

static __inline void gfxCallbackSlotSet(GfxCallbackSlot &slot, CallbackBinding binding, u32 enabled)
{
    slot.enabled = enabled;
    slot.binding = binding;
}

struct InitialWorkState {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 active;
};

struct CommandQueueDefaults {
    /* 0x00 */ u8 vtable[0x38];
    /* 0x38 */ u32 count;
    /* 0x3C */ u32 capacity;
};

struct TextDrawDefaults {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ f32 x;
    /* 0x58 */ f32 y;
};

struct ImaAdpcmContext {
    /* 0x00 */ u8 stepIndex;
    /* 0x01 */ u8 reserved;
    /* 0x02 */ u16 predictor;
};

struct ImaAdpcmState {
    /* 0x00 */ s32 predictor;
    /* 0x04 */ u32 stepIndex;
};

struct KeyedRecord {
    /* 0x000 */ u8 unk000[0xBC];
    /* 0x0BC */ u8 payload[0x8C];
};

struct WorkRange {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 limit;
    /* 0x08 */ u32 lower;
    /* 0x0C */ u32 upper;
};

struct OptionalParameterWork {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ u32 parameter;
};

struct ArchiveOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *archive;
};

struct GraphicsReadyState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 ready;
};

struct GraphicsPairState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 ready;
    /* 0x02 */ u8 unk02[0x0A];
    /* 0x0C */ CallbackBinding binding;
};

struct ScalarDirtyWork {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 previous;
    /* 0x68 */ f32 value;
    /* 0x6C */ u16 flags;
    /* 0x6E */ u8 unk6E[2];
};

struct VectorDefaultsState {
    /* 0x00 */ Vector4 first;
    /* 0x10 */ Vector4 second;
};

struct PresetEnableWords {
    /* 0x000 */ u8 unk000[0xC0];
    /* 0x0C0 */ u32 first;
    /* 0x0C4 */ u8 unk0C4[0x74];
    /* 0x138 */ u32 second;
};

struct CampWorker {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 state;
};

struct JobRecordBase {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 base;
};

struct ScriptScalarWork {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ f32 value;
    /* 0x10 */ f32 speed;
};

struct GxRatePresets {
    /* 0x000 */ u8 unk000[0x1C0];
    /* 0x1C0 */ s32 interval;
    /* 0x1C4 */ f32 depth;
};

struct HalfwordTarget {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u16 value;
};

struct ScopedHalfwordState {
    /* 0x00 */ u16 previous;
    /* 0x02 */ u16 depth;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ HalfwordTarget *target;
};

struct LookupListNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 key;
    /* 0x0C */ u8 unk0C[0x0C];
    /* 0x18 */ LookupListNode *next;
};

struct LookupList {
    LookupListNode *head;
};

struct GfxTargetParameters {
    /* 0x000 */ u8 unk000[0x15C];
    /* 0x15C */ u32 first;
    /* 0x160 */ u32 second;
};

struct MasterSoundOwner {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 unk01[0x4B];
    /* 0x4C */ s32 handle;
};

union PackedWord {
    u32 word;
    u8 bytes[4];
};

struct PackedWordPair {
    PackedWord first;
    PackedWord second;
};

struct VectorPair {
    Vector4 first;
    Vector4 second;
};

struct KeyedRecordVectorPairs {
    /* 0x000 */ u8 unk000[0xBC];
    /* 0x0BC */ VectorPair pairs[4];
    /* 0x13C */ u8 unk13C[0x0C];
};

struct TitleCommandLists {
    /* 0x00 */ u8 flags[2];
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 endList;
    /* 0x0C */ u32 beginList;
};

struct InitialRequestState {
    /* 0x00 */ u32 values[6];
    /* 0x18 */ u32 first;
    /* 0x1C */ u32 second;
    /* 0x20 */ u32 third;
};


struct RenderChannelEntry {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[0x137];
};

struct RenderChannelTable {
    /* 0x0000 */ RenderChannelEntry entries[64];
    /* 0x4E00 */ u16 selected;
    /* 0x4E02 */ u16 unk4E02;
    /* 0x4E04 */ u16 previous;
    /* 0x4E06 */ u16 mode;
};

struct RenderChannelState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 ready;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ RenderChannelTable *table;
    /* 0x08 */ void *capture;
};

struct MatrixTranslation {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 third;
    /* 0x0C */ f32 scalar;
};

struct RenderInitialState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 format;
    /* 0x08 */ u32 flags;
    /* 0x0C */ u8 unk0C[0x2C];
    /* 0x38 */ u32 mode;
    /* 0x3C */ u32 next;
    /* 0x40 */ u32 count;
    /* 0x44 */ u32 unk44;
};

struct NpcRoomState {
    /* 0x00 */ void *object;
    /* 0x04 */ u8 unk04[0xE4];
    /* 0xE8 */ u8 active;
};

#endif
