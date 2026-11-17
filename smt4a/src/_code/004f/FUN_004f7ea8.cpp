#include "common.h"
#include "gamedata/NamedVariantTable.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ const NamedVariantTableEntry *first;
    /* 0x1F58 */ const NamedVariantTableEntry *second;
} Owner;

/* Stores the results of namedVariantTableGetEntries for the id's record with and without the flag at 0x1f54 and 0x1f58. */
void FUN_004f7ea8(Owner *owner, u32 id, u32 a, s32 flag)
{
    const char *name = skillDataFindById(id)->identity.name;

    owner->first = namedVariantTableGetEntries(a, name, flag != 0);
    owner->second = namedVariantTableGetEntries(a, name, 0);
}

} /* extern "C" */
