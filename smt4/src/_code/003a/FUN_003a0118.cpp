/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0118` (_code @ 0x3a0118, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00230f44(unsigned short *);
extern int FUN_0028fb3c(unsigned short);


int FUN_003a0118(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *param_2;
  temp_v1 = FUN_0028fb3c(*param_1);
  temp_v2 = FUN_0028fb3c(temp_v0);
  temp_v2 = temp_v2 - temp_v1;
  if (temp_v2 == 0) {
    temp_v2 = FUN_00230f44(param_1);
    temp_v1 = FUN_00230f44(param_2);
    temp_v2 = temp_v2 - temp_v1;
  }
  return temp_v2;
}

} /* extern "C" */
