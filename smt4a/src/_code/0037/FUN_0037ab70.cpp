/* NON_MATCHING: retail builds the local stream object from the data table's words in a different order and dispatches the four stream kinds through conditional tail branches (bleq to the callee); the open/transfer/close sequence is the same. */
#include "common.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

/* The words a freshly built stream is initialised from (vtable pointer, the virtual base's
 * pointer at 0x20 and a second word at 0x24). */
typedef struct StreamTemplate {
    /* 0x00 */ u32 *vtable;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 virtualBase;
    /* 0x24 */ u32 second;
} StreamTemplate;

/* A stream object on the stack: its two vtable words plus the owner state the open call fills. */
typedef struct LocalStream {
    u32 words[2];
    u32 owner[5];
} LocalStream;

/* nn::Result style: bit 31 flags a failure. */
static __inline bool resultFailed(u32 result)
{
    return (result & 0x80000000) != 0;
}

enum {
    STREAM_ERROR = 0xE7E3FFFF   /* result for a kind that has no handler */
};

extern StreamTemplate DAT_00557fcc;

u32 FUN_002e09b4(LocalStream *stream, u32 name, u32 mode);
u32 FUN_002bee0c(LocalStream *stream);
u32 FUN_0032cab4(LocalStream *stream);
u32 FUN_002befc0(LocalStream *stream);
u32 FUN_002e0a6c(LocalStream *stream, u32 offset, u32 buffer, u32 size);
u32 FUN_002beec4(LocalStream *stream);
u32 taggedOwnerRelease2(LocalStream *stream);
u32 holderReleaseObject(LocalStream *stream);
u32 taggedOwnerRelease(LocalStream *stream);
u32 taggedObjectRelease(LocalStream *stream);
void fileHandleClose(LocalStream *stream, u32 flags);

/* Opens a stream of the given kind (0-3), transfers `size` bytes of `buffer` through it and closes
 * it. Returns 1 when every step succeeded. */
u32 FUN_0037ab70(s32 kind, u32 name, u32 buffer, u32 size)
{
    LocalStream stream = {{0, 0}, {0, 0, 0, 0, 0}};
    u32 result;

    stream.words[0] = (u32)DAT_00557fcc.vtable;
    *(u32 *)((u8 *)&stream + (s32)DAT_00557fcc.vtable[-12]) = DAT_00557fcc.virtualBase;
    stream.words[1] = DAT_00557fcc.second;

    if (kind == 0) {
        result = FUN_002e09b4(&stream, name, 2);
    } else if (kind == 1) {
        result = FUN_002bee0c(&stream);
    } else if (kind == 2) {
        result = FUN_0032cab4(&stream);
    } else if (kind == 3) {
        result = FUN_002befc0(&stream);
    } else {
        result = STREAM_ERROR;
    }
    if (!resultFailed(result)) {
        if (kind == 0) {
            result = FUN_002e0a6c(&stream, 0, buffer, size);
        } else if (kind == 1) {
            result = FUN_002beec4(&stream);
        } else if (kind == 3) {
            result = FUN_002bf040((PositionedStream *)&stream, 0, (void *)buffer, size);
        } else {
            result = STREAM_ERROR;
        }
        if (resultFailed(result)) {
            if (kind == 0) {
                taggedOwnerRelease(&stream);
            } else if (kind == 1) {
                holderReleaseObject(&stream);
            } else if (kind == 2) {
                taggedOwnerRelease2(&stream);
            } else if (kind == 3) {
                taggedObjectRelease(&stream);
            }
        } else {
            if (kind == 0) {
                result = taggedOwnerRelease(&stream);
            } else if (kind == 1) {
                result = holderReleaseObject(&stream);
            } else if (kind == 2) {
                result = taggedOwnerRelease2(&stream);
            } else if (kind == 3) {
                result = taggedObjectRelease(&stream);
            } else {
                result = STREAM_ERROR;
            }
            if (!resultFailed(result)) {
                fileHandleClose(&stream, 0);
                return 1;
            }
        }
    }
    fileHandleClose(&stream, 0);
    return 0;
}

}
