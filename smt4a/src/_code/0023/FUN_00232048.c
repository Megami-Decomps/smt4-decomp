/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232048` (_code @ 0x232048, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab854(int);
extern int FUN_002e5220(unsigned short);


int FUN_00232048(unsigned int param_1,int *param_2,int *param_3)

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
      temp_v0 = FUN_001ab854(*param_3);
      temp_v1 = FUN_001ab854(*param_2);
      temp_v0 = FUN_002e5220(*(unsigned short *)(temp_v0 + 0x62));
      temp_v1 = FUN_002e5220(*(unsigned short *)(temp_v1 + 0x62));
      return temp_v0 - temp_v1;
    }
    temp_v0 = -1;
  }
  return temp_v0;
}
