/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the stream allocation; the stream constructor is inlined there. */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
void asdMemFree(void *block);
void FUN_00195fc8(void);
void vcallSlot12IfValid(u32 handle);
AsdHashPackHeader *FUN_0015325c(s32 *result, u32 zero, const char *path, u32 *size, u32 arg, u32 priority);
void *FUN_00178b04(u32 size, const char *file, int line);
s32 FUN_0019dbb8(const char *path);
void FUN_002e6dd0(char *buf, u32 size);
s32 FUN_00100388(char *dst, const char *format, ...);
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
                FUN_00195fc8();
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

    pack->data = FUN_0015325c(&result, 0, path, &size, arg, 4);
    if (result < 0) {
        return result;
    }
    pack->hashes = (u32 *)((u8 *)pack->data + 0x18);
    pack->entries = pack->hashes + pack->data->hashCount;
    pack->names = (u8 *)pack->entries + pack->data->entryCount * 16;

    stream = (AsdFileStream *)FUN_00178b04(sizeof(AsdFileStream), "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdFileHashPack.cpp", 159);
    pack->stream = stream;

    if (FUN_0019dbb8(streamPath) != 0) {
        result = FUN_00158900((u8 *)pack->stream + 4, streamPath, 1);
        return result;
    }
    FUN_002e6dd0(fullPath, ASD_FILE_PATH_LEN);
    FUN_00100388(fullPath, "rom:/%s", streamPath);
    result = FUN_00158900((u8 *)pack->stream + 4, fullPath, 1);
    return result;
}

} /* extern "C" */
