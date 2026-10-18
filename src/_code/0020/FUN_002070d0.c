/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002070d0` (_code @ 0x2070d0, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00288380(unsigned short);
extern int FUN_002a89e4(int);


int FUN_002070d0(unsigned int param_1,int *param_2,int *param_3)

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
      temp_v0 = FUN_002a89e4(*param_3);
      temp_v1 = FUN_002a89e4(*param_2);
      temp_v0 = FUN_00288380(*(unsigned short *)(temp_v0 + 0x46));
      temp_v1 = FUN_00288380(*(unsigned short *)(temp_v1 + 0x46));
      return temp_v1 - temp_v0;
    }
    temp_v0 = -1;
  }
  return temp_v0;
}
