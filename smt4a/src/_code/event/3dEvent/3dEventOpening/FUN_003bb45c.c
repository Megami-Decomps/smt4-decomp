/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb45c` (_code @ 0x3bb45c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f4c0; /* 0x57f4c0 */

extern int FUN_00163e40(unsigned int);


void FUN_003bb45c(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  if ((DAT_0057f4c0 != (unsigned int *)0x0) &&
     (temp_v0 = FUN_00163e40(*DAT_0057f4c0), puVar1 = DAT_0057f4c0, temp_v0 != 0)) {
    DAT_0057f4c0[0x15a] = 4;
    puVar1[0x15b] = 0;
  }
  return;
}
