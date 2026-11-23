/* NON_MATCHING: LocalStream RAII + open/create/writeAt/close and nnResultModule/nnResultDescriptionBits match 195 of 196 instructions (same as smt4 twin); only one prologue `mov r2, sp; mov r3, r2` differs (shifting branch targets by 4 bytes). */
#include "common.h"
#include "sys/FilePaths.h"

extern "C" {

/* The words a freshly built stream is initialized from (vtable pointer, the virtual base's
 * pointer at 0x20 and a second word at 0x24; shared with FUN_003416a0 and saveMediaReadBuffer). */
typedef struct StreamTemplate {
    /* 0x00 */ u32 *vtable;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 virtualBase;
    /* 0x24 */ u32 second;
} StreamTemplate;

struct LocalStream;

extern StreamTemplate DAT_00557fcc;
extern u8 g_processResultState;

nn::Result romFileStreamOpen(LocalStream *stream, u32 path, u32 mode);
nn::Result archiveStreamOpenConverted(LocalStream *stream, u32 path, u32 mode);
nn::Result romFileOpenForWrite(LocalStream *stream, u32 path, u32 mode);
nn::Result requestSubmitRecordById(LocalStream *stream, u32 path, u32 mode);
nn::Result romFileCreateSized(LocalStream *stream, u32 path, u32 size);
nn::Result FUN_00317d48(LocalStream *stream, u32 path, u32 size);
nn::Result FUN_00359608(LocalStream *stream, u32 path, u32 size);
void fileSendPathRequestRoot0(u32 path);
void archivePathRequestRoot1(u32 path);
nn::Result fileObjSeekRead(LocalStream *stream, u32 offset, u32 buffer, u32 size);
nn::Result FUN_002e0c80(LocalStream *stream, u32 offset, u32 buffer, u32 size);
nn::Result FUN_00341824(LocalStream *stream, u32 offset, u32 buffer, u32 size);
nn::Result taggedOwnerRelease2(LocalStream *stream);
nn::Result holderReleaseObject(LocalStream *stream);
nn::Result taggedOwnerRelease(LocalStream *stream);
nn::Result taggedObjectRelease(LocalStream *stream);
void fileHandleClose(LocalStream *stream, u32 flags); // declcheck: local (the stream's close passes a second word, 0, that the shared one-argument prototype drops)

} /* extern "C" */

/* A stream object on the stack with RAII close and virtual-base vtable setup. */
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
        words[0] = (u32)DAT_00557fcc.vtable;
        *(u32 *)((u8 *)this + ((s32 *)words[0])[-12]) = DAT_00557fcc.virtualBase;
        words[1] = DAT_00557fcc.second;
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

    nn::Result create(s32 kind, u32 name, u32 size)
    {
        nn::Result result;
        switch (kind) {
        case 0:
            result = romFileCreateSized(this, name, size);
            break;
        case 1:
            result = FUN_00317d48(this, name, size);
            break;
        case 2:
            result = FUN_00359608(this, name, size);
            break;
        }
        return result;
    }

    nn::Result writeAt(s32 kind, u32 offset, u32 buffer, u32 size)
    {
        nn::Result result;
        switch (kind) {
        case 0:
            result = fileObjSeekRead(this, offset, buffer, size);
            break;
        case 1:
            result = FUN_002e0c80(this, offset, buffer, size);
            break;
        case 2:
            result = FUN_00341824(this, offset, buffer, size);
            break;
        }
        return result;
    }

    nn::Result close(s32 kind)
    {
        nn::Result result;
        switch (kind) {
        case 0:
            result = taggedOwnerRelease(this);
            break;
        case 1:
            result = holderReleaseObject(this);
            break;
        case 2:
            result = taggedOwnerRelease2(this);
            break;
        case 3:
            result = taggedObjectRelease(this);
            break;
        }
        return result;
    }
};

/* Whether a failed open is the retryable "file not found / unavailable" error (module 17, desc 100..179). */
static __inline bool isNotFoundResult(u32 result)
{
    return nnResultModule(result) == 17 &&
           nnResultDescriptionBits(result) >= 100 &&
           nnResultDescriptionBits(result) <= 179;
}

/* Removes an existing file on `media` before recreating it (shared with smt4 saveMediaWriteBuffer). */
static __inline void deletePath(s32 media, u32 path)
{
    if (path == 0) {
        *(u32 *)(&g_processResultState + 0x10) = 0xC8804464;
        return;
    }
    switch (media) {
    case 0:
        fileSendPathRequestRoot0(path);
        break;
    case 1:
        archivePathRequestRoot1(path);
        break;
    case 2:
        archivePathRequestRoot2((const char *)path);
        break;
    }
}

/* Opens a file on one of the four media (`media`: 0 archive, 1 save, 2 extra, 3 raw), creates or
 * recreates it if needed, writes `buffer` and closes it; returns 1 on success and 0 on any error. */
extern "C" u32 saveMediaWriteBuffer(s32 media, u32 path, u32 buffer, u32 size)
{
    LocalStream stream;
    s32 result = stream.open(media, path, 1);
    if (isNotFoundResult(result) || nnResultIsFailure(result)) {
        s32 createResult = stream.create(media, path, size);
        if ((createResult & (s32)0x80000000) < 0) {
            deletePath(media, path);
            createResult = stream.create(media, path, size);
        }
        result = createResult;
    }
    if ((result & (s32)0x80000000) < 0) {
        return 0;
    }
    result = stream.writeAt(media, 0, buffer, size);
    if ((result & (s32)0x80000000) < 0) {
        return 0;
    }
    result = stream.close(media);
    if ((result & (s32)0x80000000) < 0) {
        return 0;
    }
    return 1;
}
