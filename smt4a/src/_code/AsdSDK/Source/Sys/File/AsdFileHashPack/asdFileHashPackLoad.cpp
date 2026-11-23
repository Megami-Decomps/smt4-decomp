/* NON_MATCHING: the stream is now built and destroyed as an Obj55813c; retail constructs its file base through a this+4 pointer (str with writeback) and keeps the new object in r1 behind a predicated NULL test, stores the zero size just before asdLoadFileSync, and allocates registers differently around the header pointers. */
#include <new>
#include <stdio.h>
#include "classes/Obj55813c.h"
#include "nn/Result.h"
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "sys/RuntimeObjects.h"

extern "C" {
void asdMemFree(void *block);
void sysFatalBreak(void);
AsdHashPackHeader *asdLoadFileSync(s32 *result, u32 zero, const char *path, u32 *size, u32 arg, u32 priority);
void *asdMemoryAllocTraced(u32 size, const char *file, int line);
void rt_aeabi_memclr(char *buf, u32 size);
s32 movieOpenFileOpenPath(void *stream, const char *path, s32 mode);

/* Loads the pack file `path` into `pack` (replacing what it held) and opens a stream on
 * `streamPath`. Returns the load result (negative on failure). */
s32 asdFileHashPackLoad(AsdFileHashPack *pack, const char *path, const char *streamPath, u32 arg)
{
    s32 result = 0;
    u32 size = 0;

    if (pack->data != NULL) {
        asdMemFree(pack->data);
        pack->data = NULL;
        pack->hashes = NULL;
        pack->entries = NULL;
        pack->names = NULL;
    }

    /* the stream is an Obj55813c (AsdFileStream is the view its readers use) */
    Obj55813c *stream = (Obj55813c *)pack->stream;
    if (stream != NULL) {
        if ((stream->handle & ~1u) != 0) {
            if (stream->handle & 1) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(stream->handle & ~1u);
            stream->handle = 0;
        }
        delete (Obj55813c *)pack->stream;
        pack->stream = NULL;
    }

    pack->data = asdLoadFileSync(&result, 0, path, &size, arg, 4);
    if (!nnResultIsSuccess(result)) {
        return result;
    }
    pack->hashes = (u32 *)((u8 *)pack->data + 0x18);
    pack->entries = pack->hashes + pack->data->hashCount;
    pack->names = (u8 *)pack->entries + pack->data->entryCount * 16;

    pack->stream = (AsdFileStream *)new (asdMemoryAllocTraced(sizeof(Obj55813c), "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdFileHashPack.cpp", 159)) Obj55813c;

    if (asdLoadFileHasDevice(streamPath) != 0) {
        result = movieOpenFileOpenPath((u8 *)pack->stream + 4, streamPath, 1);
    } else {
        /* block scope: retail reuses the path buffer's slot for asdLoadFileSync's stack arguments */
        char fullPath[ASD_FILE_PATH_LEN];
        rt_aeabi_memclr(fullPath, ASD_FILE_PATH_LEN);
        sprintf(fullPath, "rom:/%s", streamPath);
        result = movieOpenFileOpenPath((u8 *)pack->stream + 4, fullPath, 1);
    }
    return result;
}

} /* extern "C" */
