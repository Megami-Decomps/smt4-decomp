/* The battle state's loaded data-table file. */
#ifndef SMT4A_BATTLE_BTLTABLES_H
#define SMT4A_BATTLE_BTLTABLES_H

#include "battle/btlMain.h"

extern "C" {

/* Section `table` of the battle state's data-table file (NULL when no file is loaded). */
void *btlGetTable(BtlMainStateA *state, u32 table);

} /* extern "C" */

#endif
