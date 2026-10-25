/* The battle state's loaded data-table file (smt4). */
#ifndef SMT4_BATTLE_BTLTABLES_H
#define SMT4_BATTLE_BTLTABLES_H

#include "battle/btlMain.h"

extern "C" {

/* Section `table` of the battle state's data-table file (NULL when no file is loaded). */
void *btlMainGetDataTable(BtlMainState *state, u32 table);

} /* extern "C" */

#endif
