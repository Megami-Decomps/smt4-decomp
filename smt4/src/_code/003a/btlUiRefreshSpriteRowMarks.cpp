#include "battle/BtlUiGlobal.h"
#include "code/Code003a_Smt4.h"

extern "C" {

/* Applies row and mark deltas to the active battle UI's sprite list. */
void btlUiRefreshSpriteRowMarks(BtlUi *, s8 rowDelta, s8 markDelta)
{
    spriteRowListRefreshMarks(&g_btlUi.ui->objA, rowDelta, markDelta);
}

} /* extern "C" */
