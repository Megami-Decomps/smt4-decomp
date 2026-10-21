/* NON_MATCHING: compiler uses conditional moves rather than retail branch blocks and architectural NOPs. */
#include "common.h"
extern "C" {
struct StateCheckWork { u8 unk00[0x5EC]; s32 state; };
void FUN_002fc29c(void);
/* Test the optional object's state and report a missing owner. */
s32 recordQueryOptionalState(StateCheckWork **owner) { if (*owner!=NULL) return (*owner)->state==1; FUN_002fc29c(); return 0; }
}
