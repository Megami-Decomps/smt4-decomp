/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004288bc` (_code @ 0x4288bc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0016ccfc(void);
extern int FUN_004287ac(unsigned int, unsigned int *, unsigned int);


int FUN_004288bc(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  int uStack_10;
  
  uStack_10 = param_4;
  temp_v0 = FUN_0016ccfc();
  temp_v1 = FUN_004287ac(temp_v0,(unsigned int *)&uStack_10,*param_1);
  if (-1 < temp_v1) {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
