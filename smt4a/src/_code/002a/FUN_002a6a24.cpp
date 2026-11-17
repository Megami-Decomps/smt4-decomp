#include "common.h"
#include "gamedata/SkillDataRecord.h"
extern "C" {
/* Resolves the requested record and returns the callback's zero result. */
s32 FUN_002a6a24(u32 id) {
    s32 result = 0;
    skillDataFindById(id);
    return result;
}
}
