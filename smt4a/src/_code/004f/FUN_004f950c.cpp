#include "gamedata/PendingResourceRecords.h"

extern "C" {
u32 keyedRecordRegisterName(const char *);
u32 FUN_003478dc(u32, const char *);
void FUN_003afd30(void);
}

/* Register named VER resources and bind the resulting version handles. */
extern "C" u32 FUN_004f950c(PendingResourceOwner *owner, s32 allRecords)
{
    if (allRecords != 0) {
        for (s32 i = 0; i < 3; ++i) {
            PendingResourceRecord *record = &owner->records[i];
            const char *resource = record->resource;
            if (resource[0] == 'V' && resource[1] == 'E' && resource[2] == 'R') {
                u32 id = keyedRecordRegisterName(record->name);
                record->registeredId = (u8)id;
                record->registeredId = (u8)FUN_003478dc(id, resource);
            }
        }
    } else {
        PendingResourceRecord *record = &owner->records[2];
        const char *resource = record->resource;
        if (resource[0] == 'V' && resource[1] == 'E' && resource[2] == 'R') {
            u32 id = keyedRecordRegisterName(record->name);
            record->registeredId = (u8)id;
            record->registeredId = (u8)FUN_003478dc(id, resource);
        }
    }
    FUN_003afd30();
    return 1;
}
