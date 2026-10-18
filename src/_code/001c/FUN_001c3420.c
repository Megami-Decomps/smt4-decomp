/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3420` (_code @ 0x1c3420, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_001dbaa0. */
/* Supplied declaration required: FUN_0026e8fc. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_001c3420(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((DAT_0043ded0 != (unsigned int *)0x0) && (temp_v0 = FUN_002bf41c(*DAT_0043ded0), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v0 * 4 + 0x493790));
      if (temp_v1 != 0) {
        FUN_0026e8fc(*(unsigned int *)(temp_v0 * 4 + 0x493790),0);
        FUN_001dbaa0(*(unsigned int *)(temp_v0 * 4 + 0x493790));
      }
      *(unsigned int *)(temp_v0 * 4 + 0x493790) = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    FUN_002c45b8(*DAT_0043ded0,0);
  }
  return 1;
}
