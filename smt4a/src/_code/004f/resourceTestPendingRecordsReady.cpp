#include "gamedata/PendingResourceRecords.h"
extern "C" void rt_memcpy_w(void *, const void *, u32);

/* A marked record is ready once its resource has been supplied. */
extern "C" u32 resourceTestPendingRecordsReady(const PendingResourceOwner *owner, s32 allRecords)
{
    PendingResourceRecord record;
    if (allRecords != 0) {
        for (s32 i = 0; i < 3; i++) {
            rt_memcpy_w(&record, &owner->records[i], sizeof(record));
            if ((record.flags & 1) != 0 && record.resource == NULL) {
                return 0;
            }
        }
    } else {
        rt_memcpy_w(&record, &owner->records[2], sizeof(record));
        if ((record.flags & 1) != 0 && record.resource == NULL) {
            return 0;
        }
    }
    return 1;
}
