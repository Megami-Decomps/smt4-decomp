#include "common.h"
#include <stdio.h>
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "battle/BtlEffectLoad.h"

namespace {

struct FilePathStrings {
    /* 0x00 */ char base[0x20];
    /* 0x20 */ char format[1];
};
}

extern "C" {

extern FilePathStrings DAT_004008a4;
void memClear(void *block, u32 size);
void asdMemFree(void *block);
char *libc_strcpy(char *dst, const char *src);
s32 keyedRecordFindByName(const char *name);
const u8 *libc_strrchr(const u8 *text, u32 character);

/* Gets the final component of an effect path, which always includes a directory. */
static const char *fileNameFromPath(const char *path)
{
    const u8 *separator = libc_strrchr((const u8 *)path, '/');
    return (const char *)(separator + 1);
}

/* Reset the owner's file slot to the formatted path and start loading it unless it is already registered. */
s32 FUN_003dbb40(BtlEffectWork *owner)
{
    BtlEffectFileSlot *file = &owner->niyariSlot;
    char path[0x80];
    char formatted[0x80];

    file->handle = 0xff;
    memClear(owner->niyariSlot.name, sizeof(owner->niyariSlot.name));
    if (file->file != NULL) {
        asdMemFree(file->file);
        file->file = NULL;
    }
    file->flags = 0;
    memClear(path, sizeof(path));
    FilePathStrings *strings = &DAT_004008a4;
    memClear(formatted, sizeof(formatted));
    sprintf(formatted, strings->format, strings->base);
    libc_strcpy(path, formatted);
    char *fullPath = path;
    libc_strcpy(file->name, fileNameFromPath(fullPath));
    if (keyedRecordFindByName(file->name) == 0xff) {
        asdLoadFileAsyncSimple(fullPath, (u32 *)&file->file, 0);
        file->flags |= 1;
    }
    return 1;
}

} /* extern "C" */
