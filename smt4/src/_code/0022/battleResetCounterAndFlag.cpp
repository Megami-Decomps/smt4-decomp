#include "battle/btlMain.h"
extern "C" {
struct ResetCounterOwner { u8 unk00[0x2F98]; u32 counter; };
extern BtlMain *g_btlMain;
void keyedRecordsFreeAll(u32 *counter);
void textureCacheReleaseAll(void);

static inline void btlMainClearFlags(BtlMain *battle, u32 mask)
{
    battle->flags &= ~mask;
}
/* Reset the pending battle counter and clear the main-state flag. */
void battleResetCounterAndFlag(ResetCounterOwner *owner)
{
    owner->counter = 0;
    keyedRecordsFreeAll(&owner->counter);
    textureCacheReleaseAll();
    BtlMain *battle = g_btlMain;
    if (battle != NULL) {
        btlMainClearFlags(battle, 0x08000000);
    }
}
}
