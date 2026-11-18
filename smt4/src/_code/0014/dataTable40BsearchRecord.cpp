#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "addon/AocSystem.h"
#include "util/BinarySearch.h"

extern "C" {

s32 skillRecordCompareId(const void *left, const void *right);

/* Finds the add-on content's skill record with `id` (data table 4, section 0), NULL when it adds none. */
SkillDataRecord *dataTable40BsearchRecord(AocSystem *system, u32 id)
{
    if (system->skills.count == 0) {
        return NULL;
    }
    SkillDataRecord key;
    key.identity.id = id;
    return static_cast<SkillDataRecord *>(
        libc_bsearch(&key, system->skills.records, system->skills.count, sizeof(SkillDataRecord), skillRecordCompareId));
}

} /* extern "C" */
