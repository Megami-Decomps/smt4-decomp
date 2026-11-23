#include "addon/AocSystem.h"
#include "shard/PassiveSkill.h"
#include "shard/W5_W5Match5_RecordKeys.h"
#include "util/BinarySearch.h"

/* Looks up an add-on override for the passive skill id. */
extern "C" PassiveSkillRecord *recordTableFindById(AocSystem *system, u32 id)
{
    if (system->table43C.count == 0) {
        return NULL;
    }
    PassiveSkillRecord key;
    key.id = id;
    return (PassiveSkillRecord *)libc_bsearch(&key, system->table43C.records,
        system->table43C.count, sizeof(PassiveSkillRecord), compareRecordKey);
}
