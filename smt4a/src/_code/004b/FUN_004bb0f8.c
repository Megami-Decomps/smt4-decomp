/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb0f8` (_code @ 0x4bb0f8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00187180(unsigned int, int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_004bb0f8(unsigned int param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00187180(0x33,param_2 + 1);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if (param_3 >= temp_v2) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v1 + param_3 * 0xd0;
  }
  return temp_v1;
}
