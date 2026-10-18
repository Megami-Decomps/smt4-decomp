/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356750` (_code @ 0x356750, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004d4358; /* 0x4d4358 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int *FUN_002b5d0c(unsigned int *);


unsigned int FUN_00356750(unsigned int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002b5d0c(&DAT_004d4358);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)"摔5撔5ﰸ=捼5";
    puVar1[1] = param_3;
    *param_2 = (unsigned int)puVar1;
    return 0;
  }
  software_interrupt(0x23);
  return 0xd8604659;
}
