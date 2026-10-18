/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a0b4` (_code @ 0x23a0b4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023a0d8(unsigned int, unsigned int *, unsigned int);
extern unsigned int FUN_002b5c44(void);


int FUN_0023a0b4(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  int uStack_10;
  
  uStack_10 = param_4;
  temp_v0 = FUN_002b5c44();
  temp_v1 = FUN_0023a0d8(temp_v0,(unsigned int *)&uStack_10,*param_1);
  if (-1 < temp_v1) {
    temp_v1 = 0;
  }
  return temp_v1;
}
