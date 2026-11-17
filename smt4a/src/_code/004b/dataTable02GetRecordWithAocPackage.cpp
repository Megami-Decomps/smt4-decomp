#include "addon/aocMain.h"
#include "gamedata/EncountData.h"
#include "code/Code004b_Smt4a.h"
#include "addon/AocSystemA.h"

extern "C" {
EncountGroupRecordA *aocFindPackageRecord(AocSystemA* system, u32 index);

EncountGroupRecordA *dataTable02GetRecordWithAocPackage(s32 index)
{
    void* section = dataTableGet(2, 2);
    EncountGroupRecordA *records = encountGroupRecordsA(section);
    if (index < 0 || static_cast<u32>(index) >= dataTableGetCount(section)) {
        return records;
    }
    EncountGroupRecordA *record = aocFindPackageRecord(g_aocSystem, index);
    if (record == NULL) {
        record = &records[index];
    }
    return record;
}
}
