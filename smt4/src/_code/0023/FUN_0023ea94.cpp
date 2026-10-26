#include "common.h"
#include "battle/BattleBalanceRow.h"

extern "C" {

extern BattleBalanceRow DAT_00439ae8[];
s32 FUN_002973ec(void);

BattleBalanceRow *FUN_0023ea94(void)
{
    return &DAT_00439ae8[FUN_002973ec()];
}

} /* extern "C" */
