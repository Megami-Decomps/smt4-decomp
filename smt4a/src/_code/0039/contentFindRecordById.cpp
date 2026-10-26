#include "gamedata/DataTable.h"
#include "addon/PackageSelection.h"
#include "util/CalleeContracts.h"

extern "C" {

extern void *g_aocSystem;

PackageSelectableRecord *FUN_00470bdc(void *system, s32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const u16 *, const u16 *));
s32 arrayCompareUnsignedHalfword(const u16 *left, const u16 *right);

/* Record `id` of data table 0x45: the add-on content's override first, else a search of the table
 * (which also sets the first option of id 0x46's record to 0x26C). */
PackageSelectableRecord *contentFindRecordById(u16 id)
{
    PackageSelectableRecord *record = FUN_00470bdc(g_aocSystem, id);
    if (record == NULL) {
        void *section = dataTableGet(0x45, 0);
        const void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        PackageSelectableRecord key;

        key.id = id;
        record = (PackageSelectableRecord *)libc_bsearch(&key, entries, count, sizeof(PackageSelectableRecord), arrayCompareUnsignedHalfword);
        if (id == 0x46) {
            record->options[0] = 0x26C;
        }
    }
    return record;
}

} /* extern "C" */
