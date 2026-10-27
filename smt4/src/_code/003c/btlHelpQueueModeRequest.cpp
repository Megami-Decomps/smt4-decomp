#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlHelp.h"


extern "C" {

// Queue one of the two battle-help kinds and mark the request active.
void btlHelpQueueModeRequest(u32 alternate, u8 option)
{
    BtlMainState* state = btlGetMainState();
    u32 kind = alternate != 0 ? 7 : 6;
    u32 message = state->dialog.messageHandle;
    BtlHelpEntryIV* request = FUN_0022a4ac(0, 0, kind, message, NULL, option, -1);
    request->flags |= 1;
}
}
