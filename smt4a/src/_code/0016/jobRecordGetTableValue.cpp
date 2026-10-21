#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern u8 DAT_0052f760[];
extern JobRecordBase *jobGetWork(u32 job);

/* Looks up the indexed byte within the job-selected record table. */
u32 jobRecordGetTableValue(u32 job, u32 index)
{
    JobRecordBase *work = jobGetWork(job);
    return DAT_0052f760[work->base + index * 3 - 4];
}

} /* extern "C" */
