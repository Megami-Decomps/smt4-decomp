/* NON_MATCHING: scratch buffer layout and inlined request helper address/register scheduling differ; no unused scratch padding is added. */
#include "gamedata/PendingResourceRecords.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/GameDataAccess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char DAT_00528420[3][0x20];
extern const char DAT_005284c0[];
void sysMemClear(void *memory, u32 size);
void textFormatBuffer(char *destination, const char *format, ...);
char *libc_strcpy(char *destination, const char *source);
char *FUN_00100d60(const char *string, s32 character);
}

namespace {
inline void requestAssistEffect(PendingResourceRecord *record, const char *stem,
    char (&formatted)[0x80], char (&path)[0x80])
{
    record->registeredId = 0xFF;
    sysMemClear(record->name, sizeof(record->name));
    if (record->resource != NULL) {
        asdMemFree(const_cast<char *>(record->resource));
        record->resource = NULL;
    }
    record->flags = 0;
    sysMemClear(path, sizeof(path));
    sysMemClear(formatted, sizeof(formatted));
    textFormatBuffer(formatted, DAT_005284c0, stem);
    libc_strcpy(path, formatted);
    libc_strcpy(record->name, FUN_00100d60(path, '/') + 1);
    if (findRecordByKey(record->name) == 0xFF) {
        asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&record->resource), 1);
        record->flags |= 1;
    }
}
}

extern "C" u32 FUN_004f85c8(PendingResourceOwner *owner, s32 allEffects)
{
    char formatted[0x80];
    char path[0x80];
    if (allEffects != 0) {
        for (s32 i = 0; i < 3; ++i) {
            requestAssistEffect(&owner->records[i], DAT_00528420[i], formatted, path);
        }
    } else {
        requestAssistEffect(&owner->records[2], DAT_00528420[2], formatted, path);
    }
    return 1;
}
