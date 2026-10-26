/* NON_MATCHING: option-index range calculation is hoisted out of the package loops. */
/* Finds the loaded package containing a selected record and optional populated option. */
#include "addon/aocMain.h"
#include "addon/PackageSelection.h"
#include "gamedata/DataTableAccess_VariantA.h"

extern "C" u32 FUN_00471678(AocSystemA *system, u32 id, s32 option)
{
    /* These package-file arrays are past the shared AocSystemA prefix. */
    struct PackageSearchView {
        u8 unk000[0x448];
        s32 count;
        PackageFileRef *files;
        PackageFileRef *handles;
    };
    PackageSearchView *packages = (PackageSearchView *)system;
    for (s32 i = 0; i < packages->count; ++i) {
        u32 handle = packages->handles[i].fileId;
        if (handle != 0 && packages->files[i].fileId != 0) {
            void *table = dataTableFileGetTable(packages->files[i].fileId, 0);
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
