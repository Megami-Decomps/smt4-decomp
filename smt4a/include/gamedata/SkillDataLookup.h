#ifndef SMT4A_GAMEDATA_SKILLDATALOOKUP_H
#define SMT4A_GAMEDATA_SKILLDATALOOKUP_H

#include "common.h"
#include "gamedata/SkillDataRecord.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Finds the skill record with `id` (battle/SkillData.tbb table 0, 0x88-byte rows): the add-on
 * content's override first, else a search of the table. */
SkillDataRecordA *skillDataFindById(u32 id);

#ifdef __cplusplus
}
#endif

#endif
