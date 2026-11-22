#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"

extern "C" {

// Creates a help entry on the kind-six or kind-seven list and marks its low flag.
void FUN_004c8bb8(s32 alternate, u32 argument)
{
    BtlMainStateA* state = btlGetMainState();
    u32 kind = alternate != 0 ? 7 : 6;
    u32 context = state->helpMessages.context;
    BtlHelpEntryA *entry = FUN_00200a68(0, 0, kind, context, NULL, argument, -1, -1);
    entry->flags |= 1;
}
}
