/* NON_MATCHING: compiler omits the retail saved-register frame for the message-target stores. */
#include "shard/Sys43e188.h"
extern "C" {
/* Begin a message target operation with both stored values synchronized. */
s32 messageSetTargetState(u32 value) { Target43e188 *target=g_messageMain.target; target->unk7C=3; target->unk70=value; target->unk74=value; target->unk81=0; target->unk64=0; return 1; }
}
