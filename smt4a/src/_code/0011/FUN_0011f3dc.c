/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f3dc` (_code @ 0x11f3dc, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002e9ff5; /* 0x2e9ff5 */

/* Supplied declaration required: FUN_002f5020. */
extern unsigned int *FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00310ff2. */


void FUN_0011f3dc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  puVar1 = (unsigned int *)FUN_00304d10(param_2,0);
  if (puVar1 == (unsigned int *)0x0) {
    FUN_002f5020(&uStack_18,&LAB_002e9ff5,0xc,1);
    puVar1 = (unsigned int *)&uStack_18;
  }
  FUN_00310ff2(param_1,puVar1);
  return;
}
