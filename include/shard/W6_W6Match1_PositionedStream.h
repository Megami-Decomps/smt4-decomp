#ifndef SHARD_W6_W6MATCH1_POSITIONEDSTREAM_H
#define SHARD_W6_W6MATCH1_POSITIONEDSTREAM_H

#include "common.h"
#include <stddef.h>

struct PositionedStream;
struct PositionedStreamVtable {
    u8 unk00[0x18];
    u32 (*seek)(PositionedStream* stream, u64 offset); // 0x18
    u8 unk1c[0x0c];
    u32 (*transfer)(PositionedStream* stream, u32* completed, void* buffer, u32 size); // 0x28
};
struct PositionedResizeVtable : PositionedStreamVtable {
    /* 0x2C */ void *unk2C[4];
    /* 0x3C */ u32 (*resize)(PositionedStream *stream, u64 size);
};
struct PositionedStream {
    PositionedStreamVtable* vtable;
};
struct PositionedFileStream : PositionedStream {
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 handle;
};
typedef char PositionedFileStreamLayoutCheck[sizeof(PositionedStream) == 4 &&
    offsetof(PositionedStreamVtable, seek) == 0x18 &&
    offsetof(PositionedStreamVtable, transfer) == 0x28 &&
    offsetof(PositionedFileStream, handle) == 8 && sizeof(PositionedFileStream) == 0xc ? 1 : -1];
typedef char PositionedResizeSlotCheck[offsetof(PositionedResizeVtable, resize) == 0x3c &&
    sizeof(PositionedResizeVtable) == 0x40 ? 1 : -1];

extern "C" {
u32 positionedStreamSeekTransfer(PositionedStream* stream, u32 offset, void* buffer, u32 size);
u32 positionedStreamSeekTransfer(PositionedStream* stream, u32 offset, void* buffer, u32 size);
}

#ifdef __cplusplus
extern "C" {
#endif

u8 *FUN_00200c80(s32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_002b5c88(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_002cc228(u8 character, s32 alternate);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void scrCommMessageSetMode(s32 value);

#ifdef __cplusplus
}
#endif

#endif
