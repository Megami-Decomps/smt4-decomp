/* NON_MATCHING: retail spills r0-r3 (`push {r0-r3,...}`) and re-reads `words` from its spill slot, so the parameter is address-taken/aliased in the original; the rest is the twin of smt4 FUN_0035edac. Needs _ZTT9Obj55813c rename applied. */
#include "classes/Obj55813c.h"
#include "nn/Result.h"

struct NgWordLoader {
    /* 0x00 */ u8 unk00[0x1B];
    /* 0x1B */ u8 language;
};

extern "C" {
s32 validateSetupArgs(NgWordLoader *loader, u32 *results, u32 *words, u32 wordCount);
void FUN_00439394(NgWordLoader *loader, u8 *languages, s32 *languageCount, s32 mode);
s32 FUN_002e9768(wchar_t *buffer, u32 count, const wchar_t *format, ...);
s32 textChannelParseUtf16Stream(NgWordLoader *loader, u32 *results, Obj55813c *stream, u32 *words, u32 wordCount);

/* Loads the NG-word list of every language the mode selects into the results. */
s32 FUN_00438c34(NgWordLoader *loader, u32 *results, s32 mode, u32 *words, u32 wordCount)
{
    s32 result = validateSetupArgs(loader, results, words, wordCount);
    if (!nnResultIsSuccess(result)) {
        return result;
    }
    for (u32 i = 0; i < wordCount; i++) {
        results[i] = 0;
    }
    u8 languages[8];
    s32 languageCount;
    FUN_00439394(loader, languages, &languageCount, mode);
    for (s32 i = 0; i < languageCount; i++) {
        wchar_t path[66];
        FUN_002e9768(path, 0x40, L"ngword:/%d.txt", languages[i]);
        Obj55813c stream;
        result = stream.TryInitialize(path, 1);
        if (nnResultIsFailure(result)) {
            return result;
        }
        loader->language = languages[i];
        result = textChannelParseUtf16Stream(loader, results, &stream, words, wordCount);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    return 0;
}

}
