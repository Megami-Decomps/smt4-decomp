#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

namespace {
struct LoadedFile {
    /* 0x00 */ u8 index;    /* 0xff: not registered */
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *data;
    /* 0x08 */ char name[0x80];
    /* 0x88 */ u8 flags;    /* bit 0: a load is pending */
};

struct LoadedFileOwner {
    /* 0x0000 */ u8 unk0000[0x2f9c];
    /* 0x2F9C */ LoadedFile file;
};

struct FilePathStrings {
    /* 0x00 */ char base[0x20];
    /* 0x20 */ char format[1];
};
}

extern "C" {

extern FilePathStrings DAT_004008a4;
void memClear(void *block, u32 size);
void asdMemFree(void *block);
void textFormatBuffer(char *buffer, const char *format, const char *arg);
char *libc_strcpy(char *dst, const char *src);
const u8 *libc_strrchr(const u8 *string, u32 character);
s32 keyedRecordFindByName(const char *name);

static const char *fileNameFromPath(const char *path)
{
    const u8 *separator = libc_strrchr(reinterpret_cast<const u8 *>(path), '/');
    return reinterpret_cast<const char *>(separator + 1);
}

/* Reset the owner's file slot to the formatted path and start loading it unless it is already registered. */
s32 FUN_003dbb40(LoadedFileOwner *owner)
{
    LoadedFile *file = &owner->file;
    char path[0x80];
    char formatted[0x80];

    file->index = 0xff;
    memClear(owner->file.name, sizeof(owner->file.name));
    if (file->data != NULL) {
        asdMemFree(file->data);
        file->data = NULL;
    }
    file->flags = 0;
    memClear(path, sizeof(path));
    FilePathStrings *strings = &DAT_004008a4;
    memClear(formatted, sizeof(formatted));
    textFormatBuffer(formatted, strings->format, strings->base);
    libc_strcpy(path, formatted);
    char *fullPath = path;
    libc_strcpy(file->name, fileNameFromPath(fullPath));
    if (keyedRecordFindByName(file->name) == 0xff) {
        asdLoadFileAsyncSimple(fullPath, reinterpret_cast<u32 *>(&file->data), 0);
        file->flags |= 1;
    }
    return 1;
}

} /* extern "C" */
