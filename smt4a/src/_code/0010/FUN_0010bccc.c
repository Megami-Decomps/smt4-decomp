/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bccc` (_code @ 0x10bccc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002eac34(int);
extern int FUN_002eb6ae(int, unsigned int);


unsigned int FUN_0010bccc(unsigned int param_1,int param_2,int param_3,int param_4)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002eac34(param_3);
  if ((*(int *)(temp_v1 + 0xa4) != 0) && (*(char *)(param_2 + 0x88) == '\0')) {
    if ((param_3 != 10) && (param_3 != 2)) {
      temp_v0 = *(unsigned short *)(param_2 + 0x3c) & 0xf;
      if ((temp_v0 == 2) || (temp_v0 == 5)) {
        return 2;
      }
    }
    else if (param_4 != 0) {
      temp_v0 = *(unsigned short *)(param_2 + 0x3c) & 0xf;
      if ((temp_v0 == 2) || (temp_v0 == 3)) {
        return 3;
      }
    }
    else if (((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 3) &&
            (temp_v1 = FUN_002eb6ae(param_2,0x10), temp_v1 != 0)) {
      return 9;
    }
  }
  return 1;
}
