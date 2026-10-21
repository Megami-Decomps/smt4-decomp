/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287598` (_code @ 0x287598, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f9ac4(unsigned int, int, int);
int controllerRefreshAtUnitScale(unsigned int, int, int);
int FUN_003fe86c(unsigned int, int, int);

extern int g_unite; /* 0x57f290 */

/* Supplied declaration required: FUN_003f9ac4. */
/* Supplied declaration required: controllerRefreshAtUnitScale. */
/* Supplied declaration required: FUN_003fe86c. */


void FUN_00287598(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_unite;
  if (g_unite != 0) {
    FUN_003fe86c(*(unsigned int *)(*(int *)(g_unite + 0x9208) + 4),0,2);
    FUN_003fe86c(*(unsigned int *)(*(int *)(temp_v0 + 0x920c) + 4),0,2);
    controllerRefreshAtUnitScale(*(unsigned int *)(temp_v0 + 0x9210),temp_v0 + 0x9214,0);
    FUN_003f9ac4(*(unsigned int *)(temp_v0 + 0x9210),temp_v0 + 0x9214,0);
    *(unsigned int *)(temp_v0 + 0x9260) = 0x1e0;
    *(int *)(temp_v0 + 0x925c) = *(int *)(temp_v0 + 0x925c) + 1;
  }
  return;
}

} /* extern "C" */
