/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011fee0` (_code @ 0x11fee0, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420eb4; /* 0x420eb4 */


void FUN_0011fee0(unsigned int param_1,int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0xc,4);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[2] = 0;
    *puVar1 = (unsigned int)&DAT_00420eb4;
    puVar1[1] = (unsigned int)param_2;
  }
  return;
}
