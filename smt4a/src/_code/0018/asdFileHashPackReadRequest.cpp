/* NON_MATCHING: the seek offset load sits after the stream load, rather than before argument setup. */
#include <stdio.h>
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "nn/Result.h"
#include "shard/W8X15_PackageList.h"

extern "C" {
void rt_aeabi_memclr(void *, u32);
u32 libc_strlen(const char *);
s32 libc_toupper(s32);
const AsdHashPackEntry *asdFileHashPackFindNamedEntry(AsdFileHashPack *, const char *);
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
    /* Process a leading unpaired byte, then convert two bytes at a time. */
    s32 index = length > 0 ? length & 1 : 0;
    if (index == 1)
        path[0] = libc_toupper((s8)path[0]);
    for (; index < length; index += 2) {
        path[index] = libc_toupper((s8)path[index]);
        path[index + 1] = libc_toupper((s8)path[index + 1]);
    }
    const AsdHashPackEntry *entry = asdFileHashPackFindNamedEntry(pack, path);
    if (!entry || !entry->storedSize)
        return 0;
    switch (request->state) {
    case ASD_FILE_QUEUED: {
        u32 storedSize = entry->storedSize;
        bool compressed = entry->uncompressedSize != 0;
        request->size = compressed ? entry->uncompressedSize : storedSize;
        if (!request->buffer)
            request->buffer = asdFileAllocBuffer(pack, request);
        pack->stream->io->seek(pack->stream, entry->offset, SEEK_SET);
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
} /* extern "C" */
