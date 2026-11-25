#ifndef SMT4_BATTLE_BATTLECOMMANDLOOKUP_H
#define SMT4_BATTLE_BATTLECOMMANDLOOKUP_H

#include "battle/BattleCommandTable.h"

/* Looks up a command in the protagonist's list or a party member's list. */
extern "C" const ContextCommandDefinition *btlDebugFindCommandByIndex(u8 index, bool protagonist);

/* Returns the command's contextual hint text, or NULL if its index is absent. */
extern "C" const char *btlFindCommandHint(u8 index, s32 protagonist);

#endif
