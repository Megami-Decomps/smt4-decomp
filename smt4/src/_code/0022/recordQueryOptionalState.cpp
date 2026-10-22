/* NON_MATCHING: retail uses a full prologue, branch blocks and architectural NOPs; compiler shrink-wraps the call path. */
#include "common.h"
extern "C" {
struct StateCheckWork { u8 unk00[0x5EC]; s32 state; };
void FUN_002fc29c(void);
/* Test the optional object's state and report a missing owner. */
extern StateCheckWork *g_bustupCutAnim;
s32 recordQueryOptionalState(void) { if (g_bustupCutAnim!=NULL) return (g_bustupCutAnim)->state==1; FUN_002fc29c(); return 0; }
}
