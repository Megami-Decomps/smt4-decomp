/* NON_MATCHING: retail spills r0-r3 (`push {r0-r3,...}`) and re-reads `words` from its spill slot, so the parameter is address-taken/aliased in the original; everything else (inline stream construction via the VTT, inline close, Result tests) matches. Needs _ZTT9Obj420c60 rename applied. */
#include "classes/Obj420c60.h"
#include "nn/Result.h"

struct NgWordLoader {
    /* 0x00 */ u8 unk00[0x1B];
    /* 0x1B */ u8 language;
};

extern "C" {
s32 argsValidate(NgWordLoader *loader, u32 *results, u32 *words, u32 wordCount);
void FUN_0035f50c(NgWordLoader *loader, u8 *languages, s32 *languageCount, s32 mode);
s32 FUN_00100b88(wchar_t *buffer, u32 count, const wchar_t *format, ...);
s32 textChannelParseUtf16Stream(NgWordLoader *loader, u32 *results, Obj420c60 *stream, u32 *words, u32 wordCount);

/* Loads the NG-word list of every language the mode selects into the results. */
s32 FUN_0035edac(NgWordLoader *loader, u32 *results, s32 mode, u32 *words, u32 wordCount)
{
    s32 result = argsValidate(loader, results, words, wordCount);
    if (!nnResultIsSuccess(result)) {
        return result;
    }
    for (u32 i = 0; i < wordCount; i++) {
        results[i] = 0;
    }
    u8 languages[8];
    s32 languageCount;
    FUN_0035f50c(loader, languages, &languageCount, mode);
    for (s32 i = 0; i < languageCount; i++) {
        wchar_t path[66];
        FUN_00100b88(path, 0x40, L"ngword:/%d.txt", languages[i]);
        Obj420c60 stream;
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
