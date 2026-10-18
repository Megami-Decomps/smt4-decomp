/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049cfcc` (_code @ 0x49cfcc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_0049cfcc(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00187180(0x17,0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if (param_2 >= temp_v2) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v1 + param_2 * 0x80;
  }
  return temp_v1;
}
