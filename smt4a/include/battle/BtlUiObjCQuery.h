/* Queries of the battle UI's objC block (smt4a). */
#ifndef SMT4A_BATTLE_BTLUIOBJCQUERY_H
#define SMT4A_BATTLE_BTLUIOBJCQUERY_H

#include "battle/btlUI.h"

extern "C" {

/* Scans objC's state bytes; the nonzero result tells the block is active. */
u32 FUN_002f934c(BtlUiObjCA *obj);

/* The same query on the global battle UI's objC; the argument is ignored. */
u32 FUN_004aa750(u32 block);

} /* extern "C" */

#endif
