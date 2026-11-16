#include "shard/PassiveSkill.h"

extern "C" {

/* bsearch comparator: orders passive skill records by id. */
s32 passiveSkillCompareById(const PassiveSkillRecord *a, const PassiveSkillRecord *b)
{
    return a->id - b->id;
}

} /* extern "C" */
