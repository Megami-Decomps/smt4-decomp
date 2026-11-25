#ifndef SHARD_W5_W5MATCH1_RECORDKEYS_H
#define SHARD_W5_W5MATCH1_RECORDKEYS_H

#include "common.h"
#include "shard/FloatSortRecord.h"
#include <stddef.h>

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

struct UnsignedRecordKey32 {
    /* 0x00 */ u8 padding[0x20];
    /* 0x20 */ u16 key;
};

struct CallbackListNode {
    /* 0x00 */ CallbackListNode *next;
    /* 0x04 */ CallbackListNode *previous;
};

struct CallbackList {
    CallbackList();
    /* 0x00 */ u32 count;
    /* 0x04 */ CallbackListNode sentinel;
};

struct CameraResourceState {
    /* 0x00 */ u32 state;
    /* 0x04 */ void *work;
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
    /* 0x04 */ union { u16 map; s16 mapId; };
    /* 0x06 */ union { u16 object; s16 areaId; };
    /* 0x08 */ union { u16 mode; s16 step; };
    /* 0x0A */ union { u16 timer; s16 entryIndex; }; /* current row of the placement table */
    union {
        /* 0x0C */ u32 unk0C;
        struct {
            /* 0x0C */ s16 slot;      /* the object slot being loaded, -1 if no slot is free */
            /* 0x0E */ u8 unk0E[2];
        } loading;
    };
    /* 0x10 */ union { u32 state; s32 loadedCount; };
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

struct InitialWorkState {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 active;
};

/* g_commandQueueDefaults: the object right after _ZTV9Obj464cb0 (both games). */
struct CommandQueueDefaults {
    /* 0x00 */ u32 count;
    /* 0x04 */ u32 capacity;
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

struct JobRecordBase {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 base;
};

struct ScriptScalarWork {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ f32 value;
    /* 0x10 */ f32 speed;
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


struct RenderChannelEntry {
    /* 0x000 */ u8 active;
    /* 0x001 */ s8 textLength;
    /* 0x002 */ s8 captureLength;
    /* 0x003 */ u8 type;
    /* 0x004 */ CallbackBinding binding;
    /* 0x00C */ u16 text[126];
    /* 0x108 */ u16 captureText[24];
};

struct RenderChannelTable {
    /* 0x0000 */ RenderChannelEntry entries[64];
    /* 0x4E00 */ s16 selected;
    /* 0x4E02 */ u16 unk4E02; /* text cursor */
    /* 0x4E04 */ u16 previous;
    /* 0x4E06 */ u16 mode;
    /* 0x4E08 */ u8 unk4e08[0x24];
    /* 0x4E2C */ u32 pending;
};

struct TextHistoryCapture {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 text[24];
    /* 0x34 */ u16 count;
};

struct RenderChannelState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 ready;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ RenderChannelTable *table;
    /* 0x08 */ TextHistoryCapture *capture;
    /* 0x0C */ CallbackBinding binding;
};

typedef char RenderChannelLayout[
    sizeof(RenderChannelEntry) == 0x138 && offsetof(RenderChannelEntry, captureText) == 0x108 &&
    offsetof(RenderChannelTable, selected) == 0x4E00 && offsetof(RenderChannelTable, pending) == 0x4E2C &&
    offsetof(TextHistoryCapture, count) == 0x34 && offsetof(RenderChannelState, binding) == 0xC ? 1 : -1];

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

#endif
