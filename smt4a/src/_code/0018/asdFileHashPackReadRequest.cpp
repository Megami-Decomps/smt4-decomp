/* NON_MATCHING: uppercase loop is not pair-unrolled; frame/register layout and redundant retail READ-state store differ. */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "nn/Result.h"

extern "C" {
void rt_aeabi_memclr(void *, u32);
s32 textFormatBuffer(char *, const char *, ...);
u32 wstrlen(const char *);
void pathStripScheme(AsdFileHashPack *, char *, u32);
s32 libc_toupper(s32);
const AsdHashPackEntry *FUN_001a70dc(AsdFileHashPack *, const char *);
void *asdFileAllocBuffer(AsdFileHashPack *, AsdFileRequest *);
void acmpUnpackInPlace(void **, void *, u32);
void asdMemFreeAndClear(void **);

u32 asdFileHashPackReadRequest(AsdFileHashPack *pack, AsdFileRequest *request)
{
    if (!request)
        return 0;
    char path[ASD_FILE_PATH_LEN];
    rt_aeabi_memclr(path, sizeof(path));
    textFormatBuffer(path, request->path);
    pathStripScheme(pack, path, wstrlen(path));
    s32 length = wstrlen(path);
    for (s32 index = 0; index < length; ++index)
        path[index] = libc_toupper(static_cast<s8>(path[index]));
    const AsdHashPackEntry *entry = FUN_001a70dc(pack, path);
    if (!entry || !entry->storedSize)
        return 0;
    if (request->state == ASD_FILE_QUEUED) {
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
            return 1;
        }
        if (compressed) {
            void *scratch = NULL;
            acmpUnpackInPlace(&scratch, request->buffer, request->size);
            asdMemFreeAndClear(&scratch);
        }
        request->state = ASD_FILE_DONE;
    } else if (request->state == ASD_FILE_READ) {
        request->state = ASD_FILE_DONE;
    }
    return 1;
}
}
