#ifndef SHARD_W6_W6MATCH2_HELP_RESOURCES_H
#define SHARD_W6_W6MATCH2_HELP_RESOURCES_H

#include "common.h"
#include "shard/W8X15_PackageList.h"
#include "shard/S1AsdTexTable.h"
#include "font/FontStringReader.h"

struct ScriptProcess;
struct HelpResources {
    u32 state;        // 0x00
    u8 unk04[8];      // 0x04
    void* first;      // 0x0c
    void* second;     // 0x10
    ScriptProcess* script; // 0x14
};

extern "C" {
void asdMemFree(void* memory);
void scrScriptProcessDestroy(ScriptProcess* script);
}

#ifdef __cplusplus
extern "C" {
#endif

PackageFileRef *packageFindFileRefByName(PackageList *list, s32 kind, const char *name);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_0019e31c(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0019ea5c(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void dataSubmitSelectedPresetBlock(s32 mode);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 dataTableCountRecordStages(u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

TexTableEntry *asdTMTexTableLoadEntryAsync(s32 table, s32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

FontRegisteredRecord *FUN_0019dc44(u32 index);

#ifdef __cplusplus
}
#endif

#endif
