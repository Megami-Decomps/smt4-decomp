/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00423a3c` (_code @ 0x423a3c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00422300; /* 0x422300 */

/* Supplied declaration required: FUN_002f5020. */


void FUN_00423a3c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)"㙰B㶔B㨐B㨄B";
  puVar1 = param_1 + 0x10;
  param_1[3] = 0;
  FUN_002f5020(puVar1,&LAB_00422300,0x20,3);
  puVar1[-0xc] = 0;
  puVar1[-0xb] = 0;
  puVar1[-10] = 0;
  puVar1[0x18] = 0;
  return;
}
