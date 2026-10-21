/* NON_MATCHING: compiler writes the valid flag before copying the saved three-word snapshot. */
#include "shard/W5_W5Match2_JobSnapshot.h"
extern "C" {
JobSnapshotWork *jobGetWork(u32 job);
/* Snapshot the job position and mark the saved position valid. */
void jobSavePositionSnapshot(u32 job) { JobSnapshotWork *work=jobGetWork(job); work->saved=work->current; work->valid=1; }
}
