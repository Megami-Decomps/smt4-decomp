#include "battle/btlEncount.h"
#include "battle/btlMain.h"

extern "C" {

s32 jobIsValid(u32 job);

extern s32 DAT_005712f0;
extern BtlMainA *DAT_00571508;
extern s32 DAT_00573808;
extern BtlEncount *g_btlEncount;

/* 0 when the owner job is running with all battle state set up and either the no-encounter flag
 * is set or the encounter state is not active; 1 otherwise. */
u32 btlEncountCheck(BtlEncountOwner *owner)
{
    if (jobIsValid(owner->job) != 0 && g_btlEncount != NULL && DAT_005712f0 != 0 &&
        DAT_00573808 != 0 && DAT_00571508 != NULL) {
        if ((DAT_00571508->flags & BTL_FLAG_NO_ENCOUNT) != 0) {
            return 0;
        }
        if ((g_btlEncount->flags & BTL_ENCOUNT_ACTIVE) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
