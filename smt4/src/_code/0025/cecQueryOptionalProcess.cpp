/* NON_MATCHING: compiler omits the retail zero-result initialization before the optional process query. */
#include "shard/W5_W5Match2_StatusQuery.h"
extern "C" {
extern CecProcessView *g_cecProcess;
u32 FUN_003bbc7c(void *process);
/* Query the communication process, or zero while absent. */
u32 cecQueryOptionalProcess(void) { if (g_cecProcess!=NULL) return FUN_003bbc7c(g_cecProcess->process); return 0; }
}
