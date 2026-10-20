#include "common.h"

extern "C" {

typedef struct UnitRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 result;
} UnitRecord;

extern u32 scrGetArg(void);
extern UnitRecord *btlGetMainState(void);
extern UnitRecord *FUN_0027da30(UnitRecord *state, u32 index);
extern int scrSetResult(u32 value);

/* Script command: looks up the entry for argument 0 and pushes its result word. */
u32 scrComm_BtlLookupResult(void)
{
    u32 index = scrGetArg();
    UnitRecord *state = btlGetMainState();

    scrSetResult(FUN_0027da30(state, index)->result);
    return 1;
}

} /* extern "C" */
