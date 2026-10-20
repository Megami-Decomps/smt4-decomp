/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137b7c` (_code @ 0x137b7c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(unsigned int *, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */

/* Supplied declaration required: memClear. */


unsigned int * FUN_00137b7c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  if (DAT_0044e330 == (romwright_code *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x78);
    if (puVar1 != (unsigned int *)0x0) {
      memClear(puVar1,0x78);
      puVar1[1] = 0x2600;
      *puVar1 = 0x2600;
      puVar1[2] = 0x2901;
      puVar1[3] = 0x2901;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[5] = 0xfffffc18;
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[0x1d] = param_1;
    }
  }
  return puVar1;
}

} /* extern "C" */
