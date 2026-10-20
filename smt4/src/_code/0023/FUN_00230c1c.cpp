/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230c1c` (_code @ 0x230c1c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0022ea28(void);
extern int FUN_0028fb40(unsigned int);
extern int FUN_002b8dc0(unsigned int);
extern int aeabi_idivmod(unsigned int, unsigned int);


int FUN_00230c1c(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0022ea28();
  temp_v1 = aeabi_idivmod(temp_v0,param_2);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if (temp_v1 >= 100) {
    temp_v1 = 99;
  }
  temp_v2 = FUN_002b8dc0(param_1);
  temp_v3 = FUN_0028fb40(param_1);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if (temp_v2 - temp_v3 < temp_v1) {
    temp_v1 = temp_v2 - temp_v3;
  }
  return temp_v1;
}

} /* extern "C" */
