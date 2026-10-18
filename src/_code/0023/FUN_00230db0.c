/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230db0` (_code @ 0x230db0, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0022ebbc(void);
extern int FUN_0028fde4(unsigned int);
extern int FUN_002b9100(unsigned int);
extern int FUN_002c615c(unsigned int, unsigned int);


int FUN_00230db0(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0022ebbc();
  temp_v1 = FUN_002c615c(temp_v0,param_2);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if (temp_v1 >= 100) {
    temp_v1 = 99;
  }
  temp_v2 = FUN_002b9100(param_1);
  temp_v3 = FUN_0028fde4(param_1);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if (temp_v2 - temp_v3 < temp_v1) {
    temp_v1 = temp_v2 - temp_v3;
  }
  return temp_v1;
}
