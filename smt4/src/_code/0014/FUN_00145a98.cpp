#include "shard/PassiveSkill.h"

extern "C" {

/* bsearch comparator: orders passive skill records by id. */
s32 FUN_00145a98(const PassiveSkillRecord *a, const PassiveSkillRecord *b)
{
    return a->id - b->id;
}

} /* extern "C" */
