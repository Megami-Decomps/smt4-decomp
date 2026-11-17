/* NON_MATCHING: compiler omits the retail saved-register frame for the message-target stores. */
#include "ui/MessageMain.h"
extern "C" {
/* Begin a message target operation with both stored values synchronized. */
s32 messageSetTargetState(u32 value) { MessageWindow *target=g_messageMain.banner; target->counterState=3; target->counterDelta=value; target->counterElapsed=value; target->unk081=0; target->counterDuration=0; return 1; }
}
