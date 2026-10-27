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

extern StreamTemplate DAT_00420b20;

u32 FUN_0024ab94(LocalStream *stream, u32 name, u32 mode);
u32 archiveStreamOpenConverted(LocalStream *stream);
u32 FUN_002cbfe8(LocalStream *stream);
u32 requestSubmitRecordById(LocalStream *stream);
u32 FUN_002102ec(LocalStream *stream, u32 offset, u32 buffer, u32 size);
u32 positionedFileReadAtReport(LocalStream *stream);
u32 fileOwnerCloseA(LocalStream *stream);
u32 fileOwnerCloseB(LocalStream *stream);
u32 fileOwnerCloseC(LocalStream *stream);
u32 fileOwnerCloseD(LocalStream *stream);
void fileHandleClose(LocalStream *stream, u32 flags);

/* Opens a stream of the given kind (0-3), transfers `size` bytes of `buffer` through it and closes
 * it. Returns 1 when every step succeeded. */
u32 FUN_002f5390(s32 kind, u32 name, u32 buffer, u32 size)
{
    LocalStream stream = {{0, 0}, {0, 0, 0, 0, 0}};
    u32 result;

    stream.words[0] = (u32)DAT_00420b20.vtable;
    *(u32 *)((u8 *)&stream + (s32)DAT_00420b20.vtable[-12]) = DAT_00420b20.virtualBase;
    stream.words[1] = DAT_00420b20.second;

    if (kind == 0) {
        result = FUN_0024ab94(&stream, name, 2);
    } else if (kind == 1) {
        result = archiveStreamOpenConverted(&stream);
    } else if (kind == 2) {
        result = FUN_002cbfe8(&stream);
    } else if (!(kind == 3)) {
        result = STREAM_ERROR;
    } else {
        result = requestSubmitRecordById(&stream);
    }
    if (!resultFailed(result)) {
        if (kind == 0) {
            result = FUN_002102ec(&stream, 0, buffer, size);
        } else if (kind == 1) {
            result = positionedFileReadAtReport(&stream);
        } else if (!(kind == 3)) {
            result = STREAM_ERROR;
        } else {
            result = positionedStreamSeekTransfer((PositionedStream *)&stream, 0, (void *)buffer, size);
        }
        if (resultFailed(result)) {
            if (kind == 0) {
                fileOwnerCloseC(&stream);
            } else if (kind == 1) {
                fileOwnerCloseB(&stream);
            } else if (kind == 2) {
                fileOwnerCloseA(&stream);
            } else if (kind == 3) {
                fileOwnerCloseD(&stream);
            }
        } else {
            if (kind == 0) {
                result = fileOwnerCloseC(&stream);
            } else if (kind == 1) {
                result = fileOwnerCloseB(&stream);
            } else if (kind == 2) {
                result = fileOwnerCloseA(&stream);
            } else if (kind == 3) {
                result = fileOwnerCloseD(&stream);
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
