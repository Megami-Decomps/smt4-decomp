/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040456c` (_code @ 0x40456c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039b984(void);

/* Supplied declaration required: FUN_0039b984. */


int FUN_0040456c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned short *)(unsigned int)*param_1;
  FUN_0039b984();
  puVar2 = (unsigned short *)(unsigned int)*param_2;
  FUN_0039b984();
  temp_v1 = 999;
  temp_v0 = temp_v1;
  if (puVar1 != (unsigned short *)0x0) {
    temp_v0 = (unsigned int)*puVar1;
  }
  if (puVar2 != (unsigned short *)0x0) {
    temp_v1 = (unsigned int)*puVar2;
  }
  return temp_v0 - temp_v1;
}

} /* extern "C" */
