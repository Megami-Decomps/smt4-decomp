/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001af814` (_code @ 0x1af814, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);

extern unsigned char DAT_0055845c; /* 0x55845c */

/* Supplied declaration required: sysFatalBreak. */


unsigned int * FUN_001af814(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = (unsigned int)&DAT_0055845c;
  if (param_1[3] != 0) {
    sysFatalBreak();
  }
  if (param_1[4] != 0) {
    sysFatalBreak();
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

} /* extern "C" */
