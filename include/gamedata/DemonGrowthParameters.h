/* A demon's growth parameters (SMT IV): its NKMBaseTable record's stat weights, base HP/MP and growth, with
 * HP and MP at its base level. */
#ifndef GAMEDATA_DEMONGROWTHPARAMETERS_H
#define GAMEDATA_DEMONGROWTHPARAMETERS_H

#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/PlayerGrowthDefaults.h"

/* Demon `id`'s growth parameters: the body of demonGetGrowthParameters, which demonApplyLevelGrowth inlines. */
static __inline void demonGrowthParametersIV(u32 id, StatGrowthParametersIV *parameters)
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
    *parameters = result;
}

#endif
