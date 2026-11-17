#include "common.h"
#include "gamedata/NamedVariantTable.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

typedef struct Object003db57c {
    /* 0x0000 */ u8 unk0000[0x1cfc];
    /* 0x1cfc */ const NamedVariantTableEntry *result;
} Object003db57c;

/* Stores namedVariantTableGetEntries's result for `value`, the lookup of `id` and `flag` in the object. */
void objectSetResultFromLookup(Object003db57c *obj, u32 id, u32 value, u32 flag)
{
    obj->result = namedVariantTableGetEntries(value, skillDataFindById(id)->identity.name, flag != 0);
}

} /* extern "C" */
