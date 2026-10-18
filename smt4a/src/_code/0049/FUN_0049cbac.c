/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049cbac` (_code @ 0x49cbac, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001774d8(unsigned int);
extern int FUN_001ba3d4(unsigned int);
extern unsigned int FUN_004d05b4(void);
extern int aeabi_idivmod(unsigned int, unsigned int);


int FUN_0049cbac(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_004d05b4();
  temp_v1 = aeabi_idivmod(temp_v0,param_2);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if (temp_v1 >= 100) {
    temp_v1 = 99;
  }
  temp_v2 = FUN_001774d8(param_1);
  temp_v3 = FUN_001ba3d4(param_1);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if (temp_v2 - temp_v3 < temp_v1) {
    temp_v1 = temp_v2 - temp_v3;
  }
  return temp_v1;
}
