/* NON_MATCHING: loop shape (test at top, unconditional back branch) and the step computation from the running level now match; retail additionally hoists the constant 0 into r9 (push r4-sl) above the loop, the build materializes it inside. */
#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct DevilRecord003c1c44 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 baseLevel;
} DevilRecord003c1c44;

DevilRecord003c1c44 *devilGetRecord(u32 devilId);
void *dataTableGet(s32 table, s32 slot);

/* Spends experience from *exp on level-ups of a devil, from its current level towards 99, and returns the levels gained. Each level costs the table's requirement scaled by a percentage that depends on how far the level is above the devil's base level. */
s32 devilLevelUpsAffordable(u32 devilId, s32 level, u32 *exp)
{
    s32 cur = level;
    s32 step = cur - devilGetRecord(devilId)->baseLevel + 1;
    u32 percent;

    if (step <= 0) {
        percent = 100;
    } else {
        if (step > 10) {
            step = 10;
        }
        percent = ((u16 *)reinterpret_cast<u8 *>(dataTableGetEntries(dataTableGet(9, 2))))[step - 1];
    }
    for (;;) {
        if (cur == 99) {
            break;
        }
        u32 *entries = (u32 *)reinterpret_cast<u8 *>(dataTableGetEntries(dataTableGet(9, 1)));
        u32 need = cur < 99 ? entries[cur - 1] : 0;
        u32 cost = need * percent / 100;

        if (*exp < cost) {
            break;
        }
        *exp -= cost;
        cur++;
    }
    return cur - level;
}

} /* extern "C" */
