/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a035c` (_code @ 0x2a035c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296e90(void);

extern int g_unite; /* 0x43dd68 */

/* Supplied declaration required: FUN_00296e90. */
extern int sys43e188GetState(void);


void FUN_002a035c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (g_unite != 0) {
    if ((*(char *)(g_unite + 0x430) != '\0') && (temp_v0 = sys43e188GetState(), temp_v0 == 0)) {
      FUN_00296e90();
    }
    if (g_unite != 0) {
      *(unsigned int *)(g_unite + 0x478) = 0xffffffff;
    }
  }
  return;
}

} /* extern "C" */
