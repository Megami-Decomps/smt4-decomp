#include "common.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The part of the result screen that its exit step uses. */
struct ResultScreenExit {
    /* 0x0000 */ u8 unk0000[0x3574];
    /* 0x3574 */ void *script;
    /* 0x3578 */ void *buffer;
    /* 0x357C */ u8 unk357C[0xCF74 - 0x357C];
    /* 0xCF74 */ s32 slotCount;
    /* 0xCF78 */ s32 selected;
    /* 0xCF7C */ u8 unkCF7C[0xD640 - 0xCF7C];
    /* 0xD640 */ u8 active;
};

extern "C" {

void btlTalkBustUpDestroy(void);
void resultSetMenuState(ResultScreenExit *result, s32 state);
void FUN_0029e788(void);
void FUN_0029e874(s32 value);
void scrScriptProcessDestroy(void *script);

// Ends the current unit's result step: moves on to the next unit or to the closing menu state.
u32 resultUnitStepFinish(ResultScreenExit *result)
{
    scrScriptProcessDestroy(result->script);
    asdMemFree(result->buffer);
    btlTalkBustUpDestroy();
    result->active = 0;
    result->selected++;
    if (result->slotCount == result->selected) {
        resultSetMenuState(result, 0x14);
        return 0;
    }
    FUN_0029e874(1);
    FUN_0029e788();
    resultSetMenuState(result, 9);
    return 1;
}

} /* extern "C" */
