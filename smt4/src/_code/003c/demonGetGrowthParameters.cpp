/* NON_MATCHING: the parameters are built in registers and stored as four words as in retail; the
 * record loads and the HP/MP arithmetic are scheduled differently (retail loads the level before
 * packing the second and third words and computes HP's smlabb before MP's mla). */
#include "gamedata/PlayerGrowthDefaults.h"
#include "gamedata/NkmBaseRecord.h"

/* Returns demon `id`'s growth parameters with its HP and MP at its base level. */
extern "C" StatGrowthParametersIV demonGetGrowthParameters(u32 id)
{
    const NkmBaseRecord *record = nkmBaseGetRecord(id);
    StatGrowthParametersIV result = {0};
    result.baseHp = record->baseHp;
    result.baseMp = record->baseMp;
    result.stats[0] = record->statGrowth[0];
    result.stats[1] = record->statGrowth[1];
    result.stats[2] = record->statGrowth[2];
    result.stats[3] = record->statGrowth[3];
    result.stats[4] = record->statGrowth[4];
    result.hpGrowth = record->hpGrowth;
    result.mpGrowth = record->mpGrowth;
    statMaximumsAtLevelIV(record->level, &result.maximums, &result);
    return result;
}
