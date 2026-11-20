#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/JobWork.h"

extern "C" {

extern u8 g_jobRecordTable[];

/* Looks up the indexed byte within the job-selected record table. */
u32 jobRecordGetTableValue(u32 job, u32 index)
{
    JobRecordBase *work = (JobRecordBase *)jobGetWork(job);
    return g_jobRecordTable[work->base + index * 3 - 4];
}

} /* extern "C" */
