/* NON_MATCHING: the flag clear's base registers and the request-id store are scheduled differently, and retail keeps
 * the path base in its own register across the string lookup and the asynchronous load. */
#include "runtime/Stdio.h"
#include "shard/Shard004F.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/GameDataAccess.h"

struct EffectFileState {
    u8 cacheIndex;
    u8 unk01[3];
    void *file;
    char fileName[0x80];
    u8 flags;
};

struct EffectFileView {
    State339C base;
    u8 unk33a8[0x1e4];
    EffectFileState effect; /* 0x358c */
};

typedef char EffectFileLayoutCheck[offsetof(EffectFileView, effect) == 0x358c &&
    offsetof(EffectFileState, fileName) == 8 &&
    offsetof(EffectFileState, flags) == 0x88 ? 1 : -1];

extern "C" {
void asdMemFree(void *);
char *libc_strcpy(char *output, const char *input);
void sysMemClear(void *memory, u32 size);
const u8 *libc_strrchr(const u8 *text, u32 character);
extern const char DAT_005284c0[];

/* Twin of fileNameFromPath in smt4 FUN_003dbb40 and smt4 effectRequestByName. */
static __inline const char *fileNameFromPath(const char *path)
{
    const u8 *separator = libc_strrchr((const u8 *)path, '/');
    return (const char *)(separator + 1);
}

/* Reset the effect file state and load a named effect unless it is already cached. */
u32 effectRequestByName(EffectFileView *view, const char *name)
{
    view->base.flags &= ~0x10000;
    view->base.flags &= ~0x20000;
    EffectFileState *state = &view->effect;
    state->cacheIndex = 0xff;
    sysMemClear(view->effect.fileName, 0x80);
    if (state->file != NULL) {
        asdMemFree(state->file);
        state->file = NULL;
    }
    state->flags = 0;
    char path[64] = {0};
    char formattedPath[128];
    sysMemClear(formattedPath, 0x80);
    __2sprintf(formattedPath, DAT_005284c0, name);
    libc_strcpy(path, formattedPath);
    libc_strcpy(state->fileName, fileNameFromPath(path));
    if (findRecordByKey(state->fileName) == 0xff) {
        asdLoadFileAsyncSimple(path, (u32 *)&state->file, 1);
        state->flags |= 1;
    }
    return 1;
}
}
