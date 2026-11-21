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

/* HP and MP computed from growth parameters (statMaximumsAtLevelIV). */
struct StatMaximumsIV {
    /* 0x00 */ s16 hp;
    /* 0x02 */ u16 mp;
};

/* SMT IV's growth parameters: Apocalypse's StatGrowthParameters without the kind byte (0x10 bytes,
 * built in registers and copied out as four words). */
struct StatGrowthParametersIV {
    /* 0x00 */ u8 stats[5];               /* growth weights of the five stats */
    /* 0x05 */ u8 reserved05;
    /* 0x06 */ u16 baseHp;
    /* 0x08 */ u16 baseMp;
    /* 0x0A */ u8 hpGrowth;
    /* 0x0B */ u8 mpGrowth;
    /* 0x0C */ StatMaximumsIV maximums;  /* at the unit's level (demons) */
};

typedef char StatGrowthParametersIVSizeCheck[sizeof(StatGrowthParametersIV) == 0x10 ? 1 : -1];

/* The hero's growth parameters from data table 9 (SMT IV): the body of playerGetGrowthParameters, which
 * unitApplyLevelGrowth inlines. The fields go in the order of Apocalypse's playerGrowthParameters. */
static __inline void playerGrowthParametersIV(StatGrowthParametersIV *parameters)
{
    const PlayerGrowRecord *defaults = playerGrowthDefaults();
    StatGrowthParametersIV result = {0};
    result.baseHp = defaults->baseHp;
    result.baseMp = defaults->baseMp;
    result.stats[0] = defaults->growth[0];
    result.stats[1] = defaults->growth[1];
    result.stats[2] = defaults->growth[2];
    result.stats[3] = defaults->growth[3];
    result.stats[4] = defaults->growth[4];
    result.hpGrowth = defaults->hpGrowth;
    result.mpGrowth = defaults->mpGrowth;
    *parameters = result;
}

/* HP and MP at `level` from SMT IV growth parameters, each capped at 9999 (MP at 45%): the body of
 * statMaximumsAtLevel, which demonGetGrowthParameters inlines. */
static __inline void statMaximumsAtLevelIV(s16 level, StatMaximumsIV *maximums, const StatGrowthParametersIV *parameters)
{
    s32 hp = level * parameters->hpGrowth + parameters->baseHp;
    u16 hpValue = hp <= 9999 ? (u16)hp : 9999;
    maximums->hp = hpValue;
    s32 mp = (level * parameters->mpGrowth + parameters->baseMp) * 45 / 100;
    maximums->mp = mp <= 9999 ? (u16)mp : 9999;
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
