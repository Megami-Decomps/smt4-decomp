#include "common.h"
extern "C" {
extern void *g_btlEncount;
void *jobGetWork(u32 job);
u32 FUN_003349c0(void *owner,void *work);
/* Dispatch current job work to the optional battle owner. */
u32 battleQueryEncounter(u32 job) { void *work=jobGetWork(job); return g_btlEncount!=NULL ? FUN_003349c0(g_btlEncount,work) : 0; }
}
