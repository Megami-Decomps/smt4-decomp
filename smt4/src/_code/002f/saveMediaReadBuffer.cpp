/* NON_MATCHING: all 143 instructions match retail (LocalStream RAII + open/readAt/close methods); only block placement of the read-failure close cases (C/B/A) vs the success-close dispatch header differs. */
#include "common.h"
#include "nn/Result.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

/* The words a freshly built stream is initialized from (vtable pointer, the virtual base's
 * pointer at 0x20 and a second word at 0x24). */
typedef struct StreamTemplate {
    /* 0x00 */ u32 *vtable;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 virtualBase;
    /* 0x24 */ u32 second;
} StreamTemplate;

struct LocalStream;

extern StreamTemplate DAT_00420b20;

nn::Result romFileStreamOpen(LocalStream *stream, u32 name, u32 mode);
nn::Result archiveStreamOpenConverted(LocalStream *stream, u32 name, u32 mode);
nn::Result romFileOpenForWrite(LocalStream *stream, u32 name, u32 mode);
nn::Result requestSubmitRecordById(LocalStream *stream, u32 name, u32 mode);
nn::Result FUN_002102ec(LocalStream *stream, u32 offset, u32 buffer, u32 size);
nn::Result positionedFileReadAtReport(LocalStream *stream, u32 offset, u32 buffer, u32 size);
nn::Result fileOwnerCloseA(LocalStream *stream);
nn::Result fileOwnerCloseB(LocalStream *stream);
nn::Result fileOwnerCloseC(LocalStream *stream);
nn::Result fileOwnerCloseD(LocalStream *stream);
void fileHandleClose(LocalStream *stream, u32 flags);

} /* extern "C" */

/* A stream object on the stack with RAII close and virtual-base vtable setup (shared with FUN_002d5e44). */
struct LocalStream {
    /* 0x00 */ u32 words[2];
    /* 0x08 */ u32 owner[5];

    LocalStream()
    {
        owner[0] = 0;
        owner[1] = 0;
        owner[2] = 0;
        owner[3] = 0;
        owner[4] = 0;
        words[0] = (u32)DAT_00420b20.vtable;
        *(u32 *)((u8 *)this + ((s32 *)words[0])[-12]) = DAT_00420b20.virtualBase;
        words[1] = DAT_00420b20.second;
    }

    ~LocalStream()
    {
        fileHandleClose(this, 0);
    }

    nn::Result open(s32 kind, u32 name, u32 mode)
    {
        nn::Result result;
        switch (kind) {
        case 0:
            result = romFileStreamOpen(this, name, mode);
            break;
        case 1:
            result = archiveStreamOpenConverted(this, name, mode);
            break;
        case 2:
            result = romFileOpenForWrite(this, name, mode);
            break;
        case 3:
            result = requestSubmitRecordById(this, name, mode);
            break;
        }
        return result;
    }

    nn::Result readAt(s32 kind, u32 offset, u32 buffer, u32 size)
    {
        nn::Result result;
        switch (kind) {
        case 0:
            result = FUN_002102ec(this, offset, buffer, size);
            break;
        case 1:
            result = positionedFileReadAtReport(this, offset, buffer, size);
            break;
        case 2:
            break;
        case 3:
            result = positionedStreamSeekTransfer((PositionedStream *)this, offset, (void *)buffer, size);
            break;
        }
        return result;
    }

    nn::Result close(s32 kind)
    {
        nn::Result result;
        switch (kind) {
        case 0:
            result = fileOwnerCloseC(this);
            break;
        case 1:
            result = fileOwnerCloseB(this);
            break;
        case 2:
            result = fileOwnerCloseA(this);
            break;
        case 3:
            result = fileOwnerCloseD(this);
            break;
        }
        return result;
    }
};

/* Opens a stream of the given kind (0-3), transfers `size` bytes of `buffer` through it and closes
 * it. Returns 1 when every step succeeded. */
extern "C" u32 saveMediaReadBuffer(s32 kind, u32 name, u32 buffer, u32 size)
{
    LocalStream stream;
    s32 result = stream.open(kind, name, 2);
    if ((result & (s32)0x80000000) < 0) {
        return 0;
    }
    result = stream.readAt(kind, 0, buffer, size);
    if ((result & (s32)0x80000000) < 0) {
        stream.close(kind);
        return 0;
    }
    result = stream.close(kind);
    if ((result & (s32)0x80000000) < 0) {
        return 0;
    }
    return 1;
}
