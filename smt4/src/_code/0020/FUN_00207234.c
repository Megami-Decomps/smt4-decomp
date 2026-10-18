/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207234` (_code @ 0x207234, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00288118(unsigned short);
extern int FUN_002a8740(int);


int FUN_00207234(unsigned int param_1,int *param_2,int *param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  if (*param_3 < 0) {
    if (-1 < *param_2) {
      temp_v0 = 1;
    }
  }
  else {
    if (-1 < *param_2) {
      temp_v0 = FUN_002a8740(*param_3);
      temp_v1 = FUN_002a8740(*param_2);
      temp_v0 = FUN_00288118(*(unsigned short *)(temp_v0 + 0x46));
      temp_v1 = FUN_00288118(*(unsigned short *)(temp_v1 + 0x46));
      return temp_v1 - temp_v0;
    }
    temp_v0 = -1;
  }
  return temp_v0;
}
