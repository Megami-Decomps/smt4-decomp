/* Runs FUN_003e4d98 and reports through scrSetResult whether it succeeded, provided the current id passes partyFindActiveRecordById; always returns 1. */
#include "common.h"

extern "C" {

extern s32 scrGetArg(u32 index);
extern s32 FUN_003e4d98(void);
extern s32 partyFindActiveRecordById(u16 id);
extern void scrSetResult(s32 result);

u32 FUN_0037f82c(void)
{
    if (partyFindActiveRecordById(scrGetArg(0)) != 0) {
        scrSetResult(FUN_003e4d98() != 0);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

}
