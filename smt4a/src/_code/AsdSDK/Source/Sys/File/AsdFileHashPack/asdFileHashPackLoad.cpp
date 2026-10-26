/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the stream allocation; the stream constructor is inlined there. */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "util/AsdLoadFileHasDevice.h"
#include "util/vcallSlot12IfValid.h"

extern "C" {
void asdMemFree(void *block);
void sysFatalBreak(void);
AsdHashPackHeader *asdLoadFileSync(s32 *result, u32 zero, const char *path, u32 *size, u32 arg, u32 priority);
void *FUN_00178b04(u32 size, const char *file, int line);
void rt_aeabi_memclr(char *buf, u32 size);
s32 textFormatBuffer(char *dst, const char *format, ...);
s32 FUN_00158900(void *stream, const char *path, s32 mode);

/* Loads the pack file `path` into `pack` (replacing what it held) and opens a stream on
 * `streamPath`. Returns the load result (negative on failure). */
s32 asdFileHashPackLoad(AsdFileHashPack *pack, const char *path, const char *streamPath, u32 arg)
{
    s32 result = 0;
    u32 size = 0;
    AsdFileStream *stream;
    char fullPath[ASD_FILE_PATH_LEN];

    if (pack->data != NULL) {
        asdMemFree(pack->data);
        pack->data = NULL;
        pack->hashes = NULL;
        pack->entries = NULL;
        pack->names = NULL;
    }

    stream = pack->stream;
    if (stream != NULL) {
        if ((stream->handle & ~1) != 0) {
            if ((stream->handle & 1) != 0) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(stream->handle & ~1);
            stream->handle = 0;
            if (pack->stream != NULL) {
                ((void (*)(AsdFileStream *))pack->stream->vtable[1])(pack->stream);
            }
        } else {
            ((void (*)(AsdFileStream *))pack->stream->vtable[1])(pack->stream);
        }
        pack->stream = NULL;
    }

    pack->data = asdLoadFileSync(&result, 0, path, &size, arg, 4);
    if (result < 0) {
        return result;
    }
    pack->hashes = (u32 *)((u8 *)pack->data + 0x18);
    pack->entries = pack->hashes + pack->data->hashCount;
    pack->names = (u8 *)pack->entries + pack->data->entryCount * 16;

    stream = (AsdFileStream *)FUN_00178b04(sizeof(AsdFileStream), "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdFileHashPack.cpp", 159);
    pack->stream = stream;

    if (asdLoadFileHasDevice(streamPath) != 0) {
        result = FUN_00158900((u8 *)pack->stream + 4, streamPath, 1);
        return result;
    }
    rt_aeabi_memclr(fullPath, ASD_FILE_PATH_LEN);
    textFormatBuffer(fullPath, "rom:/%s", streamPath);
    result = FUN_00158900((u8 *)pack->stream + 4, fullPath, 1);
    return result;
}

} /* extern "C" */
