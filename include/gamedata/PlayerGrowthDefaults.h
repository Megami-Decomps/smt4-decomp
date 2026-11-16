/* Data table 9, section 0: the hero's starting stats and growth rates. */
#ifndef GAMEDATA_PLAYERGROWTHDEFAULTS_H
#define GAMEDATA_PLAYERGROWTHDEFAULTS_H

#include "common.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match8_StatGrowth.h"

/* The table's first (only) record. */
struct PlayerGrowthDefaults {
    /* 0x00 */ s8 initialStats[5];
    /* 0x05 */ u8 growth[5];
    /* 0x0A */ u8 baseHp;
    /* 0x0B */ u8 baseMp;
    /* 0x0C */ u8 hpGrowth;
    /* 0x0D */ u8 mpGrowth;
};

/* The hero's record of data table 9. */
static __inline const PlayerGrowthDefaults *playerGrowthDefaults()
{
    void *table = dataTableGet(9, 0);
    dataTableGetCount(table);
    return (const PlayerGrowthDefaults *)dataTableGetEntries(table);
}

/* The hero's growth parameters (kind 1) built from data table 9. */
static __inline StatGrowthParameters playerGrowthParameters()
{
    const PlayerGrowthDefaults *defaults = playerGrowthDefaults();
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
