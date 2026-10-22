/* A resource slot: a typed payload released through g_handlerTable (entries of 0x44 bytes, the
 * release callback at 0x10) plus two growable buffers. */
#ifndef SHARD_RESOURCE_H
#define SHARD_RESOURCE_H

#include "common.h"

typedef struct Handler {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void (*release)(void *data);
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ void (*callback)(void *data);
    /* 0x20 */ void (*callback20)(void *data, s32 arg);
    /* 0x24 */ void (*callback24)(void *data, s32 arg);
    /* 0x28 */ void (*callback28)(void *data);
    /* 0x2C */ void (*callback2C)(void *data, u32 arg);
    /* 0x30 */ void (*callback30)(void *data, s32 arg);
    /* 0x34 */ union {
        u8 unk34[0x10];
        struct {
            u8 unk34[4];
            s32 (*isActive)(void *data);
            u8 unk3C[8];
        } status;
        struct {
            /* 0x34 */ u8 unk34BeforeDuration[0xC];
            /* 0x40 */ s32 (*duration)(void *data);
        } timeline;
    };
} Handler;                      /* 0x44 */
typedef char HandlerSizeCheck[sizeof(Handler) == 0x44 ? 1 : -1];

typedef struct Resource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 type;          /* index into g_handlerTable */
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *data;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 sizeA;
    /* 0x14 */ u32 countA;
    /* 0x18 */ void *bufferA;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u32 sizeB;
    /* 0x24 */ u32 countB;
    /* 0x28 */ void *bufferB;
} Resource;

/* Grouped resource records and the workspace-size view used by the binder. */
struct ResourceSizingRecord {
    /* 0x00 */ s16 kind;
    /* 0x02 */ u8 unk02[0x12];
};
struct ResourceSizingGroup {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 secondary;
    /* 0x07 */ u8 unk07[0xD];
    /* 0x14 */ u8 variant;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ s32 recordsOffset; /* relative to the group, not this field */
    /* 0x1C */ u32 count;

    const ResourceSizingRecord *records() const
    {
        return (const ResourceSizingRecord *)((const u8 *)this + recordsOffset);
    }
};
struct ResourceSizingState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 count;
    /* 0x0D */ u8 unk0d[3];
    /* 0x10 */ ResourceSizingGroup *groups[35];
    /* 0x9C */ u32 extraWords;
};

typedef char ResourceSizingRecordSizeCheck[sizeof(ResourceSizingRecord) == 0x14 ? 1 : -1];
typedef char ResourceSizingGroupSizeCheck[sizeof(ResourceSizingGroup) == 0x20 ? 1 : -1];
typedef char ResourceSizingStateSizeCheck[sizeof(ResourceSizingState) == 0xA0 ? 1 : -1];

extern Handler g_handlerTable[];

#endif
