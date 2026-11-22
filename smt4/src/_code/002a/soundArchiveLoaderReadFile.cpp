/* NON_MATCHING: 14 lines, argument scheduling only: retail computes the single read's rounded size before loading
 * the stream's read method, and puts the block read's Min in r0 before rounding it into r2 (r2 throughout here). */
#include "shard/S3SoundArchiveLoader.h"
#include <stddef.h>

extern "C" void *soundPlayerPlayItem(void *, u32, void *, u32, PlayParameters);

/* nw::ut's RoundUp and Min header inlines. */
static __inline u32 utRoundUp(u32 value, u32 alignment)
{
    return (value + alignment - 1) & ~(alignment - 1);
}
static __inline s32 utMin(s32 a, s32 b)
{
    return a > b ? b : a;
}

/* Reads `size` bytes of archive file `fileId` from `offset` into `destination`, in blocks of `chunkSize` when it is
 * not 0 (stopping when loading is cancelled); returns the size or -1. */
extern "C" s32 soundArchiveLoaderReadFile(SoundArchiveLoader *loader, u32 fileId, void *destination,
    s32 size, u32 offset, s32 chunkSize)
{
    struct ArchiveInputStream;
    struct StreamMethods {
        u8 prefix00[0xC];
        u32 (*canRead)(ArchiveInputStream *);
        u8 prefix10[0x14];
        s32 (*read)(ArchiveInputStream *, void *, u32);
        u8 prefix28[0x10];
        void (*close)(ArchiveInputStream *);
        u8 prefix3C[4];
        void (*seek)(ArchiveInputStream *, u32, u32);
        u8 prefix44[8];
        u32 (*isOpen)(ArchiveInputStream *);
    };
    struct ArchiveInputStream {
        const StreamMethods *methods;
    };
    struct StreamGuard {
        ArchiveInputStream *stream;
        ~StreamGuard()
        {
            if (stream != NULL)
                stream->methods->close(stream);
        }
    };
    /* The transfer workspace and the cancel flag lie beyond the shared loader prefix (the flag is s8: retail reaches it
     * through a +0x200 base). */
    struct LoaderReadState {
        SoundArchiveLoader shared;
        u8 workspace[0x200];
        u8 padding208[2];
        s8 cancelled;
    };
    typedef char LoaderReadOffsets[
        offsetof(LoaderReadState, workspace) == 8 &&
        offsetof(LoaderReadState, cancelled) == 0x20A &&
        offsetof(StreamMethods, read) == 0x24 &&
        offsetof(StreamMethods, close) == 0x38 &&
        offsetof(StreamMethods, seek) == 0x40 &&
        offsetof(StreamMethods, isOpen) == 0x4C ? 1 : -1];
    LoaderReadState *state = reinterpret_cast<LoaderReadState *>(loader);
    PlayParameters parameters;
    parameters.first = 0;
    parameters.second = 0;
    parameters.third = 1;
    StreamGuard input = { static_cast<ArchiveInputStream *>(soundPlayerPlayItem(
        loader->archive, fileId, state->workspace, sizeof(state->workspace), parameters)) };
    if (input.stream == NULL)
        return -1;
    if (input.stream->methods->isOpen(input.stream) == 0 || input.stream->methods->canRead(input.stream) == 0)
        return -1;
    input.stream->methods->seek(input.stream, offset, 0);
    if (chunkSize == 0) {
        if (input.stream->methods->read(input.stream, destination, utRoundUp(size, 32)) < 0)
            return -1;
    } else {
        s32 remaining = size;
        u8 *output = static_cast<u8 *>(destination);
        while (remaining > 0) {
            if (state->cancelled)
                return -1;
            s32 completed = input.stream->methods->read(input.stream, output, utRoundUp(utMin(chunkSize, remaining), 32));
            if (completed < 0)
                return -1;
            if (remaining <= completed)
                break;
            output += completed;
            remaining -= completed;
        }
    }
    return size;
}
