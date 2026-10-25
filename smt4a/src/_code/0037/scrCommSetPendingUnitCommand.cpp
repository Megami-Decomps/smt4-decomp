/* NON_MATCHING: recovered no-argument script callback and explicit argument index zero; pending low/high stores still merge instead of retail's STR/ASR/STR sequence. */
#include "battle/btlUnit.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
BtlUnitA* btlUnitGet(u32 id);
BtlMainStateA* btlGetMainState(void);
void btlSelectCandidateEntries(s32 enabled);

static __inline void setUnitCommand(BtlUnitDataA* data, u16 command)
{
    data->unk1BE = command;
}

static __inline void setPendingCommand(BtlMainStateA* main, s32 command)
{
    main->commandWords[2] = static_cast<u32>(command);
    main->commandWords[3] = command >> 31;
}

// Set unit command 12 and publish its sign-extended pending command word.
u32 scrCommSetPendingUnitCommand(void)
{
    u32 argument = static_cast<u32>(scrGetArg(0));
    setUnitCommand(btlUnitGet(g_btlScriptUnit)->data, 12);
    BtlMainStateA* main = btlGetMainState();
    u32 command = argument | 0x10000;
    setPendingCommand(main, static_cast<s32>(command));
    btlSelectCandidateEntries(1);
    return 1;
}
}
