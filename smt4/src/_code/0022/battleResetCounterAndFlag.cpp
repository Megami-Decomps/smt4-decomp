#include "battle/btlMain.h"
#include "code/Code0022_Smt4.h"
#include "battle/BtlGlobals.h"
extern "C" {
struct ResetCounterOwner { u8 unk00[0x2F98]; u32 counter; };
void keyedRecordsFreeAll(u32 *counter);
void textureCacheReleaseAll(void);

static inline void btlMainClearFlags(BtlCamera *battle, u32 mask)
{
    battle->flags &= ~mask;
}
/* Reset the pending battle counter and clear the main-state flag. */
void battleResetCounterAndFlag(ResetCounterOwner *owner)
{
    owner->counter = 0;
    keyedRecordsFreeAll(&owner->counter);
    textureCacheReleaseAll();
    BtlCamera *battle = g_btlMain;
    if (battle != NULL) {
        btlMainClearFlags(battle, 0x08000000);
    }
}
}
