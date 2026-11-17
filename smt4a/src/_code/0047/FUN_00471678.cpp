/* NON_MATCHING: option-index range calculation is hoisted out of the package loops. */
/* Finds the loaded package containing a selected record and optional populated option. */
#include "addon/aocMain.h"
#include "addon/PackageSelection.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "gamedata/TableEntryCache.h"
#include "addon/AocSystemA.h"

extern "C" u32 FUN_00471678(AocSystemA *system, u32 id, s32 option)
{
    for (s32 i = 0; i < system->itemCount; ++i) {
        u32 handle = (u32)system->items[i].data;
        if (handle != 0 && system->states[i].first != 0) {
            void *table = dataTableFileGetTable(system->states[i].first, 0);
            PackageSelectableRecord *entries = (PackageSelectableRecord *)dataTableGetEntries(table);
            s32 count = dataTableGetCount(table);
            for (s32 j = 0; j < count; ++j) {
                PackageSelectableRecord *entry = &entries[j];
                if (entry->id == id &&
                    (option == 0 || ((u32)(option - 1) < 5 && entry->options[option - 1] != 0))) {
                    return handle;
                }
            }
        }
    }
    return 0;
}
