/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba474` (_code @ 0x2ba474, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int controllerSetDestination(int, int);
int FUN_003fe86c(int, int, int);

extern int g_lmapScene; /* 0x581288 */
extern int g_mapTrap; /* 0x587f0c */

/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_003fe86c. */


void FUN_002ba474(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(*(int *)(g_mapTrap + 0x34) + 4);
  controllerSetDestination(temp_v0,g_lmapScene + 0x1c);
  FUN_003fe86c(temp_v0,0,2);
  *(unsigned int *)(temp_v0 + 0x1fc) = 0x40c00000;
  *(unsigned int *)(g_mapTrap + 100) = 1;
  return;
}

} /* extern "C" */
