/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137138` (_code @ 0x137138, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e330; /* 0x44e330 */


unsigned int * FUN_00137138(void)

{
  unsigned int *puVar1;
  
  if (DAT_0044e330 == (romwright_code *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x28);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
    }
  }
  return puVar1;
}
