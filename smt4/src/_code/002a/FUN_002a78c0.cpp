/* NON_MATCHING: archive argument setup, stream registers and scoped-close block layout differ. */
#include "shard/S3SoundArchiveLoader.h"
#include <stddef.h>

extern "C" void *FUN_00150c4c(void *, u32, void *, u32, u64, u32);

extern "C" s32 FUN_002a78c0(SoundArchiveLoader *loader, u32 fileId, void *destination,
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
    /* The transfer workspace/cancellation byte lie beyond the shared loader prefix. */
    struct LoaderReadState {
        SoundArchiveLoader shared;
        u8 workspace[0x200];
        u8 padding208[2];
        u8 cancelled;
    };
    typedef char LoaderReadOffsets[
        offsetof(LoaderReadState, workspace) == 8 &&
        offsetof(LoaderReadState, cancelled) == 0x20A &&
        offsetof(StreamMethods, read) == 0x24 &&
        offsetof(StreamMethods, close) == 0x38 &&
        offsetof(StreamMethods, seek) == 0x40 &&
        offsetof(StreamMethods, isOpen) == 0x4C ? 1 : -1];
    LoaderReadState *state = reinterpret_cast<LoaderReadState *>(loader);
    StreamGuard input = { static_cast<ArchiveInputStream *>(FUN_00150c4c(
        loader->archive, fileId, state->workspace, sizeof(state->workspace), 0, 1)) };
    ArchiveInputStream *stream = input.stream;
    if (stream == NULL || stream->methods->isOpen(stream) == 0 ||
        stream->methods->canRead(stream) == 0)
        return -1;
    stream->methods->seek(stream, offset, 0);
    if (chunkSize != 0) {
        s32 remaining = size;
        u8 *output = static_cast<u8 *>(destination);
        while (remaining > 0) {
            if (state->cancelled)
                return -1;
            s32 requested = chunkSize <= remaining ? chunkSize : remaining;
            s32 completed = stream->methods->read(stream, output,
                (static_cast<u32>(requested) + 31) & ~31u);
            if (completed < 0)
                return -1;
            if (remaining <= completed)
                break;
            output += completed;
            remaining -= completed;
        }
    }
    else if (stream->methods->read(stream, destination,
        (static_cast<u32>(size) + 31) & ~31u) < 0)
        return -1;
    return size;
}
