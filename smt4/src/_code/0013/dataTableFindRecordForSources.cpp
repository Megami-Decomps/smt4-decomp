#include "common.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct DataRecord {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 sub;
    /* 0x02 */ u8 unk02[8];
    /* 0x0A */ u16 requiredFlag;   /* 0 = none */
    /* 0x0C */ u16 forbiddenFlag;  /* 0 = none */
    /* 0x0E */ u8 unk0E[0x92];
} DataRecord; /* 0xA0 bytes */

extern u32 dataTableFileGetTable(void *file, u32 index);
extern DataRecord *dataTableGetEntries(void);
extern s32 dataTableGetCount(u32 table);
extern s32 gameFlagIsSet(u32 flag);

/* Finds the data record of `kind`/`sub` (whose flag conditions hold) among the type-0x1B files of the loaded packages. */
DataRecord *dataTableFindRecordForSources(AocSystem *system, u32 kind, u32 sub)
{
    s32 i;

    for (i = 0; i < system->packageCount; i++) {
        AocPackage *package = &system->packages[i];

        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *entries = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            u32 j;

            for (j = 0; j < count; j++) {
                if (entries[j].kind == 0x1B) {
                    u32 table = dataTableFileGetTable(package->files[j].data, 0);
                    DataRecord *records = dataTableGetEntries();
                    s32 recordCount = dataTableGetCount(table);
                    s32 k;

                    for (k = 0; k < recordCount; k++) {
                        DataRecord *record = &records[k];

                        if (record->kind == kind && record->sub == sub
                            && (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag) != 0)
                            && (record->forbiddenFlag == 0 || gameFlagIsSet(record->forbiddenFlag) == 0)) {
                            return &records[k];
                        }
                    }
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
