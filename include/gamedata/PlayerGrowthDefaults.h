/* The hero's growth parameters from data table 9 (gamedata/PlayerGrowTable.h). */
#ifndef GAMEDATA_PLAYERGROWTHDEFAULTS_H
#define GAMEDATA_PLAYERGROWTHDEFAULTS_H

#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/PlayerGrowTable.h"
#include "shard/W6_W6Match8_StatGrowth.h"

/* The hero's growth record (retail also reads the section's count, unused). */
static __inline const PlayerGrowRecord *playerGrowthDefaults()
{
    void *table = dataTableGet(9, 0);
    dataTableGetCount(table);
    return (const PlayerGrowRecord *)dataTableGetEntries(table);
}

/* The hero's growth parameters (kind 1) built from data table 9. */
static __inline StatGrowthParameters playerGrowthParameters()
{
    const PlayerGrowRecord *defaults = playerGrowthDefaults();
    StatGrowthParameters parameters = {};
    parameters.baseHp = defaults->baseHp;
    parameters.baseMp = defaults->baseMp;
    parameters.stats[0] = defaults->growth[0];
    parameters.stats[1] = defaults->growth[1];
    parameters.stats[2] = defaults->growth[2];
    parameters.stats[3] = defaults->growth[3];
    parameters.stats[4] = defaults->growth[4];
    parameters.hpGrowth = defaults->hpGrowth;
    parameters.mpGrowth = defaults->mpGrowth;
    parameters.kind = 1;
    return parameters;
}

#endif
