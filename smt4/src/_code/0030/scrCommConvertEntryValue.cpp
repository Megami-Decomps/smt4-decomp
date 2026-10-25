#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct Entry003004fc {
    /* 0x000 */ u8 unk000[0x27c];
    /* 0x27c */ s32 value;
} Entry003004fc;

s32 scrGetArg(s32 index);
Entry003004fc *btlMainFindEntryByListedId(void *state, s32 id);
s32 gameGetUnitRecord(s32 index);
s32 FUN_0033b960(s32 value);
void gameSavedFlagSet(s16 value);

/* Script command: looks up the value for script argument 0 (a battle entry below 0x6d, a unit record from there on), converts it
 * with FUN_0033b960, calls gameSavedFlagSet when the result is positive and reports it. Returns 1. */
u32 scrCommConvertEntryValue(void)
{
    s32 id = scrGetArg(0);
    s32 value;
    s32 result;

    if (id < 0x6d) {
        static_cast<void *>(btlGetMainState());
        value = btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()), id)->value;
    } else {
        value = gameGetUnitRecord(id - 0x6d);
    }
    result = FUN_0033b960(value);
    if (result > 0) {
        gameSavedFlagSet(result);
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
