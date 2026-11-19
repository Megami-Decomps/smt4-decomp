#ifndef SMT4_GAMEDATA_SKILLDATALOOKUP_H
#define SMT4_GAMEDATA_SKILLDATALOOKUP_H

#include "common.h"
#include "gamedata/SkillDataRecord.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Finds the skill record with `id` (battle/SkillData.tbb table 0, 0x68-byte rows): the add-on content's override
 * first, else a search of the table. */
SkillDataRecord *skillDataFindById(u32 id);

/* The sum of the amounts of the skill's leading rank bonuses of `kind` among the first `rank - 1` (at most 8);
 * 0 for no record or a locked one. */
s32 skillSumRankBonuses(const SkillDataRecord *record, s32 rank, u32 kind);

#ifdef __cplusplus
}
#endif

#endif
