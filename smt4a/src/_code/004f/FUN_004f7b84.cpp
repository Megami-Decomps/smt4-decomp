/* NON_MATCHING: initial flag/name addressing and retained path pointer allocation differ. */
#include "shard/Shard004F.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "util/CalleeContracts.h"

extern "C" {
void textFormatBuffer(char *output, const char *format, ...);
void asdMemFree(void *);
char *libc_strcpy(char *output, const char *input);
void sysMemClear(void *memory, u32 size);
char *FUN_00100d60(const char *text, s32 character);
extern const char DAT_005284c0[];

// Reset the effect file state and load a named effect unless it is already cached.
u32 FUN_004f7b84(void *context, const char *name)
{
    // This tail lies beyond the shared State339C prefix.
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
        EffectFileState effect; // 0x358c
    };
    typedef char LayoutCheck[offsetof(EffectFileView, effect) == 0x358c &&
        offsetof(EffectFileState, fileName) == 8 &&
        offsetof(EffectFileState, flags) == 0x88 ? 1 : -1];
    EffectFileView *view = static_cast<EffectFileView *>(context);
    EffectFileState *state = &view->effect;
    view->base.flags &= ~0x30000;
    state->cacheIndex = 0xff;
    sysMemClear(state->fileName, 0x80);
    if (state->file != NULL) {
        asdMemFree(state->file);
        state->file = NULL;
    }
    state->flags = 0;
    char path[64] = {0};
    char formattedPath[128];
    sysMemClear(formattedPath, 0x80);
    textFormatBuffer(formattedPath, DAT_005284c0, name);
    libc_strcpy(path, formattedPath);
    libc_strcpy(state->fileName, FUN_00100d60(path, '/') + 1);
    if (findRecordByKey(state->fileName) == 0xff) {
        asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&state->file), 1);
        state->flags |= 1;
    }
    return 1;
}
}
