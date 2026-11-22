/* NON_MATCHING: 49 lines: retail unrolls the uppercase loop by two (as FUN_001a70dc, likely one shared helper of
 * the original file, inlined late), which also gives it one saved register less and a 268-byte frame. */
#include <stdio.h>
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "nn/Result.h"

extern "C" {
void rt_aeabi_memclr(void *, u32);
u32 libc_strlen(const char *);
void pathStripScheme(AsdFileHashPack *, char *, u32);
s32 libc_toupper(s32);
const AsdHashPackEntry *FUN_001a70dc(AsdFileHashPack *, const char *);
void *asdFileAllocBuffer(AsdFileHashPack *, AsdFileRequest *);
void acmpUnpackInPlace(void **, void *, u32);
void asdMemFreeAndClear(void **);

/* Reads a queued request's file from the hash pack: finds its entry by the upper-cased path, reads it into the request's
 * buffer (allocated if needed), unpacks a compressed file in place and marks the request done. Returns 0 when the
 * file is not in the pack. */
u32 asdFileHashPackReadRequest(AsdFileHashPack *pack, AsdFileRequest *request)
{
    if (!request)
        return 0;
    char path[ASD_FILE_PATH_LEN];
    rt_aeabi_memclr(path, sizeof(path));
    sprintf(path, request->path);
    pathStripScheme(pack, path, libc_strlen(path));
    s32 length = libc_strlen(path);
    for (s32 index = 0; index < length; ++index) {
        char *c = &path[index];
        *c = libc_toupper(static_cast<s8>(*c));
    }
    const AsdHashPackEntry *entry = FUN_001a70dc(pack, path);
    if (!entry || !entry->storedSize)
        return 0;
    switch (request->state) {
    case ASD_FILE_QUEUED: {
        u32 storedSize = entry->storedSize;
        bool compressed = entry->uncompressedSize != 0;
        request->size = compressed ? entry->uncompressedSize : storedSize;
        if (!request->buffer)
            request->buffer = asdFileAllocBuffer(pack, request);
        pack->stream->io->seek(pack->stream, static_cast<s64>(entry->offset), 0);
        u32 transferred;
        s32 result = pack->stream->io->read(pack->stream, &transferred, request->buffer, storedSize);
        request->readResult = result;
        if (!nnResultIsSuccess(result)) {
            request->state = ASD_FILE_FAILED;
            request->size = 0;
            break;
        }
        if (compressed) {
            void *scratch = NULL;
            acmpUnpackInPlace(&scratch, request->buffer, request->size);
            asdMemFreeAndClear(&scratch);
        }
        request->state = ASD_FILE_READ;
    }
        /* fall through */
    case ASD_FILE_READ:
        request->state = ASD_FILE_DONE;
        break;
    }
    return 1;
}
}
