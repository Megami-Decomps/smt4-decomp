/* NON_MATCHING: compiler omits the retail saved-register frame for the message-target stores. */
#include "ui/MessageMain.h"
extern "C" {
extern MessageGlobals g_messageMain;
/* Begin a message target operation with both stored values synchronized. */
s32 messageSetTargetState(u32 value) { MessagePanel *target=g_messageMain.banner; target->unk7C=3; target->unk70=value; target->unk74=value; target->unk81=0; target->unk64=0; return 1; }
}
