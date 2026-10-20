/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7b74` (_code @ 0x2a7b74, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int obj04Finish(void);

extern int g_unite; /* 0x57f290 */

extern int FUN_0026272c(void);
/* Supplied declaration required: obj04Finish. */


void FUN_002a7b74(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (g_unite != 0) {
    if ((*(char *)(g_unite + 0x430) != '\0') && (temp_v0 = FUN_0026272c(), temp_v0 == 0)) {
      obj04Finish();
    }
    if (g_unite != 0) {
      *(unsigned int *)(g_unite + 0x488) = 0xffffffff;
    }
  }
  return;
}

} /* extern "C" */
