#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct BattleMainState {
    u8 unk0000[0x226c];
    u32 unk226c;                   /* 0x226C */
} BattleMainState;

void FUN_00330644(u32 unit);

/* Passes the battle state's unk226c on to FUN_00330644, the script command body that follows it. */
void FUN_0033062c(void)
{
    FUN_00330644(reinterpret_cast<BattleMainState *>(btlGetMainState())->unk226c);
}

} /* extern "C" */
