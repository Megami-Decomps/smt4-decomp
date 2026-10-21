#include "common.h"
extern "C" {
extern void *DAT_00435ce8;
void *jobGetWork(u32 job);
u32 FUN_003d8f60(void *owner,void *work);
/* Dispatch current job work to the optional battle owner. */
u32 jobDispatchOptionalOwner(u32 job) { void *work=jobGetWork(job); return DAT_00435ce8!=NULL ? FUN_003d8f60(DAT_00435ce8,work) : 0; }
}
