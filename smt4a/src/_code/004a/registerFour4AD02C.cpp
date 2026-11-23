#include "mobiclip/MoLiveHandlers.h"

extern "C" {

/* Registers the four selection-node creators in the handler table. */
void registerFour4AD02C(MessageHandlerTable *owner)
{
    FUN_004ad02c(owner, 1, 1, FUN_004acea0);
    FUN_004ad02c(owner, 3, 1, FUN_004ad310);
    FUN_004ad02c(owner, 2, 1, FUN_004acdb4);
    FUN_004ad02c(owner, 4, 1, selectionCreateKindFour);
}

} /* extern "C" */
