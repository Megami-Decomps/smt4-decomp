#include "battle/BtlMainAccess.h"
#include "romwright_types.h"
#include "battle/BtlGlobals.h"

struct ScriptBattleState {
    unsigned char unk0000[0x45a0];
    unsigned long long flags; // 0x45a0
};

extern "C" {

int btlReflectQueueSelectionMarks(int, unsigned int, int);

extern unsigned long long DAT_00571128; /* 0x571128 */
extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern unsigned int scrGetArg(unsigned int);

unsigned int FUN_0038dbf0(void)
{
    unsigned int arg = scrGetArg(0);
    ScriptBattleState *state = reinterpret_cast<ScriptBattleState *>(btlGetMainState());
    unsigned int unit = reinterpret_cast<unsigned int>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    btlReflectQueueSelectionMarks(0, unit, reinterpret_cast<int>(btlMainFindEntryByListedId(reinterpret_cast<BtlMainStateA *>(state), arg)));
    state->flags |= DAT_00571128;
    return 1;
}

} /* extern "C" */
