/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ecb0` (_code @ 0x31ecb0, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043df98; /* 0x43df98 */

extern int FUN_002bf41c(unsigned int);


void FUN_0031ecb0(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  if ((DAT_0043df98 != (unsigned int *)0x0) &&
     (temp_v0 = FUN_002bf41c(*DAT_0043df98), puVar1 = DAT_0043df98, temp_v0 != 0)) {
    DAT_0043df98[0x159] = 4;
    puVar1[0x15a] = 0;
  }
  return;
}
