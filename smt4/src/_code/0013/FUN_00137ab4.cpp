/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137ab4` (_code @ 0x137ab4, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(unsigned int *, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */

/* Supplied declaration required: FUN_002c4938. */


unsigned int * FUN_00137ab4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  if (DAT_0044e330 == (romwright_code *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x1cc);
    if (puVar4 != (unsigned int *)0x0) {
      FUN_002c4938(puVar4,0x1cc);
      puVar4[1] = 0x2600;
      puVar4[2] = 0x2901;
      *puVar4 = 0x2600;
      puVar4[3] = 0x2901;
      puVar4[10] = 0;
      puVar4[9] = 0;
      puVar4[0xb] = 0;
      puVar4[5] = 0xfffffc18;
      puVar4[8] = 0;
      puVar4[7] = 0;
      temp_v1 = 0;
      temp_v0 = 0;
      puVar4[6] = 0;
      do {
        temp_v2 = temp_v1 + 1;
        puVar4[temp_v1 * 0x11 + 0x1d] = param_1;
        temp_v0 = temp_v0 + 2;
        temp_v1 = temp_v1 + 2;
        puVar4[temp_v2 * 0x11 + 0x1d] = param_1;
      } while (temp_v0 < 6);
    }
  }
  return puVar4;
}

} /* extern "C" */
