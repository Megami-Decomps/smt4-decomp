#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct BattleMainState {
    u8 unk0000[0x2234];
    u32 unk2234;                   /* 0x2234 */
} BattleMainState;

void scrCommMessageShowPlainBody(u32 unit);

/* Passes the battle state's unk2234 on to scrCommMessageShowPlainBody, the script command body that follows it. */
void scrComm_Message_ShowPlainFromBattle(void)
{
    scrCommMessageShowPlainBody(reinterpret_cast<BattleMainState *>(btlGetMainState())->unk2234);
}

} /* extern "C" */
