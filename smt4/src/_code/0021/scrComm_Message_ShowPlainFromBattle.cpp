#include "common.h"

extern "C" {

typedef struct BattleMainState {
    u8 unk0000[0x2234];
    u32 unk2234;                   /* 0x2234 */
} BattleMainState;

BattleMainState *btlGetMainState(void);
void FUN_002118a0(u32 unit);

/* Passes the battle state's unk2234 on to FUN_002118a0, the script command body that follows it. */
void scrComm_Message_ShowPlainFromBattle(void)
{
    FUN_002118a0(btlGetMainState()->unk2234);
}

} /* extern "C" */
