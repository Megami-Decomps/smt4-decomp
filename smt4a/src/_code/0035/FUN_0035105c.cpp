/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035105c` (_code @ 0x35105c, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int geometryDestroy(void);
int FUN_00350cf4(unsigned int, int);

/* Supplied declaration required: geometryDestroy. */
/* Supplied declaration required: FUN_00350cf4. */


void FUN_0035105c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x50) != 0) {
    geometryDestroy();
  }
  switch(param_3) {
  default:
    return;
  case 1:
  case 4:
  case 9:
    param_2 = param_2 & 0xffff;
    FUN_00350cf4(param_2,0x20080027);
    *(unsigned int *)(param_1 + 0x50) = param_2;
    return;
  case 2:
    param_2 = param_2 & 0xffff;
    FUN_00350cf4(param_2,0x200000a7);
    *(unsigned int *)(param_1 + 0x50) = param_2;
    return;
  }
}

} /* extern "C" */
