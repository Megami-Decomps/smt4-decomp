/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003031f4` (_code @ 0x3031f4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9498(int *, unsigned int, unsigned char *, int);

extern unsigned char DAT_00538920; /* 0x538920 */

/* Supplied declaration required: FUN_002e9498. */


void FUN_003031f4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int uStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  FUN_002e9498(&uStack_10,param_1,&DAT_00538920,1);
  return;
}

} /* extern "C" */
