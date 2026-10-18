/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003383a4` (_code @ 0x3383a4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002ac068(int, unsigned int);
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);


int FUN_003383a4(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x2244) != 0) {
    temp_v0 = FUN_002ac068(*(int *)(param_1 + 0x2244),0);
    temp_v1 = FUN_002c0cc4();
    if (param_2 - 0xfU < 7) {
      temp_v3 = (int)(short)(param_2 - 0xfU);
      temp_v2 = FUN_002c0c74(temp_v0);
      if (temp_v3 <= temp_v2 - 1) {
        temp_v1 = temp_v1 + temp_v3 * 0x1c;
      }
    }
  }
  return temp_v1;
}
