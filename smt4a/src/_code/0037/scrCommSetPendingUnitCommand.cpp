/* NON_MATCHING: pending command word stores merge into STM instead of retail's writeback STR / ASR / STR. */
#include "battle/btlUnit.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
BtlUnitA* btlUnitGet(u32 id);
BtlMainStateA* btlGetMainState(void);
void FUN_003283c8(s32 enabled);

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
u32 scrCommSetPendingUnitCommand(s32 argIndex)
{
    u32 argument = static_cast<u32>(scrGetArg(argIndex));
    setUnitCommand(btlUnitGet(g_btlScriptUnit)->data, 12);
    BtlMainStateA* main = btlGetMainState();
    u32 command = argument | 0x10000;
    setPendingCommand(main, static_cast<s32>(command));
    FUN_003283c8(1);
    return 1;
}
}
