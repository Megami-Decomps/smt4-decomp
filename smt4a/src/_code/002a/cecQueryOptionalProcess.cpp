/* NON_MATCHING: compiler omits the retail zero-result initialization before the optional process query. */
#include "shard/W5_W5Match2_StatusQuery.h"
extern "C" {
extern CecProcessView *g_cecProcess;
u32 FUN_004bb2e4(void *process);
/* Query the communication process, or zero while absent. */
u32 cecQueryOptionalProcess(void) { if (g_cecProcess!=NULL) return FUN_004bb2e4(g_cecProcess->process); return 0; }
}
