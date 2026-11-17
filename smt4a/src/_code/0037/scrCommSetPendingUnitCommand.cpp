#include "battle/BtlMainAccess.h"
#include "battle/btlScript.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {




typedef struct CommandState {
    /* 0x0000 */ u8 unk0000[0x2008];
    /* 0x2008 */ s64 flags;
} CommandState;

u32 scrGetArg(u32 index);
void btlSelectCandidateEntries(s32 arg);

/* Script command: sets the script unit's value to 12 and the main state's 64-bit flags to script argument 0 | 0x10000 (sign-extended). Returns 1. */
u32 scrCommSetPendingUnitCommand(void)
{
    u32 arg = scrGetArg(0);

    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *data = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;

    data->actionKind = 12;
    reinterpret_cast<CommandState *>(btlGetMainState())->flags = (s32)(arg | 0x10000);
    btlSelectCandidateEntries(1);
    return 1;
}

} /* extern "C" */
