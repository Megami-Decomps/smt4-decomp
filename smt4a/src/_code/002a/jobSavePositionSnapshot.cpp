#include "shard/W5_W5Match2_JobSnapshot.h"
#include "shard/JobWork.h"
extern "C" {
/* Snapshot the job position and mark the saved position valid. */
void jobSavePositionSnapshot(u32 job) { JobSnapshotWork *work=(JobSnapshotWork *)jobGetWork(job); work->saved=work->current; work->valid=1; }
}
