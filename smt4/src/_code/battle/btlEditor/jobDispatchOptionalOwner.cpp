#include "common.h"
#include "shard/JobWork.h"
extern "C" {
extern void *DAT_00435ce8;
u32 btlDebugEditorStep(void *owner,void *work);
/* Dispatch current job work to the optional battle owner. */
u32 jobDispatchOptionalOwner(u32 job) { void *work=jobGetWork(job); return DAT_00435ce8!=NULL ? btlDebugEditorStep(DAT_00435ce8,work) : 0; }
}
