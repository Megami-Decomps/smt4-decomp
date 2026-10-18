/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4288` (_code @ 0x2a4288, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420f78; /* 0x420f78 */

/* Supplied declaration required: FUN_002c52f8. */


unsigned int * FUN_002a4288(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = (unsigned int)&DAT_00420f78;
  if (param_1[3] != 0) {
    FUN_002c52f8();
  }
  if (param_1[4] != 0) {
    FUN_002c52f8();
  }
  puVar1 = (unsigned int *)param_1[4];
  if (puVar1 != (unsigned int *)0x0) {
    do {
      puVar2 = (unsigned int *)puVar1[1];
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (puVar2 != (unsigned int *)0x0);
    param_1[4] = 0;
  }
  return param_1;
}
