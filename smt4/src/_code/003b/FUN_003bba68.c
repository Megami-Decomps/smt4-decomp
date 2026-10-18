/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bba68` (_code @ 0x3bba68, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, int);


int FUN_003bba68(unsigned int param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0cec(0x33,param_2 + 1);
  temp_v1 = FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v0);
  if (param_3 >= temp_v2) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v1 + param_3 * 0xd0;
  }
  return temp_v1;
}
