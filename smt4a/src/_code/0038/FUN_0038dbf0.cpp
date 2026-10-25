#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

struct ScriptBattleState {
    unsigned char unk0000[0x45a0];
    unsigned long long flags; // 0x45a0
};

extern "C" {

int FUN_003f0e20(ScriptBattleState *, unsigned int);
int FUN_004fcde0(int, unsigned int, int);

extern unsigned long long DAT_00571128; /* 0x571128 */
extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern unsigned int scrGetArg(unsigned int);
extern unsigned int btlUnitGet(unsigned int);

unsigned int FUN_0038dbf0(void)
{
    unsigned int arg = scrGetArg(0);
    ScriptBattleState *state = reinterpret_cast<ScriptBattleState *>(btlGetMainState());
    unsigned int unit = btlUnitGet(g_btlScriptUnit);
    FUN_004fcde0(0, unit, FUN_003f0e20(state, arg));
    state->flags |= DAT_00571128;
    return 1;
}

} /* extern "C" */
